// Copyright 2022 Google LLC
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

#include "generator/internal/stub_rest_generator.h"
#include "absl/memory/memory.h"
#include "absl/strings/str_split.h"
#include "generator/internal/codegen_utils.h"
#include "generator/internal/predicate_utils.h"
#include "generator/internal/printer.h"
#include <google/protobuf/descriptor.h>

namespace google {
namespace cloud {
namespace generator_internal {

StubRestGenerator::StubRestGenerator(
    google::protobuf::ServiceDescriptor const* service_descriptor,
    VarsDictionary service_vars,
    std::map<std::string, VarsDictionary> service_method_vars,
    google::protobuf::compiler::GeneratorContext* context)
    : ServiceCodeGenerator("stub_rest_header_path", "stub_rest_cc_path",
                           service_descriptor, std::move(service_vars),
                           std::move(service_method_vars), context) {}

Status StubRestGenerator::GenerateHeader() {
  HeaderPrint(CopyrightLicenseFileHeader());
  HeaderPrint(R"""(
// Generated by the Codegen C++ plugin.
// If you make any local changes, they will be lost.
// source: $proto_file_name$

#ifndef $header_include_guard$
#define $header_include_guard$
)""");

  HeaderPrint("\n");
  HeaderLocalIncludes({"google/cloud/internal/rest_client.h",
                       "google/cloud/internal/rest_context.h",
                       "google/cloud/status_or.h", "google/cloud/version.h"});
  std::vector<std::string> additional_pb_header_paths =
      absl::StrSplit(vars("additional_pb_header_paths"), absl::ByChar(','));
  HeaderSystemIncludes(additional_pb_header_paths);
  HeaderSystemIncludes(
      {vars("proto_header_path"),
       HasLongrunningMethod() ? "google/longrunning/operations.pb.h" : "",
       "memory"});

  auto result = HeaderOpenNamespaces(NamespaceType::kInternal);
  if (!result.ok()) return result;

  // Abstract interface Stub base class
  HeaderPrint(R"""(
class $stub_rest_class_name$ {
 public:
  virtual ~$stub_rest_class_name$() = default;
)""");

  for (auto const& method : methods()) {
    if (HasHttpAnnotation(method) && IsNonStreaming(method)) {
      if (IsResponseTypeEmpty(method)) {
        HeaderPrintMethod(method, __FILE__, __LINE__, R"""(
  virtual Status $method_name$(
      google::cloud::rest_internal::RestContext& rest_context,
      $request_type$ const& request) = 0;
)""");
      } else {
        HeaderPrintMethod(method, __FILE__, __LINE__, R"""(
  virtual StatusOr<$response_type$> $method_name$(
      google::cloud::rest_internal::RestContext& rest_context,
      $request_type$ const& request) = 0;
)""");
      }
    }
  }

  // close abstract interface Stub base class
  HeaderPrint("};\n");

  // default stub class
  HeaderPrint(R"""(
class Default$stub_rest_class_name$ : public $stub_rest_class_name$ {
 public:
  ~Default$stub_rest_class_name$() override = default;

  explicit Default$stub_rest_class_name$(Options options);
  Default$stub_rest_class_name$(
      std::shared_ptr<rest_internal::RestClient> rest_client,
      Options options);
)""");

  for (auto const& method : methods()) {
    if (HasHttpAnnotation(method) && IsNonStreaming(method)) {
      if (IsResponseTypeEmpty(method)) {
        HeaderPrintMethod(method, __FILE__, __LINE__, R"""(
  Status $method_name$(
      google::cloud::rest_internal::RestContext& rest_context,
      $request_type$ const& request) override;
)""");
      } else {
        HeaderPrintMethod(method, __FILE__, __LINE__, R"""(
  StatusOr<$response_type$> $method_name$(
      google::cloud::rest_internal::RestContext& rest_context,
      $request_type$ const& request) override;
)""");
      }
    }
  }

  // private members and close default stub class definition
  HeaderPrint(R"""(
 private:
  std::shared_ptr<rest_internal::RestClient> rest_client_;
  Options options_;
)""");
  HeaderPrint("};\n");

  HeaderCloseNamespaces();
  // close header guard
  HeaderPrint("\n#endif  // $header_include_guard$\n");
  return {};
}

Status StubRestGenerator::GenerateCc() {
  CcPrint(CopyrightLicenseFileHeader());
  CcPrint(R"""(
// Generated by the Codegen C++ plugin.
// If you make any local changes, they will be lost.
// source: $proto_file_name$
)""");

  CcPrint("\n");
  CcLocalIncludes({vars("stub_rest_header_path"),
                   "google/cloud/common_options.h",
                   "google/cloud/internal/absl_str_cat_quiet.h",
                   "google/cloud/internal/rest_stub_helpers.h",
                   "google/cloud/status_or.h"});
  CcSystemIncludes(
      {vars("proto_header_path"),
       HasLongrunningMethod() ? "google/longrunning/operations.pb.h" : "",
       "memory"});

  auto result = CcOpenNamespaces(NamespaceType::kInternal);
  if (!result.ok()) return result;

  CcPrint(R"""(
Default$stub_rest_class_name$::Default$stub_rest_class_name$(Options options)
    : rest_client_(rest_internal::MakePooledRestClient(
      options.get<EndpointOption>(), options)),
      options_(std::move(options)) {}

Default$stub_rest_class_name$::Default$stub_rest_class_name$(
    std::shared_ptr<rest_internal::RestClient> rest_client, Options options)
    : rest_client_(std::move(rest_client)), options_(std::move(options)) {}
)""");

  // default stub class member methods
  for (auto const& method : methods()) {
    if (HasHttpAnnotation(method) && IsNonStreaming(method)) {
      if (IsResponseTypeEmpty(method)) {
        CcPrintMethod(method, __FILE__, __LINE__, R"""(
Status Default$stub_rest_class_name$::$method_name$(
      google::cloud::rest_internal::RestContext& rest_context,
      $request_type$ const& request) {
  return rest_internal::$method_http_verb$(
      *rest_client_, rest_context, request,
      $method_rest_path$$method_http_query_parameters$);
}
)""");
      } else {
        CcPrintMethod(method, __FILE__, __LINE__, R"""(
StatusOr<$response_type$>
Default$stub_rest_class_name$::$method_name$(
      google::cloud::rest_internal::RestContext& rest_context,
      $request_type$ const& request) {
  return rest_internal::$method_http_verb$<$response_type$>(
      *rest_client_, rest_context, request,
      $method_rest_path$$method_http_query_parameters$);
}
)""");
      }
    }
  }

  CcCloseNamespaces();
  return {};
}

}  // namespace generator_internal
}  // namespace cloud
}  // namespace google
