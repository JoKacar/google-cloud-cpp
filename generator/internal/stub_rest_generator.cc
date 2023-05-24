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
                       "google/cloud/completion_queue.h",
                       "google/cloud/internal/rest_context.h",
                       "google/cloud/status_or.h", "google/cloud/version.h"});
  std::vector<std::string> additional_pb_header_paths =
      absl::StrSplit(vars("additional_pb_header_paths"), absl::ByChar(','));
  HeaderSystemIncludes(additional_pb_header_paths);
  HeaderSystemIncludes({vars("proto_header_path"),
                        HasLongrunningMethod()
                            ? vars("longrunning_operation_include_header")
                            : "",
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
    if (IsStreaming(method)) continue;
    if (!HasHttpAnnotation(method)) continue;
    if (IsLongrunningOperation(method)) {
      HeaderPrintMethod(method, __FILE__, __LINE__, R"""(
  virtual future<StatusOr<$response_type$>> Async$method_name$(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      $request_type$ const& request) = 0;
)""");
    } else {
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

  for (auto const& method : async_methods()) {
    if (IsStreaming(method)) continue;
    if (!HasHttpAnnotation(method)) continue;
    if (IsResponseTypeEmpty(method)) {
      HeaderPrintMethod(method, __FILE__, __LINE__, R"""(
  virtual future<Status> Async$method_name$(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      $request_type$ const& request) = 0;
)""");
    } else {
      HeaderPrintMethod(method, __FILE__, __LINE__, R"""(
  virtual future<StatusOr<$response_type$>> Async$method_name$(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      $request_type$ const& request) = 0;
)""");
    }
  }

  if (HasLongrunningMethod()) {
    // long running operation support methods
    if (HasGRPCLongrunningOperation()) {
      HeaderPrint(
          R"""(
  virtual future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::longrunning::GetOperationRequest const& request) = 0;

  virtual future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::longrunning::CancelOperationRequest const& request) = 0;
)""");
    } else {
      HeaderPrint(
          R"""(
  virtual future<StatusOr<$longrunning_response_type$>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      $longrunning_get_operation_request_type$ const& request) = 0;

  virtual future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      $longrunning_cancel_operation_request_type$ const& request) = 0;
)""");
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
      std::shared_ptr<rest_internal::RestClient> service,)""");
  if (HasLongrunningMethod()) {
    HeaderPrint(R"""(
      std::shared_ptr<rest_internal::RestClient> operations,)""");
  }
  HeaderPrint(R"""(
      Options options);
)""");

  for (auto const& method : methods()) {
    if (HasHttpAnnotation(method) && IsNonStreaming(method)) {
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
  }

  for (auto const& method : async_methods()) {
    if (IsStreaming(method)) continue;
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
    // long running operation support methods
    if (HasGRPCLongrunningOperation()) {
      HeaderPrint(
          R"""(
  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::longrunning::CancelOperationRequest const& request) override;
)""");
    } else {
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
  }

  // private members and close default stub class definition
  HeaderPrint(R"""(
 private:
  std::shared_ptr<rest_internal::RestClient> service_;)""");
  if (HasLongrunningMethod()) {
    HeaderPrint(R"""(
  std::shared_ptr<rest_internal::RestClient> operations_;)""");
  }
  HeaderPrint(R"""(
  Options options_;
};
)""");

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

  if (HasLongrunningMethod()) {
    if (HasGRPCLongrunningOperation()) {
      CcPrint(R"""(
Default$stub_rest_class_name$::Default$stub_rest_class_name$(Options options)
    : service_(rest_internal::MakePooledRestClient(
          options.get<EndpointOption>(), options)),
      operations_(rest_internal::MakePooledRestClient(
          options.get<rest_internal::LongrunningEndpointOption>(), options)),
      options_(std::move(options)) {}
)""");
    } else {
      CcPrint(R"""(
Default$stub_rest_class_name$::Default$stub_rest_class_name$(Options options)
    : service_(rest_internal::MakePooledRestClient(
          options.get<EndpointOption>(), options)),
      operations_(rest_internal::MakePooledRestClient(
          options.get<EndpointOption>(), options)),
      options_(std::move(options)) {}
)""");
    }
    CcPrint(R"""(
Default$stub_rest_class_name$::Default$stub_rest_class_name$(
    std::shared_ptr<rest_internal::RestClient> service,
    std::shared_ptr<rest_internal::RestClient> operations,
    Options options)
    : service_(std::move(service)),
      operations_(std::move(operations)),
      options_(std::move(options)) {}
)""");
  } else {
    CcPrint(R"""(
Default$stub_rest_class_name$::Default$stub_rest_class_name$(Options options)
    : service_(rest_internal::MakePooledRestClient(
          options.get<EndpointOption>(), options)),
      options_(std::move(options)) {}

Default$stub_rest_class_name$::Default$stub_rest_class_name$(
    std::shared_ptr<rest_internal::RestClient> service,
    Options options)
    : service_(std::move(service)),
      options_(std::move(options)) {}
)""");
  }

  // default stub class member methods
  for (auto const& method : methods()) {
    if (IsStreaming(method)) continue;
    if (!HasHttpAnnotation(method)) continue;
    if (IsLongrunningOperation(method)) {
      CcPrintMethod(method, __FILE__, __LINE__, R"""(
future<StatusOr<$response_type$>>
Default$stub_rest_class_name$::Async$method_name$(
      CompletionQueue& cq,
      std::unique_ptr<rest_internal::RestContext> rest_context,
      $request_type$ const& request) {
  promise<StatusOr<$response_type$>> p;
  future<StatusOr<$response_type$>> f = p.get_future();
  std::thread t{[](auto p, auto service, auto request, auto rest_context) {
      p.set_value(rest_internal::$method_http_verb$<$response_type$>(
          *service, *rest_context, $request_resource$,
          $method_rest_path$$method_http_query_parameters$));
  }, std::move(p), service_, request, std::move(rest_context)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable {
      t.join();
    });
    return f.get();
  });
}
)""");
    } else {
      if (IsResponseTypeEmpty(method)) {
        CcPrintMethod(method, __FILE__, __LINE__, R"""(
Status Default$stub_rest_class_name$::$method_name$(
      google::cloud::rest_internal::RestContext& rest_context,
      $request_type$ const& request) {
  return rest_internal::$method_http_verb$(
      *service_, rest_context, $request_resource$,
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
      *service_, rest_context, $request_resource$,
      $method_rest_path$$method_http_query_parameters$);
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
Default$stub_rest_class_name$::Async$method_name$(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    $request_type$ const& request) {
  promise<StatusOr<google::protobuf::Empty>> p;
  future<StatusOr<google::protobuf::Empty>> f = p.get_future();
  std::thread t{[](auto p, auto service, auto request, auto rest_context) {
      p.set_value(rest_internal::$method_http_verb$<google::protobuf::Empty>(
          *service, *rest_context, $request_resource$,
          $method_rest_path$$method_http_query_parameters$));
  }, std::move(p), service_, request, std::move(rest_context)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable {
      t.join();
    });
    return f.get().status();
  });
}
)""");
    } else {
      CcPrintMethod(method, __FILE__, __LINE__, R"""(
future<StatusOr<$response_type$>>
Default$stub_rest_class_name$::Async$method_name$(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    $request_type$ const& request) {
  promise<StatusOr<$response_type$>> p;
  future<StatusOr<$response_type$>> f = p.get_future();
  std::thread t{[](auto p, auto service, auto request, auto rest_context) {
      p.set_value(rest_internal::$method_http_verb$<$response_type$>(
          *service, *rest_context, $request_resource$,
          $method_rest_path$$method_http_query_parameters$));
  }, std::move(p), service_, request, std::move(rest_context)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable {
      t.join();
    });
    return f.get();
  });
}
)""");
    }
  }

  if (HasLongrunningMethod()) {
    // long running operation support methods
    if (HasGRPCLongrunningOperation()) {
      CcPrint(
          R"""(
future<StatusOr<google::longrunning::Operation>>
Default$stub_rest_class_name$::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::longrunning::GetOperationRequest const& request) {
  promise<StatusOr<google::longrunning::Operation>> p;
  future<StatusOr<google::longrunning::Operation>> f = p.get_future();
  std::thread t{[](auto p, auto operations, auto request, auto rest_context) {
      p.set_value(rest_internal::Get<google::longrunning::Operation>(
          *operations, *rest_context, request,
          absl::StrCat("/v1/", request.name())));
  }, std::move(p), operations_, request, std::move(rest_context)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable {
      t.join();
    });
    return f.get();
  });
}

