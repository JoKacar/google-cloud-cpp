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
// source: google/cloud/compute/disks/v1/disks.proto

#include "google/cloud/compute/disks/v1/internal/disks_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_disks_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

DisksTracingConnection::DisksTracingConnection(
    std::shared_ptr<compute_disks_v1::DisksConnection> child)
    : child_(std::move(child)) {}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DisksTracingConnection::AddResourcePolicies(
    google::cloud::cpp::compute::disks::v1::AddResourcePoliciesRequest const&
        request) {
  auto span = internal::MakeSpan(
      "compute_disks_v1::DisksConnection::AddResourcePolicies");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span),
                           child_->AddResourcePolicies(request));
}

StatusOr<google::cloud::cpp::compute::v1::DiskAggregatedList>
DisksTracingConnection::AggregatedListDisks(
    google::cloud::cpp::compute::disks::v1::AggregatedListDisksRequest const&
        request) {
  auto span = internal::MakeSpan(
      "compute_disks_v1::DisksConnection::AggregatedListDisks");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->AggregatedListDisks(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DisksTracingConnection::BulkInsert(
    google::cloud::cpp::compute::disks::v1::BulkInsertRequest const& request) {
  auto span =
      internal::MakeSpan("compute_disks_v1::DisksConnection::BulkInsert");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->BulkInsert(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DisksTracingConnection::CreateSnapshot(
    google::cloud::cpp::compute::disks::v1::CreateSnapshotRequest const&
        request) {
  auto span =
      internal::MakeSpan("compute_disks_v1::DisksConnection::CreateSnapshot");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->CreateSnapshot(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DisksTracingConnection::DeleteDisks(
    google::cloud::cpp::compute::disks::v1::DeleteDisksRequest const& request) {
  auto span =
      internal::MakeSpan("compute_disks_v1::DisksConnection::DeleteDisks");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->DeleteDisks(request));
}

StatusOr<google::cloud::cpp::compute::v1::Disk>
DisksTracingConnection::GetDisks(
    google::cloud::cpp::compute::disks::v1::GetDisksRequest const& request) {
  auto span = internal::MakeSpan("compute_disks_v1::DisksConnection::GetDisks");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetDisks(request));
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
DisksTracingConnection::GetIamPolicy(
    google::cloud::cpp::compute::disks::v1::GetIamPolicyRequest const&
        request) {
  auto span =
      internal::MakeSpan("compute_disks_v1::DisksConnection::GetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetIamPolicy(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DisksTracingConnection::InsertDisks(
    google::cloud::cpp::compute::disks::v1::InsertDisksRequest const& request) {
  auto span =
      internal::MakeSpan("compute_disks_v1::DisksConnection::InsertDisks");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->InsertDisks(request));
}

StreamRange<google::cloud::cpp::compute::v1::Disk>
DisksTracingConnection::ListDisks(
    google::cloud::cpp::compute::disks::v1::ListDisksRequest request) {
  auto span =
      internal::MakeSpan("compute_disks_v1::DisksConnection::ListDisks");
  auto scope = opentelemetry::trace::Scope(span);
  auto sr = child_->ListDisks(std::move(request));
  return internal::MakeTracedStreamRange<google::cloud::cpp::compute::v1::Disk>(
      std::move(span), std::move(sr));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DisksTracingConnection::RemoveResourcePolicies(
    google::cloud::cpp::compute::disks::v1::RemoveResourcePoliciesRequest const&
        request) {
  auto span = internal::MakeSpan(
      "compute_disks_v1::DisksConnection::RemoveResourcePolicies");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span),
                           child_->RemoveResourcePolicies(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DisksTracingConnection::Resize(
    google::cloud::cpp::compute::disks::v1::ResizeRequest const& request) {
  auto span = internal::MakeSpan("compute_disks_v1::DisksConnection::Resize");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->Resize(request));
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
DisksTracingConnection::SetIamPolicy(
    google::cloud::cpp::compute::disks::v1::SetIamPolicyRequest const&
        request) {
  auto span =
      internal::MakeSpan("compute_disks_v1::DisksConnection::SetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->SetIamPolicy(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DisksTracingConnection::SetLabels(
    google::cloud::cpp::compute::disks::v1::SetLabelsRequest const& request) {
  auto span =
      internal::MakeSpan("compute_disks_v1::DisksConnection::SetLabels");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->SetLabels(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DisksTracingConnection::StartAsyncReplication(
    google::cloud::cpp::compute::disks::v1::StartAsyncReplicationRequest const&
        request) {
  auto span = internal::MakeSpan(
      "compute_disks_v1::DisksConnection::StartAsyncReplication");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span),
                           child_->StartAsyncReplication(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DisksTracingConnection::StopAsyncReplication(
    google::cloud::cpp::compute::disks::v1::StopAsyncReplicationRequest const&
        request) {
  auto span = internal::MakeSpan(
      "compute_disks_v1::DisksConnection::StopAsyncReplication");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span),
                           child_->StopAsyncReplication(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DisksTracingConnection::StopGroupAsyncReplication(
    google::cloud::cpp::compute::disks::v1::
        StopGroupAsyncReplicationRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_disks_v1::DisksConnection::StopGroupAsyncReplication");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span),
                           child_->StopGroupAsyncReplication(request));
}

StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
DisksTracingConnection::TestIamPermissions(
    google::cloud::cpp::compute::disks::v1::TestIamPermissionsRequest const&
        request) {
  auto span = internal::MakeSpan(
      "compute_disks_v1::DisksConnection::TestIamPermissions");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->TestIamPermissions(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
DisksTracingConnection::UpdateDisks(
    google::cloud::cpp::compute::disks::v1::UpdateDisksRequest const& request) {
  auto span =
      internal::MakeSpan("compute_disks_v1::DisksConnection::UpdateDisks");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->UpdateDisks(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<compute_disks_v1::DisksConnection> MakeDisksTracingConnection(
    std::shared_ptr<compute_disks_v1::DisksConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<DisksTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_disks_v1_internal
}  // namespace cloud
}  // namespace google
