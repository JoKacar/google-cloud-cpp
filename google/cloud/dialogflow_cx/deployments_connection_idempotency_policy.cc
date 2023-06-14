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
// source: google/cloud/dialogflow/cx/v3/deployment.proto

#include "google/cloud/dialogflow_cx/deployments_connection_idempotency_policy.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace dialogflow_cx {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

DeploymentsConnectionIdempotencyPolicy::
    ~DeploymentsConnectionIdempotencyPolicy() = default;

std::unique_ptr<DeploymentsConnectionIdempotencyPolicy>
DeploymentsConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<DeploymentsConnectionIdempotencyPolicy>(*this);
}

Idempotency DeploymentsConnectionIdempotencyPolicy::ListDeployments(
    google::cloud::dialogflow::cx::v3::ListDeploymentsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency DeploymentsConnectionIdempotencyPolicy::GetDeployment(
    google::cloud::dialogflow::cx::v3::GetDeploymentRequest const&) {
  return Idempotency::kIdempotent;
}

std::unique_ptr<DeploymentsConnectionIdempotencyPolicy>
MakeDefaultDeploymentsConnectionIdempotencyPolicy() {
  return std::make_unique<DeploymentsConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_cx
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