future<Status>
Default$stub_rest_class_name$::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::longrunning::CancelOperationRequest const& request) {
  promise<StatusOr<google::protobuf::Empty>> p;
  future<StatusOr<google::protobuf::Empty>> f = p.get_future();
  std::thread t{[](auto p, auto operations, auto request, auto rest_context) {
      p.set_value(rest_internal::Post<google::protobuf::Empty>(
          *operations, *rest_context, request,
          absl::StrCat("/v1/", request.name(), ":cancel")));
  }, std::move(p), operations_, request, std::move(rest_context)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable {
      t.join();
    });
    return f.get().status();
  });
}
)""");
    } else {
      CcPrint(
          R"""(
future<StatusOr<$longrunning_response_type$>>
Default$stub_rest_class_name$::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    $longrunning_get_operation_request_type$ const& request) {
  promise<StatusOr<$longrunning_response_type$>> p;
  future<StatusOr<$longrunning_response_type$>> f = p.get_future();
  std::thread t{[](auto p, auto operations, auto request, auto rest_context) {
      p.set_value(rest_internal::Get<$longrunning_response_type$>(
          *operations, *rest_context, request,
          $longrunning_get_operation_path$));
  }, std::move(p), operations_, request, std::move(rest_context)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable {
      t.join();
    });
    return f.get();
  });
}

future<Status>
Default$stub_rest_class_name$::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    $longrunning_cancel_operation_request_type$ const& request) {
  promise<StatusOr<google::protobuf::Empty>> p;
  future<StatusOr<google::protobuf::Empty>> f = p.get_future();
  std::thread t{[](auto p, auto operations, auto request, auto rest_context) {
      p.set_value(rest_internal::Post<google::protobuf::Empty>(
          *operations, *rest_context, request,
          $longrunning_cancel_operation_path$));
  }, std::move(p), operations_, request, std::move(rest_context)};
  return f.then([t = std::move(t), cq](auto f) mutable {
    cq.RunAsync([t = std::move(t)]() mutable {
      t.join();
    });
    return f.get().status();
  });
}
)""");
    }
  }

  CcCloseNamespaces();
  return {};
}

}  // namespace generator_internal
}  // namespace cloud
}  // namespace google
