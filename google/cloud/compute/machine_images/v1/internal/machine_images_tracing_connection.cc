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
// source: google/cloud/compute/machine_images/v1/machine_images.proto

#include "google/cloud/compute/machine_images/v1/internal/machine_images_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_machine_images_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

MachineImagesTracingConnection::MachineImagesTracingConnection(
    std::shared_ptr<compute_machine_images_v1::MachineImagesConnection> child)
    : child_(std::move(child)) {}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
MachineImagesTracingConnection::DeleteMachineImage(
    google::cloud::cpp::compute::machine_images::v1::
        DeleteMachineImageRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_machine_images_v1::MachineImagesConnection::DeleteMachineImage");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span),
                           child_->DeleteMachineImage(request));
}

StatusOr<google::cloud::cpp::compute::v1::MachineImage>
MachineImagesTracingConnection::GetMachineImage(
    google::cloud::cpp::compute::machine_images::v1::
        GetMachineImageRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_machine_images_v1::MachineImagesConnection::GetMachineImage");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetMachineImage(request));
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
MachineImagesTracingConnection::GetIamPolicy(
    google::cloud::cpp::compute::machine_images::v1::GetIamPolicyRequest const&
        request) {
  auto span = internal::MakeSpan(
      "compute_machine_images_v1::MachineImagesConnection::GetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetIamPolicy(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
MachineImagesTracingConnection::InsertMachineImage(
    google::cloud::cpp::compute::machine_images::v1::
        InsertMachineImageRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_machine_images_v1::MachineImagesConnection::InsertMachineImage");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span),
                           child_->InsertMachineImage(request));
}

StreamRange<google::cloud::cpp::compute::v1::MachineImage>
MachineImagesTracingConnection::ListMachineImages(
    google::cloud::cpp::compute::machine_images::v1::ListMachineImagesRequest
        request) {
  auto span = internal::MakeSpan(
      "compute_machine_images_v1::MachineImagesConnection::ListMachineImages");
  auto scope = opentelemetry::trace::Scope(span);
  auto sr = child_->ListMachineImages(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::cpp::compute::v1::MachineImage>(std::move(span),
                                                     std::move(sr));
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
MachineImagesTracingConnection::SetIamPolicy(
    google::cloud::cpp::compute::machine_images::v1::SetIamPolicyRequest const&
        request) {
  auto span = internal::MakeSpan(
      "compute_machine_images_v1::MachineImagesConnection::SetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->SetIamPolicy(request));
}

StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
MachineImagesTracingConnection::TestIamPermissions(
    google::cloud::cpp::compute::machine_images::v1::
        TestIamPermissionsRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_machine_images_v1::MachineImagesConnection::TestIamPermissions");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->TestIamPermissions(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<compute_machine_images_v1::MachineImagesConnection>
MakeMachineImagesTracingConnection(
    std::shared_ptr<compute_machine_images_v1::MachineImagesConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<MachineImagesTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_machine_images_v1_internal
}  // namespace cloud
}  // namespace google
