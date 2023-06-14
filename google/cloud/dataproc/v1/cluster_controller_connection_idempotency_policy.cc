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
// source: google/cloud/dataproc/v1/clusters.proto

#include "google/cloud/dataproc/v1/cluster_controller_connection_idempotency_policy.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace dataproc_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

ClusterControllerConnectionIdempotencyPolicy::
    ~ClusterControllerConnectionIdempotencyPolicy() = default;

std::unique_ptr<ClusterControllerConnectionIdempotencyPolicy>
ClusterControllerConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<ClusterControllerConnectionIdempotencyPolicy>(*this);
}

Idempotency ClusterControllerConnectionIdempotencyPolicy::CreateCluster(
    google::cloud::dataproc::v1::CreateClusterRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ClusterControllerConnectionIdempotencyPolicy::UpdateCluster(
    google::cloud::dataproc::v1::UpdateClusterRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ClusterControllerConnectionIdempotencyPolicy::StopCluster(
    google::cloud::dataproc::v1::StopClusterRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ClusterControllerConnectionIdempotencyPolicy::StartCluster(
    google::cloud::dataproc::v1::StartClusterRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ClusterControllerConnectionIdempotencyPolicy::DeleteCluster(
    google::cloud::dataproc::v1::DeleteClusterRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ClusterControllerConnectionIdempotencyPolicy::GetCluster(
    google::cloud::dataproc::v1::GetClusterRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency ClusterControllerConnectionIdempotencyPolicy::ListClusters(
    google::cloud::dataproc::v1::ListClustersRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency ClusterControllerConnectionIdempotencyPolicy::DiagnoseCluster(
    google::cloud::dataproc::v1::DiagnoseClusterRequest const&) {
  return Idempotency::kNonIdempotent;
}

std::unique_ptr<ClusterControllerConnectionIdempotencyPolicy>
MakeDefaultClusterControllerConnectionIdempotencyPolicy() {
  return std::make_unique<ClusterControllerConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dataproc_v1
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
