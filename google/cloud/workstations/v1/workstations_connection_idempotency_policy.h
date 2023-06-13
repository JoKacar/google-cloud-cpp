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
// source: google/cloud/workstations/v1/workstations.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_WORKSTATIONS_V1_WORKSTATIONS_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_WORKSTATIONS_V1_WORKSTATIONS_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/internal/retry_policy.h"
#include "google/cloud/version.h"
#include <google/cloud/workstations/v1/workstations.grpc.pb.h>
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace workstations_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class WorkstationsConnectionIdempotencyPolicy {
 public:
  virtual ~WorkstationsConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<WorkstationsConnectionIdempotencyPolicy> clone()
      const;

  virtual google::cloud::Idempotency GetWorkstationCluster(
      google::cloud::workstations::v1::GetWorkstationClusterRequest const&
          request);

  virtual google::cloud::Idempotency ListWorkstationClusters(
      google::cloud::workstations::v1::ListWorkstationClustersRequest request);

  virtual google::cloud::Idempotency CreateWorkstationCluster(
      google::cloud::workstations::v1::CreateWorkstationClusterRequest const&
          request);

  virtual google::cloud::Idempotency UpdateWorkstationCluster(
      google::cloud::workstations::v1::UpdateWorkstationClusterRequest const&
          request);

  virtual google::cloud::Idempotency DeleteWorkstationCluster(
      google::cloud::workstations::v1::DeleteWorkstationClusterRequest const&
          request);

  virtual google::cloud::Idempotency GetWorkstationConfig(
      google::cloud::workstations::v1::GetWorkstationConfigRequest const&
          request);

  virtual google::cloud::Idempotency ListWorkstationConfigs(
      google::cloud::workstations::v1::ListWorkstationConfigsRequest request);

  virtual google::cloud::Idempotency ListUsableWorkstationConfigs(
      google::cloud::workstations::v1::ListUsableWorkstationConfigsRequest
          request);

  virtual google::cloud::Idempotency CreateWorkstationConfig(
      google::cloud::workstations::v1::CreateWorkstationConfigRequest const&
          request);

  virtual google::cloud::Idempotency UpdateWorkstationConfig(
      google::cloud::workstations::v1::UpdateWorkstationConfigRequest const&
          request);

  virtual google::cloud::Idempotency DeleteWorkstationConfig(
      google::cloud::workstations::v1::DeleteWorkstationConfigRequest const&
          request);

  virtual google::cloud::Idempotency GetWorkstation(
      google::cloud::workstations::v1::GetWorkstationRequest const& request);

  virtual google::cloud::Idempotency ListWorkstations(
      google::cloud::workstations::v1::ListWorkstationsRequest request);

  virtual google::cloud::Idempotency ListUsableWorkstations(
      google::cloud::workstations::v1::ListUsableWorkstationsRequest request);

  virtual google::cloud::Idempotency CreateWorkstation(
      google::cloud::workstations::v1::CreateWorkstationRequest const& request);

  virtual google::cloud::Idempotency UpdateWorkstation(
      google::cloud::workstations::v1::UpdateWorkstationRequest const& request);

  virtual google::cloud::Idempotency DeleteWorkstation(
      google::cloud::workstations::v1::DeleteWorkstationRequest const& request);

  virtual google::cloud::Idempotency StartWorkstation(
      google::cloud::workstations::v1::StartWorkstationRequest const& request);

  virtual google::cloud::Idempotency StopWorkstation(
      google::cloud::workstations::v1::StopWorkstationRequest const& request);

  virtual google::cloud::Idempotency GenerateAccessToken(
      google::cloud::workstations::v1::GenerateAccessTokenRequest const&
          request);
};

std::unique_ptr<WorkstationsConnectionIdempotencyPolicy>
MakeDefaultWorkstationsConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace workstations_v1
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_WORKSTATIONS_V1_WORKSTATIONS_CONNECTION_IDEMPOTENCY_POLICY_H
