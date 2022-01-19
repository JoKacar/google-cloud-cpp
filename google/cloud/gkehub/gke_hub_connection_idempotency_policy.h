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
// source: google/cloud/gkehub/v1/service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GKEHUB_GKE_HUB_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GKEHUB_GKE_HUB_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/future.h"
#include "google/cloud/internal/retry_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/cloud/gkehub/v1/service.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace gkehub {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class GkeHubConnectionIdempotencyPolicy {
 public:
  virtual ~GkeHubConnectionIdempotencyPolicy() = 0;

  /// Create a new copy of this object.
  virtual std::unique_ptr<GkeHubConnectionIdempotencyPolicy> clone() const = 0;

  virtual google::cloud::internal::Idempotency ListMemberships(
      google::cloud::gkehub::v1::ListMembershipsRequest request) = 0;

  virtual google::cloud::internal::Idempotency ListFeatures(
      google::cloud::gkehub::v1::ListFeaturesRequest request) = 0;

  virtual google::cloud::internal::Idempotency GetMembership(
      google::cloud::gkehub::v1::GetMembershipRequest const& request) = 0;

  virtual google::cloud::internal::Idempotency GetFeature(
      google::cloud::gkehub::v1::GetFeatureRequest const& request) = 0;

  virtual google::cloud::internal::Idempotency CreateMembership(
      google::cloud::gkehub::v1::CreateMembershipRequest const& request) = 0;

  virtual google::cloud::internal::Idempotency CreateFeature(
      google::cloud::gkehub::v1::CreateFeatureRequest const& request) = 0;

  virtual google::cloud::internal::Idempotency DeleteMembership(
      google::cloud::gkehub::v1::DeleteMembershipRequest const& request) = 0;

  virtual google::cloud::internal::Idempotency DeleteFeature(
      google::cloud::gkehub::v1::DeleteFeatureRequest const& request) = 0;

  virtual google::cloud::internal::Idempotency UpdateMembership(
      google::cloud::gkehub::v1::UpdateMembershipRequest const& request) = 0;

  virtual google::cloud::internal::Idempotency UpdateFeature(
      google::cloud::gkehub::v1::UpdateFeatureRequest const& request) = 0;

  virtual google::cloud::internal::Idempotency GenerateConnectManifest(
      google::cloud::gkehub::v1::GenerateConnectManifestRequest const&
          request) = 0;
};

std::unique_ptr<GkeHubConnectionIdempotencyPolicy>
MakeDefaultGkeHubConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace gkehub
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GKEHUB_GKE_HUB_CONNECTION_IDEMPOTENCY_POLICY_H
