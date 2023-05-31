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
// source: google/cloud/compute/resource_policies/v1/resource_policies.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_RESOURCE_POLICIES_V1_INTERNAL_RESOURCE_POLICIES_REST_METADATA_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_RESOURCE_POLICIES_V1_INTERNAL_RESOURCE_POLICIES_REST_METADATA_DECORATOR_H

#include "google/cloud/compute/resource_policies/v1/internal/resource_policies_rest_stub.h"
#include "google/cloud/future.h"
#include "google/cloud/rest_options.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/region_operations/v1/region_operations.pb.h>
#include <google/cloud/compute/resource_policies/v1/resource_policies.pb.h>
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace compute_resource_policies_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class ResourcePoliciesRestMetadata : public ResourcePoliciesRestStub {
 public:
  ~ResourcePoliciesRestMetadata() override = default;
  explicit ResourcePoliciesRestMetadata(std::shared_ptr<ResourcePoliciesRestStub> child);

  StatusOr<google::cloud::cpp::compute::v1::ResourcePolicyAggregatedList> AggregatedListResourcePolicies(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::resource_policies::v1::AggregatedListResourcePoliciesRequest const& request) override;

  google::cloud::future<StatusOr<google::cloud::cpp::compute::v1::Operation>> AsyncDeleteResourcePolicies(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::resource_policies::v1::DeleteResourcePoliciesRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::ResourcePolicy> GetResourcePolicies(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::resource_policies::v1::GetResourcePoliciesRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Policy> GetIamPolicy(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::resource_policies::v1::GetIamPolicyRequest const& request) override;

  google::cloud::future<StatusOr<google::cloud::cpp::compute::v1::Operation>> AsyncInsertResourcePolicies(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::resource_policies::v1::InsertResourcePoliciesRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::ResourcePolicyList> ListResourcePolicies(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::resource_policies::v1::ListResourcePoliciesRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Policy> SetIamPolicy(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::resource_policies::v1::SetIamPolicyRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse> TestIamPermissions(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::resource_policies::v1::TestIamPermissionsRequest const& request) override;

  google::cloud::future<StatusOr<google::cloud::cpp::compute::v1::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::region_operations::v1::GetRegionOperationsRequest const& request) override;

  google::cloud::future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::region_operations::v1::DeleteRegionOperationsRequest const& request) override;

 private:
  void SetMetadata(rest_internal::RestContext& rest_context,
                   std::vector<std::string> const& params = {});

  std::shared_ptr<ResourcePoliciesRestStub> child_;
  std::string api_client_header_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_resource_policies_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_RESOURCE_POLICIES_V1_INTERNAL_RESOURCE_POLICIES_REST_METADATA_DECORATOR_H
