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
// source: generator/integration_tests/test2.proto

#include "generator/integration_tests/golden/v1/golden_rest_only_connection_idempotency_policy.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace golden_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

GoldenRestOnlyConnectionIdempotencyPolicy::~GoldenRestOnlyConnectionIdempotencyPolicy() = default;

std::unique_ptr<GoldenRestOnlyConnectionIdempotencyPolicy>
GoldenRestOnlyConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<GoldenRestOnlyConnectionIdempotencyPolicy>(*this);
}

Idempotency GoldenRestOnlyConnectionIdempotencyPolicy::Noop(google::protobuf::Empty const&) {
  return Idempotency::kNonIdempotent;
}

std::unique_ptr<GoldenRestOnlyConnectionIdempotencyPolicy>
    MakeDefaultGoldenRestOnlyConnectionIdempotencyPolicy() {
  return std::make_unique<GoldenRestOnlyConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace golden_v1
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
