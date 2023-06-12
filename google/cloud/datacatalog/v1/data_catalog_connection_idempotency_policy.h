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
// source: google/cloud/datacatalog/v1/datacatalog.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATACATALOG_V1_DATA_CATALOG_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATACATALOG_V1_DATA_CATALOG_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/internal/retry_policy.h"
#include "google/cloud/version.h"
#include <google/cloud/datacatalog/v1/datacatalog.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace datacatalog_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class DataCatalogConnectionIdempotencyPolicy {
 public:
  virtual ~DataCatalogConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<DataCatalogConnectionIdempotencyPolicy> clone() const;

  virtual google::cloud::Idempotency SearchCatalog(
      google::cloud::datacatalog::v1::SearchCatalogRequest request);

  virtual google::cloud::Idempotency CreateEntryGroup(
      google::cloud::datacatalog::v1::CreateEntryGroupRequest const& request);

  virtual google::cloud::Idempotency GetEntryGroup(
      google::cloud::datacatalog::v1::GetEntryGroupRequest const& request);

  virtual google::cloud::Idempotency UpdateEntryGroup(
      google::cloud::datacatalog::v1::UpdateEntryGroupRequest const& request);

  virtual google::cloud::Idempotency DeleteEntryGroup(
      google::cloud::datacatalog::v1::DeleteEntryGroupRequest const& request);

  virtual google::cloud::Idempotency ListEntryGroups(
      google::cloud::datacatalog::v1::ListEntryGroupsRequest request);

  virtual google::cloud::Idempotency CreateEntry(
      google::cloud::datacatalog::v1::CreateEntryRequest const& request);

  virtual google::cloud::Idempotency UpdateEntry(
      google::cloud::datacatalog::v1::UpdateEntryRequest const& request);

  virtual google::cloud::Idempotency DeleteEntry(
      google::cloud::datacatalog::v1::DeleteEntryRequest const& request);

  virtual google::cloud::Idempotency GetEntry(
      google::cloud::datacatalog::v1::GetEntryRequest const& request);

  virtual google::cloud::Idempotency LookupEntry(
      google::cloud::datacatalog::v1::LookupEntryRequest const& request);

  virtual google::cloud::Idempotency ListEntries(
      google::cloud::datacatalog::v1::ListEntriesRequest request);

  virtual google::cloud::Idempotency ModifyEntryOverview(
      google::cloud::datacatalog::v1::ModifyEntryOverviewRequest const&
          request);

  virtual google::cloud::Idempotency ModifyEntryContacts(
      google::cloud::datacatalog::v1::ModifyEntryContactsRequest const&
          request);

  virtual google::cloud::Idempotency CreateTagTemplate(
      google::cloud::datacatalog::v1::CreateTagTemplateRequest const& request);

  virtual google::cloud::Idempotency GetTagTemplate(
      google::cloud::datacatalog::v1::GetTagTemplateRequest const& request);

  virtual google::cloud::Idempotency UpdateTagTemplate(
      google::cloud::datacatalog::v1::UpdateTagTemplateRequest const& request);

  virtual google::cloud::Idempotency DeleteTagTemplate(
      google::cloud::datacatalog::v1::DeleteTagTemplateRequest const& request);

  virtual google::cloud::Idempotency CreateTagTemplateField(
      google::cloud::datacatalog::v1::CreateTagTemplateFieldRequest const&
          request);

  virtual google::cloud::Idempotency UpdateTagTemplateField(
      google::cloud::datacatalog::v1::UpdateTagTemplateFieldRequest const&
          request);

  virtual google::cloud::Idempotency RenameTagTemplateField(
      google::cloud::datacatalog::v1::RenameTagTemplateFieldRequest const&
          request);

  virtual google::cloud::Idempotency RenameTagTemplateFieldEnumValue(
      google::cloud::datacatalog::v1::
          RenameTagTemplateFieldEnumValueRequest const& request);

  virtual google::cloud::Idempotency DeleteTagTemplateField(
      google::cloud::datacatalog::v1::DeleteTagTemplateFieldRequest const&
          request);

  virtual google::cloud::Idempotency CreateTag(
      google::cloud::datacatalog::v1::CreateTagRequest const& request);

  virtual google::cloud::Idempotency UpdateTag(
      google::cloud::datacatalog::v1::UpdateTagRequest const& request);

  virtual google::cloud::Idempotency DeleteTag(
      google::cloud::datacatalog::v1::DeleteTagRequest const& request);

  virtual google::cloud::Idempotency ListTags(
      google::cloud::datacatalog::v1::ListTagsRequest request);

  virtual google::cloud::Idempotency ReconcileTags(
      google::cloud::datacatalog::v1::ReconcileTagsRequest const& request);

  virtual google::cloud::Idempotency StarEntry(
      google::cloud::datacatalog::v1::StarEntryRequest const& request);

  virtual google::cloud::Idempotency UnstarEntry(
      google::cloud::datacatalog::v1::UnstarEntryRequest const& request);

  virtual google::cloud::Idempotency SetIamPolicy(
      google::iam::v1::SetIamPolicyRequest const& request);

  virtual google::cloud::Idempotency GetIamPolicy(
      google::iam::v1::GetIamPolicyRequest const& request);

  virtual google::cloud::Idempotency TestIamPermissions(
      google::iam::v1::TestIamPermissionsRequest const& request);

  virtual google::cloud::Idempotency ImportEntries(
      google::cloud::datacatalog::v1::ImportEntriesRequest const& request);
};

std::unique_ptr<DataCatalogConnectionIdempotencyPolicy>
MakeDefaultDataCatalogConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace datacatalog_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATACATALOG_V1_DATA_CATALOG_CONNECTION_IDEMPOTENCY_POLICY_H
