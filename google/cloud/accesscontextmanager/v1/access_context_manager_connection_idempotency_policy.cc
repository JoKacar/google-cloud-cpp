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
// source: google/identity/accesscontextmanager/v1/access_context_manager.proto

#include "google/cloud/accesscontextmanager/v1/access_context_manager_connection_idempotency_policy.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace accesscontextmanager_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

AccessContextManagerConnectionIdempotencyPolicy::
    ~AccessContextManagerConnectionIdempotencyPolicy() = default;

std::unique_ptr<AccessContextManagerConnectionIdempotencyPolicy>
AccessContextManagerConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<AccessContextManagerConnectionIdempotencyPolicy>(
      *this);
}

Idempotency AccessContextManagerConnectionIdempotencyPolicy::ListAccessPolicies(
    google::identity::accesscontextmanager::v1::
        ListAccessPoliciesRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency AccessContextManagerConnectionIdempotencyPolicy::GetAccessPolicy(
    google::identity::accesscontextmanager::v1::GetAccessPolicyRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency AccessContextManagerConnectionIdempotencyPolicy::CreateAccessPolicy(
    google::identity::accesscontextmanager::v1::AccessPolicy const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency AccessContextManagerConnectionIdempotencyPolicy::UpdateAccessPolicy(
    google::identity::accesscontextmanager::v1::
        UpdateAccessPolicyRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency AccessContextManagerConnectionIdempotencyPolicy::DeleteAccessPolicy(
    google::identity::accesscontextmanager::v1::
        DeleteAccessPolicyRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency AccessContextManagerConnectionIdempotencyPolicy::ListAccessLevels(
    google::identity::accesscontextmanager::v1::
        ListAccessLevelsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency AccessContextManagerConnectionIdempotencyPolicy::GetAccessLevel(
    google::identity::accesscontextmanager::v1::GetAccessLevelRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency AccessContextManagerConnectionIdempotencyPolicy::CreateAccessLevel(
    google::identity::accesscontextmanager::v1::
        CreateAccessLevelRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency AccessContextManagerConnectionIdempotencyPolicy::UpdateAccessLevel(
    google::identity::accesscontextmanager::v1::
        UpdateAccessLevelRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency AccessContextManagerConnectionIdempotencyPolicy::DeleteAccessLevel(
    google::identity::accesscontextmanager::v1::
        DeleteAccessLevelRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
AccessContextManagerConnectionIdempotencyPolicy::ReplaceAccessLevels(
    google::identity::accesscontextmanager::v1::
        ReplaceAccessLevelsRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
AccessContextManagerConnectionIdempotencyPolicy::ListServicePerimeters(
    google::identity::accesscontextmanager::v1::
        ListServicePerimetersRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency
AccessContextManagerConnectionIdempotencyPolicy::GetServicePerimeter(
    google::identity::accesscontextmanager::v1::
        GetServicePerimeterRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency
AccessContextManagerConnectionIdempotencyPolicy::CreateServicePerimeter(
    google::identity::accesscontextmanager::v1::
        CreateServicePerimeterRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
AccessContextManagerConnectionIdempotencyPolicy::UpdateServicePerimeter(
    google::identity::accesscontextmanager::v1::
        UpdateServicePerimeterRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
AccessContextManagerConnectionIdempotencyPolicy::DeleteServicePerimeter(
    google::identity::accesscontextmanager::v1::
        DeleteServicePerimeterRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
AccessContextManagerConnectionIdempotencyPolicy::ReplaceServicePerimeters(
    google::identity::accesscontextmanager::v1::
        ReplaceServicePerimetersRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
AccessContextManagerConnectionIdempotencyPolicy::CommitServicePerimeters(
    google::identity::accesscontextmanager::v1::
        CommitServicePerimetersRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
AccessContextManagerConnectionIdempotencyPolicy::ListGcpUserAccessBindings(
    google::identity::accesscontextmanager::v1::
        ListGcpUserAccessBindingsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency
AccessContextManagerConnectionIdempotencyPolicy::GetGcpUserAccessBinding(
    google::identity::accesscontextmanager::v1::
        GetGcpUserAccessBindingRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency
AccessContextManagerConnectionIdempotencyPolicy::CreateGcpUserAccessBinding(
    google::identity::accesscontextmanager::v1::
        CreateGcpUserAccessBindingRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
AccessContextManagerConnectionIdempotencyPolicy::UpdateGcpUserAccessBinding(
    google::identity::accesscontextmanager::v1::
        UpdateGcpUserAccessBindingRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
AccessContextManagerConnectionIdempotencyPolicy::DeleteGcpUserAccessBinding(
    google::identity::accesscontextmanager::v1::
        DeleteGcpUserAccessBindingRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency AccessContextManagerConnectionIdempotencyPolicy::SetIamPolicy(
    google::iam::v1::SetIamPolicyRequest const& request) {
  return request.policy().etag().empty() ? Idempotency::kNonIdempotent
                                         : Idempotency::kIdempotent;
}

Idempotency AccessContextManagerConnectionIdempotencyPolicy::GetIamPolicy(
    google::iam::v1::GetIamPolicyRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency AccessContextManagerConnectionIdempotencyPolicy::TestIamPermissions(
    google::iam::v1::TestIamPermissionsRequest const&) {
  return Idempotency::kIdempotent;
}

std::unique_ptr<AccessContextManagerConnectionIdempotencyPolicy>
MakeDefaultAccessContextManagerConnectionIdempotencyPolicy() {
  return std::make_unique<AccessContextManagerConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace accesscontextmanager_v1
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
