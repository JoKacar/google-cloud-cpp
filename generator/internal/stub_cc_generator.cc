// Copyright 2019 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "generator/internal/stub_cc_generator.h"
#include "generator/internal/codegen_utils.h"
#include "generator/internal/data_model.h"
#include "generator/internal/printer.h"
#include <google/protobuf/descriptor.h>

namespace pb = google::protobuf;

namespace google {
namespace codegen {
namespace internal {

std::vector<std::string> BuildClientStubCCIncludes(
    pb::ServiceDescriptor const* service) {
  return {
      LocalInclude(
          absl::StrCat(internal::ServiceNameToFilePath(service->full_name()),
                       "_stub" + GeneratedFileSuffix() + ".h")),
      LocalInclude(
          absl::StrCat(internal::ServiceNameToFilePath(service->full_name()),
                       "_logging" + GeneratedFileSuffix() + ".h")),
      LocalInclude(
          absl::StrCat(internal::ServiceNameToFilePath(service->full_name()),
                       "_metadata" + GeneratedFileSuffix() + ".h")),
      LocalInclude("google/cloud/internal/compiler_info.h"),
      LocalInclude("google/cloud/internal/getenv.h"),
      LocalInclude("google/cloud/status_or.h"),
      LocalInclude("google/cloud/grpc_error_delegate.h"),
      LocalInclude("grpcpp/client_context.h"), LocalInclude("grpcpp/channel.h"),
      LocalInclude("grpcpp/create_channel.h"),
      // TODO(sdhart): change this to system once build issues are resolved
      LocalInclude(absl::StrCat(
          absl::StripSuffix(service->file()->name(), ".proto"), ".grpc.pb.h")),
      SystemInclude("google/longrunning/operations.grpc.pb.h")};
}

std::vector<std::string> BuildClientStubCCNamespaces(
    pb::ServiceDescriptor const* service) {
  std::vector<std::string> v = absl::StrSplit(service->file()->name(), '/');
  auto name = *--v.end();
  std::string inline_ns =
      absl::AsciiStrToUpper(absl::StripSuffix(name, ".proto")) + "_CLIENT_NS";
  return {"google", "cloud", std::string(absl::StripSuffix(name, ".proto")),
          inline_ns};
}

bool GenerateClientStubCC(pb::ServiceDescriptor const* service,
                          std::map<std::string, std::string> const& vars,
                          Printer& p, std::string* /* error */) {
  auto includes = BuildClientStubCCIncludes(service);
  auto namespaces = BuildClientStubCCNamespaces(service);

  p->Print(vars,
           "// Generated by the Codegen C++ plugin.\n"
           "// If you make any local changes, they will be lost.\n"
           "// source: $proto_file_name$\n"
           "\n");

  // includes
  for (auto const& include : includes) {
    p->Print("#include $include$\n", "include", include);
  }
  p->Print("\n");

  // namespace opener
  for (auto const& nspace : namespaces) {
    if (absl::EndsWith(nspace, "_CLIENT_NS")) {
      p->Print("inline namespace $namespace$ {\n", "namespace", nspace);
    } else {
      p->Print("namespace $namespace$ {\n", "namespace", nspace);
    }
  }
  p->Print("\n");

  // TODO(sdhart): get correct label for env var
  // ConnectionOptions implementation
  p->Print(vars,
           "std::string ConnectionOptionsTraits::default_endpoint() {\n"
           "  auto default_endpoint = google::cloud::internal::GetEnv(\n"
           "    \"GOOGLE_CLOUD_CPP_$class_name$_DEFAULT_ENDPOINT\");\n"
           "  return default_endpoint.has_value() ? *default_endpoint\n"
           "                           : \"$service_endpoint$\";\n"
           "}\n");
  p->Print(
      vars,
      "std::string ConnectionOptionsTraits::user_agent_prefix() {\n"
      "  return \"gcloud-cpp/\" + google::cloud::version_string() + \" (\" +\n"
      "    google::cloud::internal::CompilerId() + \"-\" + "
      "google::cloud::internal::CompilerVersion() + \"; \" +\n"
      "    google::cloud::internal::CompilerFeatures() + \")\";\n"
      "}\n");
  p->Print(
      vars,
      "int ConnectionOptionsTraits::default_num_channels() { return 4; }\n\n");

  // open internal namespace
  p->Print(vars, "namespace internal {\n");

  // default destructor for interface
  p->Print(vars, "$stub_class_name$::~$stub_class_name$() = default;\n\n");

  // define default stub class and constructor
  p->Print(vars,
           "class Default$stub_class_name$ : public $stub_class_name$ {\n"
           " public:\n"
           "  Default$stub_class_name$(\n"
           "      std::unique_ptr<$grpc_stub_fqn$::Stub> grpc_stub,\n"
           "      std::unique_ptr<google::longrunning::Operations::Stub> "
           "operations)\n"
           "      : grpc_stub_(std::move(grpc_stub)),\n"
           "        operations_(std::move(operations)) {}\n\n");

  // emit methods
  DataModel::PrintMethods(
      service, vars, p,
      {{IsResponseTypeEmpty,
        // clang-format off
        "  Status\n",
        "  StatusOr<$response_type$>\n"},
       {"  $method_name$(\n"
        "    grpc::ClientContext& client_context,\n"
        "    $request_type$ const& request) override {\n"
        "      $response_type$ response;\n"
        "      auto status =\n"
        "          grpc_stub_->$method_name$(&client_context, request, "
        "  &response);\n"
        "      if (!status.ok()) {\n"
        "        return google::cloud::MakeStatusFromRpcError(status);\n"
        "      }\n"},
       {IsResponseTypeEmpty,
        "      return google::cloud::Status();\n",
        "      return response;\n"},
       {"  }\n"
        "\n"}},
      // clang-format on
      IsNonStreaming);

  p->Print(
      vars,
      "  StatusOr<google::longrunning::Operation> GetOperation(\n"
      "      grpc::ClientContext& client_context,\n"
      "      google::longrunning::GetOperationRequest const& request) override {\n"
      "    google::longrunning::Operation response;\n"
      "    grpc::Status status =\n"
      "        operations_->GetOperation(&client_context, request, &response);\n"
      "    if (!status.ok()) {\n"
      "      return google::cloud::MakeStatusFromRpcError(status);\n"
      "    }\n"
      "    return response;\n"
      "  }\n"
      "\n"
      "  Status CancelOperation(\n"
      "      grpc::ClientContext& client_context,\n"
      "      google::longrunning::CancelOperationRequest const& request) override {\n"
      "    google::protobuf::Empty response;\n"
      "    grpc::Status status =\n"
      "        operations_->CancelOperation(&client_context, request, &response);\n"
      "    if (!status.ok()) {\n"
      "      return google::cloud::MakeStatusFromRpcError(status);\n"
      "    }\n"
      "    return google::cloud::Status();\n"
      "  }\n"
      "\n"
      );

  // private members and close class defintion
  p->Print(
      vars,
      " private:\n"
      "  std::unique_ptr<$grpc_stub_fqn$::Stub> grpc_stub_;\n"
      "  std::unique_ptr<google::longrunning::Operations::Stub> operations_;\n"
      "};\n\n");

  // implement factory function
  p->Print(
      vars,
      "std::shared_ptr<$stub_class_name$> CreateDefault$stub_class_name$(\n"
      "    ConnectionOptions options) {\n"
      "  auto channel =\n"
      "      grpc::CreateCustomChannel(options.endpoint(), "
      "options.credentials(),\n"
      "                                options.CreateChannelArguments());\n"
      "  auto service_grpc_stub = $grpc_stub_fqn$::NewStub(channel);\n"
      "  auto longrunning_grpc_stub =\n"
      "      google::longrunning::Operations::NewStub(channel);\n"
      "\n"
      "  std::shared_ptr<$stub_class_name$> stub =\n"
      "      std::make_shared<Default$stub_class_name$>(\n"
      "          std::move(service_grpc_stub), "
      "std::move(longrunning_grpc_stub));\n"
      "\n"
      "  stub = std::make_shared<$metadata_class_name$>(std::move(stub));\n"
      "\n"
      "  if (options.tracing_enabled(\"rpc\")) {\n"
      "    // GCP_LOG(INFO) << \"Enabled logging for gRPC calls\";\n"
      "    stub = std::make_shared<$logging_class_name$>(std::move(stub),\n"
      "                                                  "
      "options.tracing_options());\n"
      "  }\n"
      "  return stub;\n"
      "}\n");

  p->Print(vars, "}  // namespace internal\n");
  std::reverse(namespaces.begin(), namespaces.end());
  for (auto const& nspace : namespaces) {
    p->Print("}  // namespace $namespace$\n", "namespace", nspace);
  }

  return true;
}

}  // namespace internal
}  // namespace codegen
}  // namespace google
