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

// Generated by the Codegen C++ plugin.
// If you make any local changes, they will be lost.
// source: google/cloud/support/v2/case_service.proto

#include "google/cloud/support/v2/internal/case_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace support_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

CaseServiceTracingStub::CaseServiceTracingStub(
    std::shared_ptr<CaseServiceStub> child)
    : child_(std::move(child)) {}

StatusOr<google::cloud::support::v2::Case> CaseServiceTracingStub::GetCase(
    grpc::ClientContext& context,
    google::cloud::support::v2::GetCaseRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.support.v2.CaseService", "GetCase");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span, child_->GetCase(context, request));
}

StatusOr<google::cloud::support::v2::ListCasesResponse>
CaseServiceTracingStub::ListCases(
    grpc::ClientContext& context,
    google::cloud::support::v2::ListCasesRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.support.v2.CaseService",
                                     "ListCases");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span, child_->ListCases(context, request));
}

StatusOr<google::cloud::support::v2::SearchCasesResponse>
CaseServiceTracingStub::SearchCases(
    grpc::ClientContext& context,
    google::cloud::support::v2::SearchCasesRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.support.v2.CaseService",
                                     "SearchCases");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->SearchCases(context, request));
}

StatusOr<google::cloud::support::v2::Case> CaseServiceTracingStub::CreateCase(
    grpc::ClientContext& context,
    google::cloud::support::v2::CreateCaseRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.support.v2.CaseService",
                                     "CreateCase");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->CreateCase(context, request));
}

StatusOr<google::cloud::support::v2::Case> CaseServiceTracingStub::UpdateCase(
    grpc::ClientContext& context,
    google::cloud::support::v2::UpdateCaseRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.support.v2.CaseService",
                                     "UpdateCase");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->UpdateCase(context, request));
}

StatusOr<google::cloud::support::v2::Case> CaseServiceTracingStub::EscalateCase(
    grpc::ClientContext& context,
    google::cloud::support::v2::EscalateCaseRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.support.v2.CaseService",
                                     "EscalateCase");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->EscalateCase(context, request));
}

StatusOr<google::cloud::support::v2::Case> CaseServiceTracingStub::CloseCase(
    grpc::ClientContext& context,
    google::cloud::support::v2::CloseCaseRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.support.v2.CaseService",
                                     "CloseCase");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span, child_->CloseCase(context, request));
}

StatusOr<google::cloud::support::v2::SearchCaseClassificationsResponse>
CaseServiceTracingStub::SearchCaseClassifications(
    grpc::ClientContext& context,
    google::cloud::support::v2::SearchCaseClassificationsRequest const&
        request) {
  auto span = internal::MakeSpanGrpc("google.cloud.support.v2.CaseService",
                                     "SearchCaseClassifications");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->SearchCaseClassifications(context, request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<CaseServiceStub> MakeCaseServiceTracingStub(
    std::shared_ptr<CaseServiceStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<CaseServiceTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace support_v2_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
