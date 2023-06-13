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
// source: google/cloud/tpu/v2/cloud_tpu.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TPU_V2_TPU_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TPU_V2_TPU_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/internal/retry_policy.h"
#include "google/cloud/version.h"
#include <google/cloud/tpu/v2/cloud_tpu.grpc.pb.h>
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace tpu_v2 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class TpuConnectionIdempotencyPolicy {
 public:
  virtual ~TpuConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<TpuConnectionIdempotencyPolicy> clone() const;

  virtual google::cloud::Idempotency ListNodes(
      google::cloud::tpu::v2::ListNodesRequest request);

  virtual google::cloud::Idempotency GetNode(
      google::cloud::tpu::v2::GetNodeRequest const& request);

  virtual google::cloud::Idempotency CreateNode(
      google::cloud::tpu::v2::CreateNodeRequest const& request);

  virtual google::cloud::Idempotency DeleteNode(
      google::cloud::tpu::v2::DeleteNodeRequest const& request);

  virtual google::cloud::Idempotency StopNode(
      google::cloud::tpu::v2::StopNodeRequest const& request);

  virtual google::cloud::Idempotency StartNode(
      google::cloud::tpu::v2::StartNodeRequest const& request);

  virtual google::cloud::Idempotency UpdateNode(
      google::cloud::tpu::v2::UpdateNodeRequest const& request);

  virtual google::cloud::Idempotency GenerateServiceIdentity(
      google::cloud::tpu::v2::GenerateServiceIdentityRequest const& request);

  virtual google::cloud::Idempotency ListAcceleratorTypes(
      google::cloud::tpu::v2::ListAcceleratorTypesRequest request);

  virtual google::cloud::Idempotency GetAcceleratorType(
      google::cloud::tpu::v2::GetAcceleratorTypeRequest const& request);

  virtual google::cloud::Idempotency ListRuntimeVersions(
      google::cloud::tpu::v2::ListRuntimeVersionsRequest request);

  virtual google::cloud::Idempotency GetRuntimeVersion(
      google::cloud::tpu::v2::GetRuntimeVersionRequest const& request);

  virtual google::cloud::Idempotency GetGuestAttributes(
      google::cloud::tpu::v2::GetGuestAttributesRequest const& request);
};

std::unique_ptr<TpuConnectionIdempotencyPolicy>
MakeDefaultTpuConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace tpu_v2
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TPU_V2_TPU_CONNECTION_IDEMPOTENCY_POLICY_H
