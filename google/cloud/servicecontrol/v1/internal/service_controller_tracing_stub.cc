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

// Generated by the Codegen C++ plugin.
// If you make any local changes, they will be lost.
// source: google/api/servicecontrol/v1/service_controller.proto

#include "google/cloud/servicecontrol/v1/internal/service_controller_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace servicecontrol_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

ServiceControllerTracingStub::ServiceControllerTracingStub(
    std::shared_ptr<ServiceControllerStub> child)
    : child_(std::move(child)) {}

StatusOr<google::api::servicecontrol::v1::CheckResponse>
ServiceControllerTracingStub::Check(
    grpc::ClientContext& context,
    google::api::servicecontrol::v1::CheckRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.api.servicecontrol.v1.ServiceController", "Check");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span, child_->Check(context, request));
}

StatusOr<google::api::servicecontrol::v1::ReportResponse>
ServiceControllerTracingStub::Report(
    grpc::ClientContext& context,
    google::api::servicecontrol::v1::ReportRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.api.servicecontrol.v1.ServiceController", "Report");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span, child_->Report(context, request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<ServiceControllerStub> MakeServiceControllerTracingStub(
    std::shared_ptr<ServiceControllerStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<ServiceControllerTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace servicecontrol_v1_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
