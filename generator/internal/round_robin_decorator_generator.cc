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

#include "generator/internal/round_robin_decorator_generator.h"
#include "generator/internal/codegen_utils.h"
#include "generator/internal/longrunning.h"
#include "generator/internal/predicate_utils.h"
#include "generator/internal/printer.h"
#include "absl/strings/str_split.h"
#include <google/protobuf/descriptor.h>

namespace google {
namespace cloud {
namespace generator_internal {

RoundRobinDecoratorGenerator::RoundRobinDecoratorGenerator(
    google::protobuf::ServiceDescriptor const* service_descriptor,
    VarsDictionary service_vars,
    std::map<std::string, VarsDictionary> service_method_vars,
    google::protobuf::compiler::GeneratorContext* context)
    : StubGeneratorBase("round_robin_header_path", "round_robin_cc_path",
                        service_descriptor, std::move(service_vars),
                        std::move(service_method_vars), context) {}

Status RoundRobinDecoratorGenerator::GenerateHeader() {
  HeaderPrint(CopyrightLicenseFileHeader());
  HeaderPrint(
      R"""(
// Generated by the Codegen C++ plugin.
// If you make any local changes, they will be lost.
// source: $proto_file_name$

#ifndef $header_include_guard$
#define $header_include_guard$
)""");

  // includes
  HeaderPrint("\n");
  HeaderLocalIncludes({vars("stub_header_path"), "google/cloud/version.h"});
  HeaderSystemIncludes({"memory", "mutex", "vector"});

  // This portability include must be the last file included.
  HeaderPushPortabilityMacros();
  auto result = HeaderOpenNamespaces(NamespaceType::kInternal);
  if (!result.ok()) return result;

  // Abstract interface Auth base class
  HeaderPrint(
      R"""(
class $round_robin_class_name$ : public $stub_class_name$ {
 public:
  explicit $round_robin_class_name$(
      std::vector<std::shared_ptr<$stub_class_name$>> children);
  ~$round_robin_class_name$() override = default;
)""");

  HeaderPrintPublicMethods();

  HeaderPrint(R"""(
 private:
  std::shared_ptr<$stub_class_name$> Child();

  std::vector<std::shared_ptr<$stub_class_name$>> const children_;
  std::mutex mu_;
  std::size_t current_ = 0;
};
)""");

  HeaderCloseNamespaces();
  // Restore any pushed preprocessor definitions.
  HeaderPopPortabilityMacros();
  // close header guard
  HeaderPrint("\n#endif  // $header_include_guard$\n");
  return {};
}

Status RoundRobinDecoratorGenerator::GenerateCc() {
  CcPrint(CopyrightLicenseFileHeader());
  CcPrint(
      R"""(
// Generated by the Codegen C++ plugin.
// If you make any local changes, they will be lost.
// source: $proto_file_name$
)""");

  // includes
  CcPrint("\n");
  CcLocalIncludes({
      vars("round_robin_header_path"),
  });
  CcSystemIncludes({});

  auto result = CcOpenNamespaces(NamespaceType::kInternal);
  if (!result.ok()) return result;

  // constructor
  CcPrint(
      R"""(
$round_robin_class_name$::$round_robin_class_name$(
    std::vector<std::shared_ptr<$stub_class_name$>> children)
    : children_(std::move(children)) {}
)""");

  for (auto const& method : methods()) {
    if (IsStreamingRead(method)) {
      CcPrintMethod(method, __FILE__, __LINE__, R"""(
std::unique_ptr<google::cloud::internal::StreamingReadRpc<$response_type$>>
$round_robin_class_name$::$method_name$(
    std::shared_ptr<grpc::ClientContext> context,
    $request_type$ const& request) {
  return Child()->$method_name$(std::move(context), request);
}
)""");
      continue;
    }
    if (IsStreamingWrite(method)) {
      CcPrintMethod(method, __FILE__, __LINE__, R"""(
std::unique_ptr<google::cloud::internal::StreamingWriteRpc<
    $request_type$, $response_type$>>
$round_robin_class_name$::$method_name$(
    std::shared_ptr<grpc::ClientContext> context) {
  return Child()->$method_name$(std::move(context));
}
)""");
      continue;
    }
    if (IsBidirStreaming(method)) {
      CcPrintMethod(method, __FILE__, __LINE__, R"""(
std::unique_ptr<google::cloud::AsyncStreamingReadWriteRpc<
    $request_type$,
    $response_type$>>
$round_robin_class_name$::Async$method_name$(
    google::cloud::CompletionQueue const& cq,
    std::shared_ptr<grpc::ClientContext> context) {
  return Child()->Async$method_name$(cq, std::move(context));
}
)""");
      continue;
    }
    if (IsLongrunningOperation(method)) {
      CcPrintMethod(method, __FILE__, __LINE__, R"""(
future<StatusOr<google::longrunning::Operation>>
$round_robin_class_name$::Async$method_name$(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    $request_type$ const& request) {
  return Child()->Async$method_name$(cq, std::move(context), request);
}
)""");
      continue;
    }
    if (IsResponseTypeEmpty(method)) {
      CcPrintMethod(method, __FILE__, __LINE__, R"""(
Status $round_robin_class_name$::$method_name$(
    grpc::ClientContext& context,
    $request_type$ const& request) {
  return Child()->$method_name$(context, request);
}
)""");
      continue;
    }
    CcPrintMethod(method, __FILE__, __LINE__, R"""(
StatusOr<$response_type$> $round_robin_class_name$::$method_name$(
    grpc::ClientContext& context,
    $request_type$ const& request) {
  return Child()->$method_name$(context, request);
}
)""");
  }

  for (auto const& method : async_methods()) {
    if (IsStreamingRead(method)) {
      CcPrintMethod(method, __FILE__, __LINE__, R"""(
std::unique_ptr<google::cloud::internal::AsyncStreamingReadRpc<
    $response_type$>>
$round_robin_class_name$::Async$method_name$(
    google::cloud::CompletionQueue const& cq,
    std::shared_ptr<grpc::ClientContext> context,
    $request_type$ const& request) {
  return Child()->Async$method_name$(cq, std::move(context), request);
}
)""");
      continue;
    }
    if (IsStreamingWrite(method)) {
      CcPrintMethod(method, __FILE__, __LINE__, R"""(
std::unique_ptr<google::cloud::internal::AsyncStreamingWriteRpc<
    $request_type$,
    $response_type$>>
$round_robin_class_name$::Async$method_name$(
    google::cloud::CompletionQueue const& cq,
    std::shared_ptr<grpc::ClientContext> context) {
  return Child()->Async$method_name$(cq, std::move(context));
}
)""");
      continue;
    }
    if (IsBidirStreaming(method)) {
      // Nothing to do, these are always asynchronous.
      continue;
    }
    if (IsLongrunningOperation(method)) {
      // Nothing to do, these are always asynchronous.
      continue;
    }
    if (IsResponseTypeEmpty(method)) {
      CcPrintMethod(method, __FILE__, __LINE__, R"""(
future<Status>
$round_robin_class_name$::Async$method_name$(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    $request_type$ const& request) {
  return Child()->Async$method_name$(cq, std::move(context), request);
}
)""");
      continue;
    }
    CcPrintMethod(method, __FILE__, __LINE__, R"""(
future<StatusOr<$response_type$>>
$round_robin_class_name$::Async$method_name$(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    $request_type$ const& request) {
  return Child()->Async$method_name$(cq, std::move(context), request);
}
)""");
  }

  // long-running operation support methods
  if (HasLongrunningMethod()) {
    CcPrint(R"""(
future<StatusOr<google::longrunning::Operation>>
$round_robin_class_name$::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  return Child()->AsyncGetOperation(cq, std::move(context), request);
}

future<Status>
$round_robin_class_name$::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  return Child()->AsyncCancelOperation(cq, std::move(context), request);
}
)""");
  }

  CcPrint(R"""(
std::shared_ptr<$stub_class_name$>
$round_robin_class_name$::Child() {
  std::unique_lock<std::mutex> lk(mu_);
  auto const current = current_;
  if (++current_ == children_.size()) current_ = 0;
  lk.unlock();
  return children_[current];
}
)""");

  CcCloseNamespaces();
  return {};
}

}  // namespace generator_internal
}  // namespace cloud
}  // namespace google
