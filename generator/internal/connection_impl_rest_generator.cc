// Copyright 2023 Google LLC
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

#include "generator/internal/connection_impl_rest_generator.h"
#include "generator/internal/codegen_utils.h"
#include "generator/internal/http_option_utils.h"
#include "generator/internal/longrunning.h"
#include "generator/internal/pagination.h"
#include "generator/internal/predicate_utils.h"
#include "generator/internal/printer.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include <google/protobuf/descriptor.h>

namespace google {
namespace cloud {
namespace generator_internal {

ConnectionImplRestGenerator::ConnectionImplRestGenerator(
    google::protobuf::ServiceDescriptor const* service_descriptor,
    VarsDictionary service_vars,
    std::map<std::string, VarsDictionary> service_method_vars,
    google::protobuf::compiler::GeneratorContext* context)
    : ServiceCodeGenerator("connection_impl_rest_header_path",
                           "connection_impl_rest_cc_path", service_descriptor,
                           std::move(service_vars),
                           std::move(service_method_vars), context) {}

Status ConnectionImplRestGenerator::GenerateHeader() {
  HeaderPrint(CopyrightLicenseFileHeader());
  HeaderPrint(R"""(
// Generated by the Codegen C++ plugin.
// If you make any local changes, they will be lost.
// source: $proto_file_name$

#ifndef $header_include_guard$
#define $header_include_guard$

)""");

  HeaderLocalIncludes(
      {vars("idempotency_policy_header_path"), vars("options_header_path"),
       vars("stub_rest_header_path"), vars("connection_header_path"),
       vars("retry_traits_header_path"), "google/cloud/backoff_policy.h",
       "google/cloud/background_threads.h", "google/cloud/options.h",
       "google/cloud/status_or.h",
       HasPaginatedMethod() ? "google/cloud/stream_range.h" : "",
       "google/cloud/version.h"});
  HeaderSystemIncludes(
      {HasLongrunningMethod() ? "google/longrunning/operations.pb.h" : "",
       "memory"});

  auto result = HeaderOpenNamespaces(NamespaceType::kInternal);
  if (!result.ok()) return result;

  HeaderPrint(R"""(
class $connection_impl_rest_class_name$
    : public $product_namespace$::$connection_class_name$ {
 public:
  ~$connection_impl_rest_class_name$() override = default;

  $connection_impl_rest_class_name$(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<$product_internal_namespace$::$stub_rest_class_name$> stub,
    Options options);

  Options options() override { return options_; }
)""");

  for (auto const& method : methods()) {
    if (IsStreaming(method)) continue;
    if (!HasHttpAnnotation(method)) continue;
    HeaderPrintMethod(method, __FILE__, __LINE__, MethodDeclaration(method));
  }

  for (auto const& method : async_methods()) {
    if (IsStreaming(method)) continue;
    if (!HasHttpAnnotation(method)) continue;
    HeaderPrintMethod(method, __FILE__, __LINE__,
                      AsyncMethodDeclaration(method));
  }

  // `CurrentOptions()` may not have the service default options because we
  // could be running in a test that calls the ConnectionImpl layer directly,
  // and it does not create an `internal::OptionsSpan` like the Client layer.
  // So, we have to fallback to `options_`.
  HeaderPrint(R"""(
 private:
  std::unique_ptr<$product_namespace$::$retry_policy_name$> retry_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<$product_namespace$::$retry_policy_name$Option>()) {
      return options.get<$product_namespace$::$retry_policy_name$Option>()->clone();
    }
    return options_.get<$product_namespace$::$retry_policy_name$Option>()->clone();
  }

  std::unique_ptr<BackoffPolicy> backoff_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<$product_namespace$::$service_name$BackoffPolicyOption>()) {
      return options.get<$product_namespace$::$service_name$BackoffPolicyOption>()->clone();
    }
    return options_.get<$product_namespace$::$service_name$BackoffPolicyOption>()->clone();
  }

  std::unique_ptr<$product_namespace$::$idempotency_class_name$> idempotency_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<$product_namespace$::$idempotency_class_name$Option>()) {
      return options.get<$product_namespace$::$idempotency_class_name$Option>()->clone();
    }
    return options_.get<$product_namespace$::$idempotency_class_name$Option>()->
clone();
  }
)""");
  if (HasLongrunningMethod()) {
    HeaderPrint(R"""(
  std::unique_ptr<PollingPolicy> polling_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<$product_namespace$::$service_name$PollingPolicyOption>()) {
      return options.get<$product_namespace$::$service_name$PollingPolicyOption>()->clone();
    }
    return options_.get<$product_namespace$::$service_name$PollingPolicyOption>()->clone();
  }
)""");
  }

  HeaderPrint(R"""(
  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<$product_internal_namespace$::$stub_rest_class_name$> stub_;
  Options options_;
};
)""");

  HeaderCloseNamespaces();
  HeaderPrint("\n#endif  // $header_include_guard$\n");
  return {};
}

Status ConnectionImplRestGenerator::GenerateCc() {
  CcPrint(CopyrightLicenseFileHeader());
  CcPrint(R"""(
// Generated by the Codegen C++ plugin.
// If you make any local changes, they will be lost.
// source: $proto_file_name$

)""");

  auto const needs_async_retry_loop = !async_methods().empty();
  CcLocalIncludes(
      {vars("connection_impl_rest_header_path"),
       vars("stub_factory_rest_header_path"), "google/cloud/common_options.h",
       "google/cloud/credentials.h", "google/cloud/rest_options.h",
       HasPaginatedMethod() ? "google/cloud/internal/pagination_range.h" : "",
       HasLongrunningMethod()
           ? "google/cloud/internal/extract_long_running_result.h"
           : "",
       HasLongrunningMethod()
           ? "google/cloud/internal/async_rest_long_running_operation.h"
           : "",
       needs_async_retry_loop ? "google/cloud/internal/async_rest_retry_loop.h"
                              : "",
       "google/cloud/internal/rest_retry_loop.h"});
  CcSystemIncludes({"memory"});

  auto result = CcOpenNamespaces(NamespaceType::kInternal);
  if (!result.ok()) return result;

  CcPrint(R"""(
$connection_impl_rest_class_name$::$connection_impl_rest_class_name$(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<$product_internal_namespace$::$stub_rest_class_name$> stub,
    Options options)
  : background_(std::move(background)), stub_(std::move(stub)),
    options_(internal::MergeOptions(
        std::move(options),
        $connection_class_name$::options())) {}
)""");

  for (auto const& method : methods()) {
    if (IsStreaming(method)) continue;
    if (!HasHttpAnnotation(method)) continue;
    CcPrintMethod(method, __FILE__, __LINE__, MethodDefinition(method));
  }

  for (auto const& method : async_methods()) {
    if (IsStreaming(method)) continue;
    if (!HasHttpAnnotation(method)) continue;
    CcPrintMethod(method, __FILE__, __LINE__, AsyncMethodDefinition(method));
  }

  CcCloseNamespaces();
  return {};
}

std::string ConnectionImplRestGenerator::MethodDeclaration(
    google::protobuf::MethodDescriptor const& method) {
  if (IsPaginated(method)) {
    return R"""(
  StreamRange<$range_output_type$>
  $method_name$($request_type$ request) override;
)""";
  }

  if (IsLongrunningOperation(method)) {
    if (IsResponseTypeEmpty(method)) {
      return R"""(
  future<Status>
  $method_name$($request_type$ const& request) override;
)""";
    }
    return R"""(
  future<StatusOr<$longrunning_deduced_response_type$>>
  $method_name$($request_type$ const& request) override;
)""";
  }

  if (IsResponseTypeEmpty(method)) {
    return R"""(
  Status
  $method_name$($request_type$ const& request) override;
)""";
  }
  return R"""(
  StatusOr<$response_type$>
  $method_name$($request_type$ const& request) override;
)""";
}

std::string ConnectionImplRestGenerator::AsyncMethodDeclaration(
    google::protobuf::MethodDescriptor const& method) {
  if (IsResponseTypeEmpty(method)) {
    return R"""(
  future<Status>
  Async$method_name$($request_type$ const& request) override;
)""";
  }

  return R"""(
  future<StatusOr<$response_type$>>
  Async$method_name$($request_type$ const& request) override;
)""";
}

std::string ConnectionImplRestGenerator::MethodDefinition(
    google::protobuf::MethodDescriptor const& method) {
  if (IsPaginated(method)) {
    return R"""(
StreamRange<$range_output_type$>
$connection_impl_rest_class_name$::$method_name$($request_type$ request) {
  request.clear_page_token();
  auto& stub = stub_;
  auto retry = std::shared_ptr<$product_namespace$::$retry_policy_name$ const>(retry_policy());
  auto backoff = std::shared_ptr<BackoffPolicy const>(backoff_policy());
  auto idempotency = idempotency_policy()->$method_name$(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<StreamRange<$range_output_type$>>(
      std::move(request),
      [stub, retry, backoff, idempotency, function_name]
        ($request_type$ const& r) {
        return google::cloud::rest_internal::RestRetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](rest_internal::RestContext& rest_context, $request_type$ const& request) {
              return stub->$method_name$(rest_context, request);
            },
            r, function_name);
      },
      []($response_type$ r) {
        std::vector<$range_output_type$> result(r.$range_output_field_name$().size());
        auto& messages = *r.mutable_$range_output_field_name$();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}
)""";
  }

  auto lro_template_types = [&] {
    if (IsGRPCLongrunningOperation(method)) {
      return R"""($longrunning_deduced_response_type$)""";
    }
    return R"""(
    $longrunning_deduced_response_type$,
    $longrunning_response_type$,
    $longrunning_get_operation_request_type$,
    $longrunning_cancel_operation_request_type$)""";
  };

  auto extractor = [&] {
    if (IsGRPCLongrunningOperation(method)) {
      // One of the variations is how to extract the value from the operation
      // result, some operations use the metadata, some the data. We need to
      // provide the right function to
      // internal::AsyncRestLongRunningOperation.
      if (IsLongrunningMetadataTypeUsedAsResponse(method)) {
        return R"""(
    &google::cloud::internal::ExtractLongRunningResultMetadata<$longrunning_deduced_response_type$>,)""";
      }
      return R"""(
    &google::cloud::internal::ExtractLongRunningResultResponse<$longrunning_deduced_response_type$>,)""";
    }
    // TODO(#11639): improve error handling by interrogating error details in
    // the Operation type (if available).
    return R"""(
    [](StatusOr<$longrunning_deduced_response_type$> op, std::string const&) -> StatusOr<$longrunning_deduced_response_type$>{
        if (!op) {
          // TODO(#11639): improve error handling by interrogating error
          // details in the Operation type (if available).
          return op.status();
        }
        return op;
    },)""";
  };

  auto is_operation_done = [&] {
    if (IsGRPCLongrunningOperation(method)) return "";
    return R"""(,
    []($longrunning_deduced_response_type$ const& op) {
        return op.status() == "DONE";
    },)""";
  };

  auto get_request_set_operation_name = [&] {
    if (IsGRPCLongrunningOperation(method)) return "";
    return R"""(
    [request](std::string const& op, $longrunning_get_operation_request_type$& r) {
        $longrunning_set_operation_fields$
    },)""";
  };

  auto cancel_request_set_operation_name = [&] {
    if (IsGRPCLongrunningOperation(method)) return "";
    return R"""(
    [request](std::string const& op, $longrunning_cancel_operation_request_type$& r) {
        $longrunning_set_operation_fields$
    })""";
  };

  if (IsLongrunningOperation(method)) {
    return absl::StrCat(
        // The return type may be a simple `Status` or the
        // computed type of the long-running operation
        IsResponseTypeEmpty(method) ?
                                    R"""(
future<Status>)"""
                                    :
                                    R"""(
future<StatusOr<$longrunning_deduced_response_type$>>)""",
        // The body of the function is basically a call to
        // internal::AsyncRestLongRunningOperation, a helper template function
        // in `google::cloud::internal`.
        R"""(
$connection_impl_rest_class_name$::$method_name$($request_type$ const& request) {
  auto& stub = stub_;
  return rest_internal::AsyncRestLongRunningOperation<)""",
        lro_template_types(), R"""(>(
    background_->cq(), request,
    [stub](CompletionQueue& cq,
          std::unique_ptr<rest_internal::RestContext> context,
          $request_type$ const& request) {
     return stub->Async$method_name$(cq, std::move(context), request);
    },
    [stub](CompletionQueue& cq,
          std::unique_ptr<rest_internal::RestContext> context,
          $longrunning_get_operation_request_type$ const& request) {
     return stub->AsyncGetOperation(cq, std::move(context), request);
    },
    [stub](CompletionQueue& cq,
          std::unique_ptr<rest_internal::RestContext> context,
          $longrunning_cancel_operation_request_type$ const& request) {
     return stub->AsyncCancelOperation(cq, std::move(context), request);
    },)""",
        extractor(),
        R"""(
    retry_policy(), backoff_policy(),
    idempotency_policy()->$method_name$(request),
    polling_policy(), __func__)""",
        is_operation_done(), get_request_set_operation_name(),
        cancel_request_set_operation_name(), R"""())""",
        // Finally, the internal::AsyncRestLongRunningOperation helper may
        // return `future<StatusOr<google::protobuf::Empty>>`, in this case we
        // add a bit of code to drop the `protobuf::Empty`:
        IsResponseTypeEmpty(method) ? R"""(
    .then([](future<StatusOr<google::protobuf::Empty>> f) {
      return f.get().status();
    });
)"""
                                    : R"""(;
)""",
        R"""(
}
)""");
  }

  return absl::StrCat(IsResponseTypeEmpty(method) ? R"""(
Status)"""
                                                  : R"""(
StatusOr<$response_type$>)""",
                      R"""(
$connection_impl_rest_class_name$::$method_name$($request_type$ const& request) {
  return google::cloud::rest_internal::RestRetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->$method_name$(request),
      [this](rest_internal::RestContext& rest_context,
          $request_type$ const& request) {
        return stub_->$method_name$(rest_context, request);
      },
      request, __func__);
}
)""");
}

std::string ConnectionImplRestGenerator::AsyncMethodDefinition(
    google::protobuf::MethodDescriptor const& method) {
  return absl::StrCat(IsResponseTypeEmpty(method) ? R"""(
future<Status>)"""
                                                  : R"""(
future<StatusOr<$response_type$>>)""",
                      R"""(
$connection_impl_rest_class_name$::Async$method_name$($request_type$ const& request) {
  auto& stub = stub_;
  return rest_internal::AsyncRestRetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->$method_name$(request),
      background_->cq(),
      [stub](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> context,
             $request_type$ const& request) {
        return stub->Async$method_name$(cq, std::move(context), request);
      },
      request, __func__);
}
)""");
}

}  // namespace generator_internal
}  // namespace cloud
}  // namespace google
