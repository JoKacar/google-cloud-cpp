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
// source: google/cloud/resourcemanager/v3/organizations.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RESOURCEMANAGER_INTERNAL_ORGANIZATIONS_METADATA_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RESOURCEMANAGER_INTERNAL_ORGANIZATIONS_METADATA_DECORATOR_H

#include "google/cloud/resourcemanager/internal/organizations_stub.h"
#include "google/cloud/version.h"
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace resourcemanager_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class OrganizationsMetadata : public OrganizationsStub {
 public:
  ~OrganizationsMetadata() override = default;
  explicit OrganizationsMetadata(std::shared_ptr<OrganizationsStub> child);

  StatusOr<google::cloud::resourcemanager::v3::Organization> GetOrganization(
    grpc::ClientContext& context,
    google::cloud::resourcemanager::v3::GetOrganizationRequest const& request) override;

  StatusOr<google::cloud::resourcemanager::v3::SearchOrganizationsResponse> SearchOrganizations(
    grpc::ClientContext& context,
    google::cloud::resourcemanager::v3::SearchOrganizationsRequest const& request) override;

  StatusOr<google::iam::v1::Policy> GetIamPolicy(
    grpc::ClientContext& context,
    google::iam::v1::GetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::Policy> SetIamPolicy(
    grpc::ClientContext& context,
    google::iam::v1::SetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::TestIamPermissionsResponse> TestIamPermissions(
    grpc::ClientContext& context,
    google::iam::v1::TestIamPermissionsRequest const& request) override;

 private:
  void SetMetadata(grpc::ClientContext& context,
                   std::string const& request_params);
  std::shared_ptr<OrganizationsStub> child_;
  std::string api_client_header_;
};  // OrganizationsMetadata

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace resourcemanager_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RESOURCEMANAGER_INTERNAL_ORGANIZATIONS_METADATA_DECORATOR_H
