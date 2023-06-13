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
// source: google/cloud/dataproc/v1/autoscaling_policies.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPROC_V1_AUTOSCALING_POLICY_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPROC_V1_AUTOSCALING_POLICY_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/internal/retry_policy.h"
#include "google/cloud/version.h"
#include <google/cloud/dataproc/v1/autoscaling_policies.grpc.pb.h>
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace dataproc_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class AutoscalingPolicyServiceConnectionIdempotencyPolicy {
 public:
  virtual ~AutoscalingPolicyServiceConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<AutoscalingPolicyServiceConnectionIdempotencyPolicy>
  clone() const;

  virtual google::cloud::Idempotency CreateAutoscalingPolicy(
      google::cloud::dataproc::v1::CreateAutoscalingPolicyRequest const&
          request);

  virtual google::cloud::Idempotency UpdateAutoscalingPolicy(
      google::cloud::dataproc::v1::UpdateAutoscalingPolicyRequest const&
          request);

  virtual google::cloud::Idempotency GetAutoscalingPolicy(
      google::cloud::dataproc::v1::GetAutoscalingPolicyRequest const& request);

  virtual google::cloud::Idempotency ListAutoscalingPolicies(
      google::cloud::dataproc::v1::ListAutoscalingPoliciesRequest request);

  virtual google::cloud::Idempotency DeleteAutoscalingPolicy(
      google::cloud::dataproc::v1::DeleteAutoscalingPolicyRequest const&
          request);
};

std::unique_ptr<AutoscalingPolicyServiceConnectionIdempotencyPolicy>
MakeDefaultAutoscalingPolicyServiceConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dataproc_v1
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPROC_V1_AUTOSCALING_POLICY_CONNECTION_IDEMPOTENCY_POLICY_H
