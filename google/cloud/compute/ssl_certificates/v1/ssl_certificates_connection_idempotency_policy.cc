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
// source: google/cloud/compute/ssl_certificates/v1/ssl_certificates.proto

#include "google/cloud/compute/ssl_certificates/v1/ssl_certificates_connection_idempotency_policy.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_ssl_certificates_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

SslCertificatesConnectionIdempotencyPolicy::~SslCertificatesConnectionIdempotencyPolicy() = default;

std::unique_ptr<SslCertificatesConnectionIdempotencyPolicy>
SslCertificatesConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<SslCertificatesConnectionIdempotencyPolicy>(*this);
}

Idempotency SslCertificatesConnectionIdempotencyPolicy::AggregatedListSslCertificates(google::cloud::cpp::compute::ssl_certificates::v1::AggregatedListSslCertificatesRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency SslCertificatesConnectionIdempotencyPolicy::DeleteSslCertificates(google::cloud::cpp::compute::ssl_certificates::v1::DeleteSslCertificatesRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency SslCertificatesConnectionIdempotencyPolicy::GetSslCertificates(google::cloud::cpp::compute::ssl_certificates::v1::GetSslCertificatesRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency SslCertificatesConnectionIdempotencyPolicy::InsertSslCertificates(google::cloud::cpp::compute::ssl_certificates::v1::InsertSslCertificatesRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency SslCertificatesConnectionIdempotencyPolicy::ListSslCertificates(google::cloud::cpp::compute::ssl_certificates::v1::ListSslCertificatesRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

std::unique_ptr<SslCertificatesConnectionIdempotencyPolicy>
    MakeDefaultSslCertificatesConnectionIdempotencyPolicy() {
  return std::make_unique<SslCertificatesConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_ssl_certificates_v1
}  // namespace cloud
}  // namespace google
