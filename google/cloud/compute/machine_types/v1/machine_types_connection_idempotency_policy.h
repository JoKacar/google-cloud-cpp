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
// source: google/cloud/compute/machine_types/v1/machine_types.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_MACHINE_TYPES_V1_MACHINE_TYPES_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_MACHINE_TYPES_V1_MACHINE_TYPES_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/internal/retry_policy.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/machine_types/v1/machine_types.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace compute_machine_types_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class MachineTypesConnectionIdempotencyPolicy {
 public:
  virtual ~MachineTypesConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<MachineTypesConnectionIdempotencyPolicy> clone() const;

  virtual google::cloud::Idempotency
  AggregatedListMachineTypes(google::cloud::cpp::compute::machine_types::v1::AggregatedListMachineTypesRequest const& request);

  virtual google::cloud::Idempotency
  GetMachineTypes(google::cloud::cpp::compute::machine_types::v1::GetMachineTypesRequest const& request);

  virtual google::cloud::Idempotency
  ListMachineTypes(google::cloud::cpp::compute::machine_types::v1::ListMachineTypesRequest request);
};

std::unique_ptr<MachineTypesConnectionIdempotencyPolicy>
    MakeDefaultMachineTypesConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_machine_types_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_MACHINE_TYPES_V1_MACHINE_TYPES_CONNECTION_IDEMPOTENCY_POLICY_H
