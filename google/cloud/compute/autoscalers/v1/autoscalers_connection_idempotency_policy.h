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
// source: google/cloud/compute/autoscalers/v1/autoscalers.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_AUTOSCALERS_V1_AUTOSCALERS_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_AUTOSCALERS_V1_AUTOSCALERS_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/internal/retry_policy.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/autoscalers/v1/autoscalers.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace compute_autoscalers_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class AutoscalersConnectionIdempotencyPolicy {
 public:
  virtual ~AutoscalersConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<AutoscalersConnectionIdempotencyPolicy> clone() const;

  virtual google::cloud::Idempotency
  AggregatedListAutoscalers(google::cloud::cpp::compute::autoscalers::v1::AggregatedListAutoscalersRequest const& request);

  virtual google::cloud::Idempotency
  DeleteAutoscalers(google::cloud::cpp::compute::autoscalers::v1::DeleteAutoscalersRequest const& request);

  virtual google::cloud::Idempotency
  GetAutoscalers(google::cloud::cpp::compute::autoscalers::v1::GetAutoscalersRequest const& request);

  virtual google::cloud::Idempotency
  InsertAutoscalers(google::cloud::cpp::compute::autoscalers::v1::InsertAutoscalersRequest const& request);

  virtual google::cloud::Idempotency
  ListAutoscalers(google::cloud::cpp::compute::autoscalers::v1::ListAutoscalersRequest request);

  virtual google::cloud::Idempotency
  PatchAutoscalers(google::cloud::cpp::compute::autoscalers::v1::PatchAutoscalersRequest const& request);

  virtual google::cloud::Idempotency
  UpdateAutoscalers(google::cloud::cpp::compute::autoscalers::v1::UpdateAutoscalersRequest const& request);
};

std::unique_ptr<AutoscalersConnectionIdempotencyPolicy>
    MakeDefaultAutoscalersConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_autoscalers_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_AUTOSCALERS_V1_AUTOSCALERS_CONNECTION_IDEMPOTENCY_POLICY_H
