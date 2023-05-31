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
// source: google/cloud/compute/node_templates/v1/node_templates.proto

#include "google/cloud/compute/node_templates/v1/node_templates_connection_idempotency_policy.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_node_templates_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

NodeTemplatesConnectionIdempotencyPolicy::~NodeTemplatesConnectionIdempotencyPolicy() = default;

std::unique_ptr<NodeTemplatesConnectionIdempotencyPolicy>
NodeTemplatesConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<NodeTemplatesConnectionIdempotencyPolicy>(*this);
}

Idempotency NodeTemplatesConnectionIdempotencyPolicy::AggregatedListNodeTemplates(google::cloud::cpp::compute::node_templates::v1::AggregatedListNodeTemplatesRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency NodeTemplatesConnectionIdempotencyPolicy::DeleteNodeTemplates(google::cloud::cpp::compute::node_templates::v1::DeleteNodeTemplatesRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency NodeTemplatesConnectionIdempotencyPolicy::GetNodeTemplates(google::cloud::cpp::compute::node_templates::v1::GetNodeTemplatesRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency NodeTemplatesConnectionIdempotencyPolicy::GetIamPolicy(google::cloud::cpp::compute::node_templates::v1::GetIamPolicyRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency NodeTemplatesConnectionIdempotencyPolicy::InsertNodeTemplates(google::cloud::cpp::compute::node_templates::v1::InsertNodeTemplatesRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency NodeTemplatesConnectionIdempotencyPolicy::ListNodeTemplates(google::cloud::cpp::compute::node_templates::v1::ListNodeTemplatesRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency NodeTemplatesConnectionIdempotencyPolicy::SetIamPolicy(google::cloud::cpp::compute::node_templates::v1::SetIamPolicyRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency NodeTemplatesConnectionIdempotencyPolicy::TestIamPermissions(google::cloud::cpp::compute::node_templates::v1::TestIamPermissionsRequest const&) {
  return Idempotency::kNonIdempotent;
}

std::unique_ptr<NodeTemplatesConnectionIdempotencyPolicy>
    MakeDefaultNodeTemplatesConnectionIdempotencyPolicy() {
  return std::make_unique<NodeTemplatesConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_node_templates_v1
}  // namespace cloud
}  // namespace google
