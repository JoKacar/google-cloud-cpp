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

#include "generator/internal/logging_decorator_rest_generator.h"
#include "generator/internal/codegen_utils.h"
#include "generator/internal/http_option_utils.h"
#include "generator/internal/longrunning.h"
#include "generator/internal/predicate_utils.h"
#include "generator/internal/printer.h"
#include "absl/strings/str_split.h"
#include <google/protobuf/descriptor.h>

namespace google {
namespace cloud {
namespace generator_internal {

LoggingDecoratorRestGenerator::LoggingDecoratorRestGenerator(
    google::protobuf::ServiceDescriptor const* service_descriptor,
    VarsDictionary service_vars,
    std::map<std::string, VarsDictionary> service_method_vars,
    google::protobuf::compiler::GeneratorContext* context)
    : ServiceCodeGenerator("logging_rest_header_path", "logging_rest_cc_path",
                           service_descriptor, std::move(service_vars),
                           std::move(service_method_vars), context) {}

Status LoggingDecoratorRestGenerator::GenerateHeader() {
  HeaderPrint(CopyrightLicenseFileHeader());
  HeaderPrint(R"""(
// Generated by the Codegen C++ plugin.
// If you make any local changes, they will be lost.
// source: $proto_file_name$

#ifndef $header_include_guard$
#define $header_include_guard$

)""");

  // includes
  HeaderLocalIncludes(
      {vars("stub_rest_header_path"), "google/cloud/internal/rest_context.h",
       "google/cloud/future.h", "google/cloud/tracing_options.h",
       "google/cloud/version.h"});
  HeaderSystemIncludes({vars("proto_header_path"),
                        HasLongrunningMethod()
                            ? vars("longrunning_operation_include_header")
                            : "",
                        "memory", "set", "string"});

  auto result = HeaderOpenNamespaces(NamespaceType::kInternal);
  if (!result.ok()) return result;

  // Abstract interface Logging base class
  HeaderPrint(R"""(
class $logging_rest_class_name$ : public $stub_rest_class_name$ {
 public:
  ~$logging_rest_class_name$() override = default;
  $logging_rest_class_name$(std::shared_ptr<$stub_rest_class_name$> child,
                       TracingOptions tracing_options,
                       std::set<std::string> components);
)""");

  for (auto const& method : methods()) {
    if (IsStreaming(method)) continue;
    if (!HasHttpAnnotation(method)) continue;
    if (IsLongrunningOperation(method)) {
      HeaderPrintMethod(method, __FILE__, __LINE__, R"""(
  future<StatusOr<$response_type$>> Async$method_name$(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      $request_type$ const& request) override;
)""");
    } else {
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

  for (auto const& method : async_methods()) {
    if (IsStreaming(method)) continue;
    if (!HasHttpAnnotation(method)) continue;
    if (IsResponseTypeEmpty(method)) {
      HeaderPrintMethod(method, __FILE__, __LINE__, R"""(
  future<Status> Async$method_name$(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      $request_type$ const& request) override;
)""");
    } else {
      HeaderPrintMethod(method, __FILE__, __LINE__, R"""(
  future<StatusOr<$response_type$>> Async$method_name$(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      $request_type$ const& request) override;
)""");
    }
  }

  if (HasLongrunningMethod()) {
    HeaderPrint(
        R"""(
  future<StatusOr<$longrunning_response_type$>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      $longrunning_get_operation_request_type$ const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      $longrunning_cancel_operation_request_type$ const& request) override;
)""");
  }

  HeaderPrint(R"""(
 private:
  std::shared_ptr<$stub_rest_class_name$> child_;
  TracingOptions tracing_options_;
  std::set<std::string> components_;
};
)""");

  HeaderCloseNamespaces();
  HeaderPrint("\n#endif  // $header_include_guard$\n");
  return {};
}

Status LoggingDecoratorRestGenerator::GenerateCc() {
  CcPrint(CopyrightLicenseFileHeader());
  CcPrint(R"""(
// Generated by the Codegen C++ plugin.
// If you make any local changes, they will be lost.
// source: $proto_file_name$

)""");

  // includes
  CcLocalIncludes({vars("logging_rest_header_path"),
                   "google/cloud/internal/log_wrapper.h",
                   "google/cloud/status_or.h"});
  CcSystemIncludes({"memory"});

  auto result = CcOpenNamespaces(NamespaceType::kInternal);
  if (!result.ok()) return result;

  // constructor
  CcPrint(R"""(
$logging_rest_class_name$::$logging_rest_class_name$(
    std::shared_ptr<$stub_rest_class_name$> child,
    TracingOptions tracing_options,
    std::set<std::string> components)
    : child_(std::move(child)), tracing_options_(std::move(tracing_options)),
      components_(std::move(components)) {}
)""");

  // logging decorator class member methods
  for (auto const& method : methods()) {
    if (IsStreaming(method)) continue;
    if (!HasHttpAnnotation(method)) continue;
    if (IsLongrunningOperation(method)) {
      CcPrintMethod(method, __FILE__, __LINE__, R"""(
future<StatusOr<$response_type$>>
$logging_rest_class_name$::Async$method_name$(
      CompletionQueue& cq,
      std::unique_ptr<rest_internal::RestContext> rest_context,
      $request_type$ const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             $request_type$ const& request) {
        return child_->Async$method_name$(cq, std::move(rest_context), request);
      },
      cq, std::move(rest_context), request, __func__, tracing_options_);
}
)""");
    } else {
      if (IsResponseTypeEmpty(method)) {
        CcPrintMethod(method, __FILE__, __LINE__, R"""(
Status
$logging_rest_class_name$::$method_name$(
    rest_internal::RestContext& rest_context,
    $request_type$ const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context,
             $request_type$ const& request) {
        return child_->$method_name$(rest_context, request);
      },
      rest_context, request, __func__, tracing_options_);
}
)""");
      } else {
        CcPrintMethod(method, __FILE__, __LINE__, R"""(
StatusOr<$response_type$>
$logging_rest_class_name$::$method_name$(
    rest_internal::RestContext& rest_context,
    $request_type$ const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context,
             $request_type$ const& request) {
        return child_->$method_name$(rest_context, request);
      },
      rest_context, request, __func__, tracing_options_);
}
)""");
      }
    }
  }

  for (auto const& method : async_methods()) {
    if (IsStreaming(method)) continue;
    if (!HasHttpAnnotation(method)) continue;
    if (IsResponseTypeEmpty(method)) {
      CcPrintMethod(method, __FILE__, __LINE__, R"""(
future<Status>
$logging_rest_class_name$::Async$method_name$(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<rest_internal::RestContext> rest_context,
      $request_type$ const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             $request_type$ const& request) {
        return child_->Async$method_name$(cq, std::move(rest_context), request);
      },
      cq, std::move(rest_context), request, __func__, tracing_options_);
}
)""");
    } else {
      CcPrintMethod(method, __FILE__, __LINE__, R"""(
future<StatusOr<$response_type$>>
$logging_rest_class_name$::Async$method_name$(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    $request_type$ const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             $request_type$ const& request) {
        return child_->Async$method_name$(cq, std::move(rest_context), request);
      },
      cq, std::move(rest_context), request, __func__, tracing_options_);
}
)""");
    }
  }

  if (HasLongrunningMethod()) {
    CcPrint(
        R"""(
future<StatusOr<$longrunning_response_type$>>
$logging_rest_class_name$::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    $longrunning_get_operation_request_type$ const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             $longrunning_get_operation_request_type$ const& request) {
        return child_->AsyncGetOperation(cq, std::move(rest_context), request);
      },
      cq, std::move(rest_context), request, __func__, tracing_options_);
}

future<Status>
$logging_rest_class_name$::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    $longrunning_cancel_operation_request_type$ const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             $longrunning_cancel_operation_request_type$ const& request) {
        return child_->AsyncCancelOperation(cq, std::move(rest_context), request);
      },
      cq, std::move(rest_context), request, __func__, tracing_options_);
}
)""");
  }

  CcCloseNamespaces();
  return {};
}

}  // namespace generator_internal
}  // namespace cloud
}  // namespace google
