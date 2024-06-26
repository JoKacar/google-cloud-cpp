// Copyright 2024 Google LLC
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
// source: google/cloud/security/publicca/v1/service.proto

#include "google/cloud/publicca/v1/internal/public_certificate_authority_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace publicca_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

PublicCertificateAuthorityServiceTracingConnection::
    PublicCertificateAuthorityServiceTracingConnection(
        std::shared_ptr<
            publicca_v1::PublicCertificateAuthorityServiceConnection>
            child)
    : child_(std::move(child)) {}

StatusOr<google::cloud::security::publicca::v1::ExternalAccountKey>
PublicCertificateAuthorityServiceTracingConnection::CreateExternalAccountKey(
    google::cloud::security::publicca::v1::
        CreateExternalAccountKeyRequest const& request) {
  auto span = internal::MakeSpan(
      "publicca_v1::PublicCertificateAuthorityServiceConnection::"
      "CreateExternalAccountKey");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CreateExternalAccountKey(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<publicca_v1::PublicCertificateAuthorityServiceConnection>
MakePublicCertificateAuthorityServiceTracingConnection(
    std::shared_ptr<publicca_v1::PublicCertificateAuthorityServiceConnection>
        conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<PublicCertificateAuthorityServiceTracingConnection>(
        std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace publicca_v1_internal
}  // namespace cloud
}  // namespace google
