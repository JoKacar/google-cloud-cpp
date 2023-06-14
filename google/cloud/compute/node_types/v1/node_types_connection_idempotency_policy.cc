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
// source: google/cloud/compute/node_types/v1/node_types.proto

#include "google/cloud/compute/node_types/v1/node_types_connection_idempotency_policy.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace compute_node_types_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

NodeTypesConnectionIdempotencyPolicy::~NodeTypesConnectionIdempotencyPolicy() =
    default;

std::unique_ptr<NodeTypesConnectionIdempotencyPolicy>
NodeTypesConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<NodeTypesConnectionIdempotencyPolicy>(*this);
}

Idempotency NodeTypesConnectionIdempotencyPolicy::AggregatedListNodeTypes(
    google::cloud::cpp::compute::node_types::v1::
        AggregatedListNodeTypesRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency NodeTypesConnectionIdempotencyPolicy::GetNodeTypes(
    google::cloud::cpp::compute::node_types::v1::GetNodeTypesRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency NodeTypesConnectionIdempotencyPolicy::ListNodeTypes(
    google::cloud::cpp::compute::node_types::v1::
        ListNodeTypesRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

std::unique_ptr<NodeTypesConnectionIdempotencyPolicy>
MakeDefaultNodeTypesConnectionIdempotencyPolicy() {
  return std::make_unique<NodeTypesConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_node_types_v1
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
