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

#include "generator/internal/metadata_decorator_generator.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "absl/memory/memory.h"
#include "absl/strings/str_split.h"
#include "absl/strings/strip.h"
#include "generator/internal/codegen_utils.h"
#include "generator/internal/descriptor_utils.h"
#include "generator/internal/predicate_utils.h"
#include "generator/internal/printer.h"
#include <google/api/client.pb.h>
#include <google/protobuf/descriptor.h>

namespace google {
namespace cloud {
namespace generator_internal {

MetadataDecoratorGenerator::MetadataDecoratorGenerator(
    google::protobuf::ServiceDescriptor const* service_descriptor,
    VarsDictionary service_vars,
    std::map<std::string, VarsDictionary> service_method_vars,
    google::protobuf::compiler::GeneratorContext* context)
    : ServiceCodeGenerator("metadata_header_path", "metadata_cc_path",
                           service_descriptor, std::move(service_vars),
                           std::move(service_method_vars), context) {}

Status MetadataDecoratorGenerator::GenerateHeader() {
  header_.Print(CopyrightLicenseFileHeader());
  header_.Print(service_vars_,  // clang-format off
    "// Generated by the Codegen C++ plugin.\n"
    "// If you make any local changes, they will be lost.\n"
    "// source: $proto_file_name$\n"
    "#ifndef $header_include_guard$\n"
    "#define $header_include_guard$\n"
    "\n");
  // clang-format on

  // includes
  GenerateLocalIncludes(
      header_, {service_vars_["stub_header_path"],
                absl::StrCat(service_vars_["product_path"], "version.h"),
                "google/cloud/tracing_options.h"});
  GenerateSystemIncludes(header_, {"memory", "string"});

  auto result = OpenNamespaces(header_, NamespaceType::kInternal);
  if (!result.ok()) return result;

  // metadata decorator class
  header_.Print(
      service_vars_,  // clang-format off
    "class $metadata_class_name$ : public $stub_class_name$ {\n"
    " public:\n"
    "  ~$metadata_class_name$() override = default;\n"
    "  explicit $metadata_class_name$(std::shared_ptr<$stub_class_name$> child);\n"
    "\n");
  // clang-format on

  for (int i = 0; i < service_descriptor_->method_count(); ++i) {
    auto method = service_descriptor_->method(i);
    PrintMethod(
        *method, header_, MergeServiceAndMethodVars(*method),
        {MethodPattern({{IsResponseTypeEmpty,
                         // clang-format off
    "  Status $method_name$(\n",
    "  StatusOr<$response_type$> $method_name$(\n"},
   {"    grpc::ClientContext& context,\n"
    "    $request_type$ const& request) override;\n"
                         // clang-format on
                         "\n"}},
                       IsNonStreaming)},
        __FILE__, __LINE__);
  }

  header_.Print(
      service_vars_,  // clang-format off
    "  /// Poll a long-running operation.\n"
    "  StatusOr<google::longrunning::Operation> GetOperation(\n"
    "      grpc::ClientContext& context,\n"
    "      google::longrunning::GetOperationRequest const& request) "
    "override;\n"
    "\n"
    "  /// Cancel a long-running operation.\n"
    "  Status CancelOperation(\n"
    "      grpc::ClientContext& context,\n"
    "      google::longrunning::CancelOperationRequest const& request) "
    "override;\n"
    "\n");
  // clang-format on

  header_.Print(service_vars_,  // clang-format off
    " private:\n"
    "  void SetMetadata(grpc::ClientContext& context,\n"
    "                   std::string const& request_params);\n"
    "  std::shared_ptr<$stub_class_name$> child_;\n"
    "  std::string api_client_header_;\n"
    "};  // $metadata_class_name$\n"
    "\n");
  // clang-format on

  CloseNamespaces(header_);
  // close header guard
  header_.Print(service_vars_,  // clang-format off
      "#endif  // $header_include_guard$\n");
  // clang-format on
  return {};
}

Status MetadataDecoratorGenerator::GenerateCc() {
  cc_.Print(CopyrightLicenseFileHeader());
  cc_.Print(service_vars_,  // clang-format off
            "// Generated by the Codegen C++ plugin.\n"
            "// If you make any local changes, they will be lost.\n"
            "// source: $proto_file_name$\n\n");
  // clang-format on

  // includes
  GenerateLocalIncludes(cc_, {service_vars_["metadata_header_path"],
                              "google/cloud/grpc_error_delegate.h",
                              "google/cloud/internal/compiler_info.h",
                              "google/cloud/status_or.h"});
  GenerateSystemIncludes(
      cc_, {absl::StrCat(absl::StripSuffix(service_descriptor_->file()->name(),
                                           ".proto"),
                         ".grpc.pb.h"),
            "google/longrunning/operations.grpc.pb.h", "memory"});
  cc_.Print("\n");

  auto result = OpenNamespaces(cc_, NamespaceType::kInternal);
  if (!result.ok()) return result;

  cc_.Print(service_vars_,  // clang-format off
    "namespace {\n"
    "std::string ApiClientHeader() {\n"
    "  return \"gl-cpp/\" + google::cloud::internal::CompilerId() + "
    "\"-\" +\n"
    "         google::cloud::internal::CompilerVersion() + \"-\" +\n"
    "         google::cloud::internal::CompilerFeatures() + \"-\" "
    "+\n"
    "         google::cloud::internal::LanguageVersion() + \" "
    "gccl/\" +\n"
    "         google::cloud::version_string();\n"
    "}\n"
    "}  // namespace\n\n");
  // clang-format on

  // constructor
  cc_.Print(service_vars_,  // clang-format off
    "$metadata_class_name$::$metadata_class_name$(\n"
    "    std::shared_ptr<$stub_class_name$> child)\n"
    "    : child_(std::move(child)), api_client_header_(ApiClientHeader()) {}\n"
    "\n");
  // clang-format on

  // metadata decorator class member methods
  for (int i = 0; i < service_descriptor_->method_count(); ++i) {
    auto method = service_descriptor_->method(i);
    PrintMethod(
        *method, cc_, MergeServiceAndMethodVars(*method),
        {MethodPattern(
            {
                {IsResponseTypeEmpty,
                 // clang-format off
              "Status\n",
              "StatusOr<$response_type$>\n"},
             {"$metadata_class_name$::$method_name$(\n"
              "    grpc::ClientContext& context,\n"
              "    $request_type$ const& request) {\n"
              "  SetMetadata(context, \"$method_request_param_key$=\" + request.$method_request_param_value$);\n"
              "  return child_->$method_name$(context, request);\n"
              "}\n"
              "\n",}
                // clang-format on
            },
            // clang-format on
            IsNonStreaming)},
        __FILE__, __LINE__);
  }

  // long running operation support methods
  cc_.Print(
      service_vars_,  // clang-format off
      "StatusOr<google::longrunning::Operation> $metadata_class_name$::GetOperation(\n"
      "    grpc::ClientContext& context,\n"
      "    google::longrunning::GetOperationRequest const& request) {\n"
      "  SetMetadata(context, \"name=\" + request.name());\n"
      "  return child_->GetOperation(context, request);\n"
      "}\n"
      "\n"
      "Status $metadata_class_name$::CancelOperation(\n"
      "    grpc::ClientContext& context,\n"
      "    google::longrunning::CancelOperationRequest const& request) {\n"
      "  SetMetadata(context, \"name=\" + request.name());\n"
      "  return child_->CancelOperation(context, request);\n"
      "}\n\n"
                      // clang-format on
  );

  cc_.Print(
      service_vars_,  // clang-format off
    "void $metadata_class_name$::SetMetadata(grpc::ClientContext& context,\n"
    "                                        std::string const& "
    "request_params) {\n"
    "  context.AddMetadata(\"x-goog-request-params\", request_params);\n"
    "  context.AddMetadata(\"x-goog-api-client\", api_client_header_);\n"
    "}\n\n"
                      // clang-format on
  );

  CloseNamespaces(cc_);
  return {};
}

}  // namespace generator_internal
}  // namespace cloud
}  // namespace google
