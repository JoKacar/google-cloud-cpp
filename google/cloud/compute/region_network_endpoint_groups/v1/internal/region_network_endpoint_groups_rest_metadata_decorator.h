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
// source: google/cloud/compute/region_network_endpoint_groups/v1/region_network_endpoint_groups.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_NETWORK_ENDPOINT_GROUPS_V1_INTERNAL_REGION_NETWORK_ENDPOINT_GROUPS_REST_METADATA_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_NETWORK_ENDPOINT_GROUPS_V1_INTERNAL_REGION_NETWORK_ENDPOINT_GROUPS_REST_METADATA_DECORATOR_H

#include "google/cloud/compute/region_network_endpoint_groups/v1/internal/region_network_endpoint_groups_rest_stub.h"
#include "google/cloud/future.h"
#include "google/cloud/rest_options.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/region_network_endpoint_groups/v1/region_network_endpoint_groups.pb.h>
#include <google/cloud/compute/region_operations/v1/region_operations.pb.h>
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace compute_region_network_endpoint_groups_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class RegionNetworkEndpointGroupsRestMetadata : public RegionNetworkEndpointGroupsRestStub {
 public:
  ~RegionNetworkEndpointGroupsRestMetadata() override = default;
  explicit RegionNetworkEndpointGroupsRestMetadata(std::shared_ptr<RegionNetworkEndpointGroupsRestStub> child);

  google::cloud::future<StatusOr<google::cloud::cpp::compute::v1::Operation>> AsyncDeleteRegionNetworkEndpointGroups(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::region_network_endpoint_groups::v1::DeleteRegionNetworkEndpointGroupsRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::NetworkEndpointGroup> GetRegionNetworkEndpointGroups(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::region_network_endpoint_groups::v1::GetRegionNetworkEndpointGroupsRequest const& request) override;

  google::cloud::future<StatusOr<google::cloud::cpp::compute::v1::Operation>> AsyncInsertRegionNetworkEndpointGroups(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::region_network_endpoint_groups::v1::InsertRegionNetworkEndpointGroupsRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::NetworkEndpointGroupList> ListRegionNetworkEndpointGroups(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::region_network_endpoint_groups::v1::ListRegionNetworkEndpointGroupsRequest const& request) override;

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

  std::shared_ptr<RegionNetworkEndpointGroupsRestStub> child_;
  std::string api_client_header_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_network_endpoint_groups_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_NETWORK_ENDPOINT_GROUPS_V1_INTERNAL_REGION_NETWORK_ENDPOINT_GROUPS_REST_METADATA_DECORATOR_H
