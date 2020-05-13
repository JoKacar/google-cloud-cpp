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

#include "generator/internal/client_header_generator.h"
#include "generator/internal/codegen_utils.h"
#include "generator/internal/data_model.h"
#include "generator/internal/printer.h"
#include <google/protobuf/descriptor.h>
#include <memory>
#include <sstream>
#include <string>

namespace pb = google::protobuf;

namespace google {
namespace codegen {
namespace internal {

std::vector<std::string> BuildClientHeaderIncludes(
    pb::ServiceDescriptor const* service) {
  return {
      SystemInclude("memory"),
      LocalInclude(
          absl::StrCat(internal::ServiceNameToFilePath(service->name()),
                       "_stub" + GeneratedFileSuffix() + " .h")),
      LocalInclude(absl::StrCat(
          absl::StripSuffix(service->file()->name(), ".proto"), ".pb.h")),

      LocalInclude("gax/status_or.h"),
      LocalInclude("gax/retry_policy.h"),
      LocalInclude("gax/backoff_policy.h"),
  };
}

std::vector<std::string> BuildClientHeaderNamespaces(
    pb::ServiceDescriptor const* /* service */) {
  return std::vector<std::string>();
}

bool GenerateClientHeader(pb::ServiceDescriptor const* service,
                          std::map<std::string, std::string> const& vars,
                          Printer& p, std::string* /* error */) {
  auto includes = BuildClientHeaderIncludes(service);
  auto namespaces = BuildClientHeaderNamespaces(service);

  p->Print(vars,
           "// Generated by the Codegen C++ plugin.\n"
           "// If you make any local changes, they will be lost.\n"
           "// source: $proto_file_name$\n"
           "#ifndef $header_include_guard_const$\n"
           "#define $header_include_guard_const$\n"
           "\n");

  for (auto include : includes) {
    p->Print("#include $include$\n", "include", include);
  }

  for (auto nspace : namespaces) {
    p->Print("namespace $namespace$ {\n", "namespace", nspace);
  }

  p->Print(vars,
           "\n"
           "$class_comment_block$\n"
           "class $class_name$ final {\n"
           " public:\n"
           "  $class_name$(std::shared_ptr<$stub_class_name$> stub) : \n"
           "    stub_(std::move(stub)) {}\n"
           "\n"
           "  template<typename... Policies>\n"
           "  $class_name$(std::shared_ptr<$stub_class_name$> stub, \n"
           "    Policies&&... policies) : $class_name$(std::move(stub)) {\n"
           "    ChangePolicies(std::forward<policies>...);\n"
           "  }\n"
           "\n"
           "  $class_name$($class_name$ const&) = delete;\n"
           "  $class_name$& operator=($class_name$ const&) = delete;\n"
           "\n"
           "  std::shared_ptr<$stub_class_name$> Stub() { return stub_; }\n"
           "\n");

  DataModel::PrintMethods(service, vars, p,
                          "  google::gax::StatusOr<$response_object$> \n"
                          "  $method_name$($request_object$ const& request);\n"
                          "\n",
                          NoStreamingPredicate);

  p->Print(vars,
           "\n"
           " private:\n"
           "  void ChangePolicy(google::gax::RetryPolicy const& policy) {\n"
           "    retry_policy_ = policy.clone();\n"
           "  }\n"
           "  void ChangePolicy(google::gax::BackoffPolicy const& policy) {\n"
           "    backoff_policy_ = policy.clone();\n"
           "  }\n"
           "  void ChangePolicies() {}\n"
           "\n"
           "  template <typename Policy, typename... Policies>\n"
           "  void ChangePolicies(Policy&& policy, Policies&&... policies) {\n"
           "    ChangePolicy(policy);\n"
           "    ChangePolicies(std::forward<Policies>(policies)...);\n"
           "  }\n"
           "\n"
           "  std::shared_ptr<$stub_class_name$> stub_;\n"
           "  std::unique_ptr<google::gax::RetryPolicy> retry_policy_;\n"
           "  std::unique_ptr<google::gax::BackoffPolicy> backoff_policy_;\n"
           "\n"
           "  // Note: conservatively assume no methods are idempotent.\n"
           "  //       This will eventually be set from annotations.\n");

  DataModel::PrintMethods(
      service, vars, p,
      "  static constexpr google::gax::MethodInfo $method_name_snake$_info = {"
      "\n"
      "      \"$method_name$\", google::gax::MethodInfo::RpcType::NORMAL_RPC,\n"
      "      google::gax::MethodInfo::Idempotency::NON_IDEMPOTENT};\n",
      NoStreamingPredicate);

  p->Print(vars,
           "}; // $class_name$\n"
           "\n");

  for (auto nspace : namespaces) {
    p->Print("} // namespace $namespace$\n", "namespace", nspace);
  }

  p->Print(vars, "#endif // $header_include_guard_const$\n");

  return true;
}

}  // namespace internal
}  // namespace codegen
}  // namespace google
