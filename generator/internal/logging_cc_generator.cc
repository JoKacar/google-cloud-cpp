// Copyright 2020 Google LLC
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

#include "generator/internal/logging_cc_generator.h"
#include "generator/internal/codegen_utils.h"
#include "generator/internal/data_model.h"
#include "generator/internal/printer.h"
#include <google/protobuf/descriptor.h>

namespace google {
namespace codegen {
namespace internal {

std::vector<std::string> BuildClientLoggingCCIncludes(
    google::protobuf::ServiceDescriptor const* service) {
  return {LocalInclude(absl::StrCat(
              internal::ServiceNameToFilePath(service->full_name()),
              "_logging" + GeneratedFileSuffix() + ".h")),
          LocalInclude("google/cloud/internal/log_wrapper.h")};
}

std::vector<std::string> BuildClientLoggingCCNamespaces(
    google::protobuf::ServiceDescriptor const* service) {
  std::vector<std::string> v = absl::StrSplit(service->file()->name(), '/');
  auto name = *--v.end();
  std::string inline_ns =
      absl::AsciiStrToUpper(absl::StripSuffix(name, ".proto")) + "_CLIENT_NS";
  return {"google", "cloud", std::string(absl::StripSuffix(name, ".proto")),
          inline_ns};
}

bool GenerateClientLoggingCC(google::protobuf::ServiceDescriptor const* service,
                             std::map<std::string, std::string> const& vars,
                             Printer& p, std::string* /* error */) {
  auto includes = BuildClientLoggingCCIncludes(service);
  auto namespaces = BuildClientLoggingCCNamespaces(service);

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
  // open internal namespace
  p->Print(vars, "namespace internal {\n");

  // constructor
  p->Print(vars,
           "$logging_class_name$::$logging_class_name$(\n"
           "    std::shared_ptr<$stub_class_name$> child,\n"
           "    TracingOptions tracing_options)\n"
           "    : child_(std::move(child)), "
           "tracing_options_(std::move(tracing_options)) {}\n"
           "\n");

  // emit methods
  DataModel::PrintMethods(
      service, vars, p,
      {
          {IsResponseTypeEmpty,
           // clang-format off
        "Status\n",
        "StatusOr<$response_type$>\n"},
       {
        "$logging_class_name$::$method_name$(\n"
        "    grpc::ClientContext& context,\n"
        "    $request_type$ const& request) {\n"
        "  return google::cloud::internal::LogWrapper(\n"
        "      [this](grpc::ClientContext& context,\n"
        "             $request_type$ const& request) {\n"
        "        return child_->$method_name$(context, request);\n"
        "      },\n"
        "      context, request, __func__, tracing_options_);\n"
        "}\n"
        "\n",}
          // clang-format on
      },
      IsNonStreaming);

  p->Print(
      vars,
      // clang-format off
      "StatusOr<google::longrunning::Operation> $logging_class_name$::GetOperation(\n"
      "    grpc::ClientContext& context,\n"
      "    google::longrunning::GetOperationRequest const& request) {\n"
      "  return google::cloud::internal::LogWrapper(\n"
      "      [this](grpc::ClientContext& context,\n"
      "             google::longrunning::GetOperationRequest const& request) {\n"
      "        return child_->GetOperation(context, request);\n"
      "      },\n"
      "      context, request, __func__, tracing_options_);\n"
      "}\n"
      "\n"
      "Status $logging_class_name$::CancelOperation(\n"
      "    grpc::ClientContext& context,\n"
      "    google::longrunning::CancelOperationRequest const& request) {\n"
      "  return google::cloud::internal::LogWrapper(\n"
      "      [this](grpc::ClientContext& context,\n"
      "             google::longrunning::CancelOperationRequest const& request) {\n"
      "        return child_->CancelOperation(context, request);\n"
      "      },\n"
      "      context, request, __func__, tracing_options_);\n"
      "}\n"
      "\n"
      // clang-format on
      );

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
