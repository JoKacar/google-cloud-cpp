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
// source: google/cloud/binaryauthorization/v1/service.proto

#include "google/cloud/binaryauthorization/v1/internal/validation_helper_v1_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace binaryauthorization_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

ValidationHelperV1TracingConnection::ValidationHelperV1TracingConnection(
    std::shared_ptr<binaryauthorization_v1::ValidationHelperV1Connection> child)
    : child_(std::move(child)) {}

StatusOr<google::cloud::binaryauthorization::v1::
             ValidateAttestationOccurrenceResponse>
ValidationHelperV1TracingConnection::ValidateAttestationOccurrence(
    google::cloud::binaryauthorization::v1::
        ValidateAttestationOccurrenceRequest const& request) {
  auto span = internal::MakeSpan(
      "binaryauthorization_v1::ValidationHelperV1Connection::"
      "ValidateAttestationOccurrence");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span,
                           child_->ValidateAttestationOccurrence(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<binaryauthorization_v1::ValidationHelperV1Connection>
MakeValidationHelperV1TracingConnection(
    std::shared_ptr<binaryauthorization_v1::ValidationHelperV1Connection>
        conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn =
        std::make_shared<ValidationHelperV1TracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace binaryauthorization_v1_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
