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
// source: google/cloud/compute/forwarding_rules/v1/forwarding_rules.proto

#include "google/cloud/compute/forwarding_rules/v1/forwarding_rules_connection_idempotency_policy.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_forwarding_rules_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

ForwardingRulesConnectionIdempotencyPolicy::
    ~ForwardingRulesConnectionIdempotencyPolicy() = default;

std::unique_ptr<ForwardingRulesConnectionIdempotencyPolicy>
ForwardingRulesConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<ForwardingRulesConnectionIdempotencyPolicy>(*this);
}

Idempotency
ForwardingRulesConnectionIdempotencyPolicy::AggregatedListForwardingRules(
    google::cloud::cpp::compute::forwarding_rules::v1::
        AggregatedListForwardingRulesRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency ForwardingRulesConnectionIdempotencyPolicy::DeleteForwardingRules(
    google::cloud::cpp::compute::forwarding_rules::v1::
        DeleteForwardingRulesRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ForwardingRulesConnectionIdempotencyPolicy::GetForwardingRules(
    google::cloud::cpp::compute::forwarding_rules::v1::
        GetForwardingRulesRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency ForwardingRulesConnectionIdempotencyPolicy::InsertForwardingRules(
    google::cloud::cpp::compute::forwarding_rules::v1::
        InsertForwardingRulesRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ForwardingRulesConnectionIdempotencyPolicy::ListForwardingRules(
    google::cloud::cpp::compute::forwarding_rules::v1::
        ListForwardingRulesRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency ForwardingRulesConnectionIdempotencyPolicy::PatchForwardingRules(
    google::cloud::cpp::compute::forwarding_rules::v1::
        PatchForwardingRulesRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ForwardingRulesConnectionIdempotencyPolicy::SetLabels(
    google::cloud::cpp::compute::forwarding_rules::v1::
        SetLabelsRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ForwardingRulesConnectionIdempotencyPolicy::SetTarget(
    google::cloud::cpp::compute::forwarding_rules::v1::
        SetTargetRequest const&) {
  return Idempotency::kNonIdempotent;
}

std::unique_ptr<ForwardingRulesConnectionIdempotencyPolicy>
MakeDefaultForwardingRulesConnectionIdempotencyPolicy() {
  return std::make_unique<ForwardingRulesConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_forwarding_rules_v1
}  // namespace cloud
}  // namespace google
