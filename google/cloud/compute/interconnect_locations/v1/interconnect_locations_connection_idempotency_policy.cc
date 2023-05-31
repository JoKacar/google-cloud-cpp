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
// source: google/cloud/compute/interconnect_locations/v1/interconnect_locations.proto

#include "google/cloud/compute/interconnect_locations/v1/interconnect_locations_connection_idempotency_policy.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_interconnect_locations_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

InterconnectLocationsConnectionIdempotencyPolicy::~InterconnectLocationsConnectionIdempotencyPolicy() = default;

std::unique_ptr<InterconnectLocationsConnectionIdempotencyPolicy>
InterconnectLocationsConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<InterconnectLocationsConnectionIdempotencyPolicy>(*this);
}

Idempotency InterconnectLocationsConnectionIdempotencyPolicy::GetInterconnectLocations(google::cloud::cpp::compute::interconnect_locations::v1::GetInterconnectLocationsRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency InterconnectLocationsConnectionIdempotencyPolicy::ListInterconnectLocations(google::cloud::cpp::compute::interconnect_locations::v1::ListInterconnectLocationsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

std::unique_ptr<InterconnectLocationsConnectionIdempotencyPolicy>
    MakeDefaultInterconnectLocationsConnectionIdempotencyPolicy() {
  return std::make_unique<InterconnectLocationsConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_interconnect_locations_v1
}  // namespace cloud
}  // namespace google
