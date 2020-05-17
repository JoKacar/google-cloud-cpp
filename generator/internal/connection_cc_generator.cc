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

#include "generator/internal/connection_cc_generator.h"
#include "generator/internal/codegen_utils.h"
#include "generator/internal/data_model.h"
#include "generator/internal/printer.h"
#include <google/protobuf/descriptor.h>
#include <memory>
#include <sstream>
#include <string>

namespace google {
namespace codegen {
namespace internal {

std::vector<std::string> BuildClientCCIncludes(
    google::protobuf::ServiceDescriptor const* service) {
  return {
      LocalInclude(
          absl::StrCat(internal::ServiceNameToFilePath(service->full_name()),
                       "_connection" + GeneratedFileSuffix() + ".h")),
      LocalInclude(
          absl::StrCat(internal::ServiceNameToFilePath(service->full_name()),
                       "_stub" + GeneratedFileSuffix() + ".h")),
      LocalInclude("google/cloud/internal/retry_loop.h"),
      LocalInclude("google/cloud/status_or.h"),
  };
}

std::vector<std::string> BuildClientCCNamespaces(
    google::protobuf::ServiceDescriptor const* service) {
  std::vector<std::string> v = absl::StrSplit(service->file()->name(), '/');
  auto name = *--v.end();
  std::string inline_ns =
      absl::AsciiStrToUpper(absl::StripSuffix(name, ".proto")) + "_CLIENT_NS";
  return {"google", "cloud", std::string(absl::StripSuffix(name, ".proto")),
          inline_ns};
}

bool GenerateClientConnectionCC(
    google::protobuf::ServiceDescriptor const* service,
    std::map<std::string, std::string> const& vars, Printer& p,
    std::string* /* error */) {
  auto includes = BuildClientCCIncludes(service);
  auto namespaces = BuildClientCCNamespaces(service);

  p->Print(vars,
           "// Generated by the Codegen C++ plugin.\n"
           "// If you make any local changes, they will be lost.\n"
           "// source: $proto_file_name$\n");

  for (auto include : includes) {
    p->Print("#include $include$\n", "include", include);
  }
  p->Print("\n");

  for (auto nspace : namespaces) {
    if (absl::EndsWith(nspace, "_CLIENT_NS")) {
      p->Print("inline namespace $namespace$ {\n", "namespace", nspace);
    } else {
      p->Print("namespace $namespace$ {\n", "namespace", nspace);
    }
  }
  p->Print("\n");

  p->Print(vars,
           "$class_name$Connection::~$class_name$Connection() = default;\n\n");

  // default not implemented returning methods
  DataModel::PrintMethods(
      service, vars, p,
      "StatusOr<$response_object$>\n"
      "$class_name$Connection::$method_name$(\n"
      "    $request_object$ const& request) {\n"
      "  return Status(StatusCode::kUnimplemented, \"not implemented\");\n"
      "}\n"
      "\n",
      NoStreamingPredicate);

  p->Print(vars, "namespace {\n\n");

  // default policies
  p->Print(
      vars,
      "std::unique_ptr<RetryPolicy> DefaultRetryPolicy() {\n"
      "  return LimitedTimeRetryPolicy(std::chrono::minutes(30)).clone();\n"
      "}\n\n");
  p->Print(vars,
           "std::unique_ptr<BackoffPolicy> DefaultBackoffPolicy() {\n"
           "  auto constexpr kBackoffScaling = 2.0;\n"
           "  return ExponentialBackoffPolicy(std::chrono::seconds(1),\n"
           "                                  std::chrono::minutes(5), "
           "kBackoffScaling)\n"
           "      .clone();\n"
           "}\n\n");
  p->Print(vars,
           "std::unique_ptr<PollingPolicy> DefaultPollingPolicy() {\n"
           "  auto constexpr kBackoffScaling = 2.0;\n"
           "  return GenericPollingPolicy<>(\n"
           "             LimitedTimeRetryPolicy(std::chrono::minutes(30)),\n"
           "             ExponentialBackoffPolicy(std::chrono::seconds(10),\n"
           "                                      std::chrono::minutes(5), "
           "kBackoffScaling))\n"
           "      .clone();\n"
           "}\n\n");

  // default connection implementation class
  p->Print(
      vars,
      "class $class_name$ConnectionImpl : public $class_name$Connection {\n"
      " public:\n"
      "  explicit $class_name$ConnectionImpl(\n"
      "      std::shared_ptr<internal::$class_name$Stub> stub,\n"
      "      std::unique_ptr<RetryPolicy> retry_policy,\n"
      "      std::unique_ptr<BackoffPolicy> backoff_policy,\n"
      "      std::unique_ptr<PollingPolicy> polling_policy)\n"
      "      : stub_(std::move(stub)),\n"
      "        retry_policy_prototype_(std::move(retry_policy)),\n"
      "        backoff_policy_prototype_(std::move(backoff_policy)),\n"
      "        polling_policy_prototype_(std::move(polling_policy)) {}\n"
      "\n"
      "  explicit $class_name$ConnectionImpl(\n"
      "      std::shared_ptr<internal::$class_name$Stub> stub)\n"
      "      : $class_name$ConnectionImpl(std::move(stub), "
      "DefaultRetryPolicy(),\n"
      "                                    DefaultBackoffPolicy(),\n"
      "                                    DefaultPollingPolicy()) {}\n"
      "\n"
      "  ~$class_name$ConnectionImpl() override = default;\n\n");

  DataModel::PrintMethods(
      service, vars, p,
      "StatusOr<$response_object$>\n"
      "$method_name$(\n"
      "    $request_object$ const& request) override {\n"
      "  return google::cloud::internal::RetryLoop(\n"
      "     retry_policy_prototype_->clone(), "
      "backoff_policy_prototype_->clone(),\n"
      "     false,\n"
      "     [this](grpc::ClientContext& context,\n"
      "            $request_object$ const& request) {\n"
      "       return stub_->$method_name$(context, request);\n"
      "     },\n"
      "     request, __func__);\n"
      "}\n"
      "\n",
      NoStreamingPredicate);

  p->Print(vars,
           " private:\n"
           "  std::shared_ptr<internal::$class_name$Stub> stub_;\n"
           "  std::unique_ptr<RetryPolicy const> retry_policy_prototype_;\n"
           "  std::unique_ptr<BackoffPolicy const> backoff_policy_prototype_;\n"
           "  std::unique_ptr<PollingPolicy const> polling_policy_prototype_;\n"
           "};\n");

  p->Print(vars, "}  // namespace\n\n");

  p->Print(
      vars,
      "std::shared_ptr<$class_name$Connection> Make$class_name$Connection(\n"
      "    ConnectionOptions const& options) {\n"
      "  return std::make_shared<$class_name$ConnectionImpl>(\n"
      "      internal::CreateDefault$class_name$Stub(options));\n"
      "}\n\n");

  p->Print(
      vars,
      "std::shared_ptr<$class_name$Connection> Make$class_name$Connection(\n"
      "    ConnectionOptions const& options, std::unique_ptr<RetryPolicy> "
      "retry_policy,\n"
      "    std::unique_ptr<BackoffPolicy> backoff_policy,\n"
      "    std::unique_ptr<PollingPolicy> polling_policy) {\n"
      "  return std::make_shared<$class_name$ConnectionImpl>(\n"
      "      internal::CreateDefault$class_name$Stub(options),\n"
      "      std::move(retry_policy), std::move(backoff_policy),\n"
      "      std::move(polling_policy));\n"
      "}\n\n");

  p->Print(
      vars,
      "namespace internal {\n"
      "std::shared_ptr<$class_name$Connection> Make$class_name$Connection(\n"
      "    std::shared_ptr<internal::$class_name$Stub> stub,\n"
      "    std::unique_ptr<RetryPolicy> retry_policy,\n"
      "    std::unique_ptr<BackoffPolicy> backoff_policy,\n"
      "    std::unique_ptr<PollingPolicy> polling_policy) {\n"
      "  return std::make_shared<$class_name$ConnectionImpl>(\n"
      "      std::move(stub), std::move(retry_policy), "
      "std::move(backoff_policy),\n"
      "      std::move(polling_policy));\n"
      "}\n"
      "}  // namespace internal\n");

  std::reverse(namespaces.begin(), namespaces.end());
  for (auto const& nspace : namespaces) {
    p->Print("}  // namespace $namespace$\n", "namespace", nspace);
  }

  return true;
}

}  // namespace internal
}  // namespace codegen
}  // namespace google
