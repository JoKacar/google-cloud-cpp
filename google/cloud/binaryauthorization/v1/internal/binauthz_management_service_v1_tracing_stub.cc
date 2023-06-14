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
// source: google/cloud/binaryauthorization/v1/service.proto

#include "google/cloud/binaryauthorization/v1/internal/binauthz_management_service_v1_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace binaryauthorization_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

BinauthzManagementServiceV1TracingStub::BinauthzManagementServiceV1TracingStub(
    std::shared_ptr<BinauthzManagementServiceV1Stub> child)
    : child_(std::move(child)) {}

StatusOr<google::cloud::binaryauthorization::v1::Policy>
BinauthzManagementServiceV1TracingStub::GetPolicy(
    grpc::ClientContext& context,
    google::cloud::binaryauthorization::v1::GetPolicyRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.binaryauthorization.v1.BinauthzManagementServiceV1",
      "GetPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span, child_->GetPolicy(context, request));
}

StatusOr<google::cloud::binaryauthorization::v1::Policy>
BinauthzManagementServiceV1TracingStub::UpdatePolicy(
    grpc::ClientContext& context,
    google::cloud::binaryauthorization::v1::UpdatePolicyRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.binaryauthorization.v1.BinauthzManagementServiceV1",
      "UpdatePolicy");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->UpdatePolicy(context, request));
}

StatusOr<google::cloud::binaryauthorization::v1::Attestor>
BinauthzManagementServiceV1TracingStub::CreateAttestor(
    grpc::ClientContext& context,
    google::cloud::binaryauthorization::v1::CreateAttestorRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.binaryauthorization.v1.BinauthzManagementServiceV1",
      "CreateAttestor");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->CreateAttestor(context, request));
}

StatusOr<google::cloud::binaryauthorization::v1::Attestor>
BinauthzManagementServiceV1TracingStub::GetAttestor(
    grpc::ClientContext& context,
    google::cloud::binaryauthorization::v1::GetAttestorRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.binaryauthorization.v1.BinauthzManagementServiceV1",
      "GetAttestor");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->GetAttestor(context, request));
}

StatusOr<google::cloud::binaryauthorization::v1::Attestor>
BinauthzManagementServiceV1TracingStub::UpdateAttestor(
    grpc::ClientContext& context,
    google::cloud::binaryauthorization::v1::UpdateAttestorRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.binaryauthorization.v1.BinauthzManagementServiceV1",
      "UpdateAttestor");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->UpdateAttestor(context, request));
}

StatusOr<google::cloud::binaryauthorization::v1::ListAttestorsResponse>
BinauthzManagementServiceV1TracingStub::ListAttestors(
    grpc::ClientContext& context,
    google::cloud::binaryauthorization::v1::ListAttestorsRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.binaryauthorization.v1.BinauthzManagementServiceV1",
      "ListAttestors");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->ListAttestors(context, request));
}

Status BinauthzManagementServiceV1TracingStub::DeleteAttestor(
    grpc::ClientContext& context,
    google::cloud::binaryauthorization::v1::DeleteAttestorRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.binaryauthorization.v1.BinauthzManagementServiceV1",
      "DeleteAttestor");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->DeleteAttestor(context, request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<BinauthzManagementServiceV1Stub>
MakeBinauthzManagementServiceV1TracingStub(
    std::shared_ptr<BinauthzManagementServiceV1Stub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<BinauthzManagementServiceV1TracingStub>(
      std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace binaryauthorization_v1_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
