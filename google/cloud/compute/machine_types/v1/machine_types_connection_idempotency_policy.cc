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

#include "google/cloud/compute/machine_types/v1/machine_types_connection_idempotency_policy.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_machine_types_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

MachineTypesConnectionIdempotencyPolicy::~MachineTypesConnectionIdempotencyPolicy() = default;

std::unique_ptr<MachineTypesConnectionIdempotencyPolicy>
MachineTypesConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<MachineTypesConnectionIdempotencyPolicy>(*this);
}

Idempotency MachineTypesConnectionIdempotencyPolicy::AggregatedListMachineTypes(google::cloud::cpp::compute::machine_types::v1::AggregatedListMachineTypesRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency MachineTypesConnectionIdempotencyPolicy::GetMachineTypes(google::cloud::cpp::compute::machine_types::v1::GetMachineTypesRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency MachineTypesConnectionIdempotencyPolicy::ListMachineTypes(google::cloud::cpp::compute::machine_types::v1::ListMachineTypesRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

std::unique_ptr<MachineTypesConnectionIdempotencyPolicy>
    MakeDefaultMachineTypesConnectionIdempotencyPolicy() {
  return std::make_unique<MachineTypesConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_machine_types_v1
}  // namespace cloud
}  // namespace google
