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

#include "generator/internal/stub_header_generator.h"
#include "generator/internal/codegen_utils.h"
#include "generator/internal/data_model.h"
#include "generator/internal/printer.h"
#include <google/protobuf/descriptor.h>
#include <map>
#include <string>

namespace pb = google::protobuf;

namespace google {
namespace codegen {
namespace internal {

std::vector<std::string> BuildClientStubHeaderIncludes(
    pb::ServiceDescriptor const* service) {
  return {
      LocalInclude("google/cloud/backoff_policy.h"),
      LocalInclude("google/cloud/connection_options.h"),
      LocalInclude("google/cloud/internal/retry_policy.h"),
      LocalInclude("google/cloud/polling_policy.h"),
      LocalInclude("google/cloud/status_or.h"),
      LocalInclude("grpcpp/security/credentials.h"),
      // TODO(sdhart): change this to system once build issues are resolved
      LocalInclude(absl::StrCat(
          absl::StripSuffix(service->file()->name(), ".proto"), ".grpc.pb.h")),
      SystemInclude("memory")};
}

std::vector<std::string> BuildClientStubHeaderNamespaces(
    pb::ServiceDescriptor const* service) {
  std::vector<std::string> v = absl::StrSplit(service->file()->name(), '/');
  auto name = *--v.end();
  std::string inline_ns =
      absl::AsciiStrToUpper(absl::StripSuffix(name, ".proto")) + "_CLIENT_NS";
  return {"google", "cloud", std::string(absl::StripSuffix(name, ".proto")),
          inline_ns};
}

bool GenerateClientStubHeader(pb::ServiceDescriptor const* service,
                              std::map<std::string, std::string> const& vars,
                              Printer& p, std::string* /* error */) {
  auto includes = BuildClientStubHeaderIncludes(service);
  auto namespaces = BuildClientStubHeaderNamespaces(service);

  p->Print(vars,
           "// Generated by the Codegen C++ plugin.\n"
           "// If you make any local changes, they will be lost.\n"
           "// source: $proto_file_name$\n"
           "#ifndef $stub_header_include_guard_const$\n"
           "#define $stub_header_include_guard_const$\n"
           "\n");

  // includes
  for (auto const& include : includes) {
    p->Print("#include $include$\n", "include", include);
  }
  p->Print("\n");

  // namespace openers
  for (auto const& nspace : namespaces) {
    if (absl::EndsWith(nspace, "_CLIENT_NS")) {
      p->Print("inline namespace $namespace$ {\n", "namespace", nspace);
    } else {
      p->Print("namespace $namespace$ {\n", "namespace", nspace);
    }
  }
  p->Print("\n");

  // connection options
  p->Print(vars,
           "struct ConnectionOptionsTraits {\n"
           "  static std::string default_endpoint();\n"
           "  static std::string user_agent_prefix();\n"
           "  static int default_num_channels();\n"
           "};\n\n");
  p->Print(vars,
           "using ConnectionOptions =\n"
           "  google::cloud::ConnectionOptions<ConnectionOptionsTraits>;\n\n");

  // open internal namespace
  p->Print(vars, "namespace internal {\n");

  // retry policy
  // TODO(sdhart): figure out how to inject transient failure codes.
  p->Print(
      vars,
      "struct SafeGrpcRetry {\n"
      "  static inline bool IsOk(google::cloud::Status const& status) {\n"
      "    return status.ok();\n"
      "  }\n"
      "// TODO(sdhart): figure out how to inject transient failure codes.\n"
      "  static inline bool IsTransientFailure(google::cloud::Status const&) "
      "{\n"
      "    return false;\n"
      "  }\n"
      "  static inline bool IsPermanentFailure(google::cloud::Status const& "
      "status) {\n"
      "    return !IsOk(status) && !IsTransientFailure(status);\n"
      "  }\n"
      "};\n\n");

  // Abstract interface Stub base class
  p->Print(vars,
           "class $stub_class_name$ {\n"
           " public:\n"
           "  virtual ~$stub_class_name$() = 0;\n"
           "\n");

  DataModel::PrintMethods(
      service, vars, p,
      {{IsResponseTypeEmpty,
        // clang-format off
        "  virtual Status $method_name$(\n",
        "  virtual StatusOr<$response_type$> $method_name$(\n"},
       {"    grpc::ClientContext& context,\n"
        "    $request_type$ const& request) = 0;\n"
        "\n"}},
      // clang-format on
      IsNonStreaming);

  p->Print(vars,
           "  /// Poll a long-running operation.\n"
           "  virtual StatusOr<google::longrunning::Operation> GetOperation(\n"
           "      grpc::ClientContext& client_context,\n"
           "      google::longrunning::GetOperationRequest const& request) = 0;\n"
           "\n"
           "  /// Cancel a long-running operation.\n"
           "  virtual Status CancelOperation(\n"
           "      grpc::ClientContext& client_context,\n"
           "      google::longrunning::CancelOperationRequest const& request) = 0;\n"
           "\n");

  p->Print(vars,
           "};  // $stub_class_name$\n"
           "\n");

  // factory method
  p->Print(vars,
           "std::shared_ptr<$stub_class_name$>\n"
           "CreateDefault$stub_class_name$(ConnectionOptions options);\n"
           "\n");

  p->Print(vars, "}  // namespace internal\n\n");

  // retry policy aliases
  p->Print(
      vars,
      "using RetryPolicy =\n"
      "    google::cloud::internal::RetryPolicy<google::cloud::Status,\n"
      "                                         internal::SafeGrpcRetry>;\n"
      "\n"
      "using LimitedTimeRetryPolicy =\n"
      "    "
      "google::cloud::internal::LimitedTimeRetryPolicy<google::cloud::Status,\n"
      "                                                    "
      "internal::SafeGrpcRetry>;\n"
      "\n"
      "using LimitedErrorCountRetryPolicy =\n"
      "    google::cloud::internal::LimitedErrorCountRetryPolicy<\n"
      "        google::cloud::Status, internal::SafeGrpcRetry>;\n\n");

  // polling policy
  p->Print(
      vars,
      "template<typename Retry = LimitedTimeRetryPolicy,\n"
      "    typename Backoff = ExponentialBackoffPolicy>\n"
      "class GenericPollingPolicy : public PollingPolicy {\n"
      " public:\n"
      "  GenericPollingPolicy(Retry retry_policy, Backoff backoff_policy)\n"
      "      : retry_policy_(std::move(retry_policy)),\n"
      "        backoff_policy_(std::move(backoff_policy)) {}\n"
      "\n"
      "  std::unique_ptr<PollingPolicy> clone() const override {\n"
      "    return std::unique_ptr<PollingPolicy>(new "
      "GenericPollingPolicy(*this));\n"
      "  }\n"
      "\n"
      "  bool OnFailure(google::cloud::Status const& status) override {\n"
      "    return retry_policy_.OnFailure(status);\n"
      "  }\n"
      "\n"
      "  std::chrono::milliseconds WaitPeriod() override {\n"
      "    return backoff_policy_.OnCompletion();\n"
      "  }\n"
      "\n"
      " private:\n"
      "  Retry retry_policy_;\n"
      "  Backoff backoff_policy_;\n"
      "};\n\n");

  std::reverse(namespaces.begin(), namespaces.end());
  for (auto const& nspace : namespaces) {
    p->Print("}  // namespace $namespace$\n", "namespace", nspace);
  }

  p->Print(vars, "#endif  // $stub_header_include_guard_const$\n");

  return true;
}

}  // namespace internal
}  // namespace codegen
}  // namespace google
