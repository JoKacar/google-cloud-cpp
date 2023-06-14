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
// source: google/cloud/billing/v1/cloud_catalog.proto

#include "google/cloud/billing/v1/cloud_catalog_connection_idempotency_policy.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace billing_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

CloudCatalogConnectionIdempotencyPolicy::
    ~CloudCatalogConnectionIdempotencyPolicy() = default;

std::unique_ptr<CloudCatalogConnectionIdempotencyPolicy>
CloudCatalogConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<CloudCatalogConnectionIdempotencyPolicy>(*this);
}

Idempotency CloudCatalogConnectionIdempotencyPolicy::ListServices(
    google::cloud::billing::v1::ListServicesRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency CloudCatalogConnectionIdempotencyPolicy::ListSkus(
    google::cloud::billing::v1::ListSkusRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

std::unique_ptr<CloudCatalogConnectionIdempotencyPolicy>
MakeDefaultCloudCatalogConnectionIdempotencyPolicy() {
  return std::make_unique<CloudCatalogConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace billing_v1
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
