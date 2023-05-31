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
// source: google/cloud/compute/target_tcp_proxies/v1/target_tcp_proxies.proto

#include "google/cloud/compute/target_tcp_proxies/v1/target_tcp_proxies_connection_idempotency_policy.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_target_tcp_proxies_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

TargetTcpProxiesConnectionIdempotencyPolicy::~TargetTcpProxiesConnectionIdempotencyPolicy() = default;

std::unique_ptr<TargetTcpProxiesConnectionIdempotencyPolicy>
TargetTcpProxiesConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<TargetTcpProxiesConnectionIdempotencyPolicy>(*this);
}

Idempotency TargetTcpProxiesConnectionIdempotencyPolicy::AggregatedListTargetTcpProxies(google::cloud::cpp::compute::target_tcp_proxies::v1::AggregatedListTargetTcpProxiesRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency TargetTcpProxiesConnectionIdempotencyPolicy::DeleteTargetTcpProxies(google::cloud::cpp::compute::target_tcp_proxies::v1::DeleteTargetTcpProxiesRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency TargetTcpProxiesConnectionIdempotencyPolicy::GetTargetTcpProxies(google::cloud::cpp::compute::target_tcp_proxies::v1::GetTargetTcpProxiesRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency TargetTcpProxiesConnectionIdempotencyPolicy::InsertTargetTcpProxies(google::cloud::cpp::compute::target_tcp_proxies::v1::InsertTargetTcpProxiesRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency TargetTcpProxiesConnectionIdempotencyPolicy::ListTargetTcpProxies(google::cloud::cpp::compute::target_tcp_proxies::v1::ListTargetTcpProxiesRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency TargetTcpProxiesConnectionIdempotencyPolicy::SetBackendService(google::cloud::cpp::compute::target_tcp_proxies::v1::SetBackendServiceRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency TargetTcpProxiesConnectionIdempotencyPolicy::SetProxyHeader(google::cloud::cpp::compute::target_tcp_proxies::v1::SetProxyHeaderRequest const&) {
  return Idempotency::kNonIdempotent;
}

std::unique_ptr<TargetTcpProxiesConnectionIdempotencyPolicy>
    MakeDefaultTargetTcpProxiesConnectionIdempotencyPolicy() {
  return std::make_unique<TargetTcpProxiesConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_target_tcp_proxies_v1
}  // namespace cloud
}  // namespace google
