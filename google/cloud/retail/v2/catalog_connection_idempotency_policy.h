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
// source: google/cloud/retail/v2/catalog_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RETAIL_V2_CATALOG_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RETAIL_V2_CATALOG_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/internal/retry_policy.h"
#include "google/cloud/version.h"
#include <google/cloud/retail/v2/catalog_service.grpc.pb.h>
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace retail_v2 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class CatalogServiceConnectionIdempotencyPolicy {
 public:
  virtual ~CatalogServiceConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<CatalogServiceConnectionIdempotencyPolicy> clone()
      const;

  virtual google::cloud::Idempotency ListCatalogs(
      google::cloud::retail::v2::ListCatalogsRequest request);

  virtual google::cloud::Idempotency UpdateCatalog(
      google::cloud::retail::v2::UpdateCatalogRequest const& request);

  virtual google::cloud::Idempotency SetDefaultBranch(
      google::cloud::retail::v2::SetDefaultBranchRequest const& request);

  virtual google::cloud::Idempotency GetDefaultBranch(
      google::cloud::retail::v2::GetDefaultBranchRequest const& request);

  virtual google::cloud::Idempotency GetCompletionConfig(
      google::cloud::retail::v2::GetCompletionConfigRequest const& request);

  virtual google::cloud::Idempotency UpdateCompletionConfig(
      google::cloud::retail::v2::UpdateCompletionConfigRequest const& request);

  virtual google::cloud::Idempotency GetAttributesConfig(
      google::cloud::retail::v2::GetAttributesConfigRequest const& request);

  virtual google::cloud::Idempotency UpdateAttributesConfig(
      google::cloud::retail::v2::UpdateAttributesConfigRequest const& request);

  virtual google::cloud::Idempotency AddCatalogAttribute(
      google::cloud::retail::v2::AddCatalogAttributeRequest const& request);

  virtual google::cloud::Idempotency RemoveCatalogAttribute(
      google::cloud::retail::v2::RemoveCatalogAttributeRequest const& request);

  virtual google::cloud::Idempotency ReplaceCatalogAttribute(
      google::cloud::retail::v2::ReplaceCatalogAttributeRequest const& request);
};

std::unique_ptr<CatalogServiceConnectionIdempotencyPolicy>
MakeDefaultCatalogServiceConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace retail_v2
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RETAIL_V2_CATALOG_CONNECTION_IDEMPOTENCY_POLICY_H
