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
// source:
// google/cloud/compute/network_endpoint_groups/v1/network_endpoint_groups.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_NETWORK_ENDPOINT_GROUPS_V1_INTERNAL_NETWORK_ENDPOINT_GROUPS_REST_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_NETWORK_ENDPOINT_GROUPS_V1_INTERNAL_NETWORK_ENDPOINT_GROUPS_REST_STUB_H

#include "google/cloud/completion_queue.h"
#include "google/cloud/internal/rest_client.h"
#include "google/cloud/internal/rest_context.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/network_endpoint_groups/v1/network_endpoint_groups.pb.h>
#include <google/cloud/compute/zone_operations/v1/zone_operations.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace compute_network_endpoint_groups_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class NetworkEndpointGroupsRestStub {
 public:
  virtual ~NetworkEndpointGroupsRestStub() = default;

  virtual StatusOr<
      google::cloud::cpp::compute::v1::NetworkEndpointGroupAggregatedList>
  AggregatedListNetworkEndpointGroups(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::network_endpoint_groups::v1::
          AggregatedListNetworkEndpointGroupsRequest const& request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncAttachNetworkEndpoints(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::network_endpoint_groups::v1::
          AttachNetworkEndpointsRequest const& request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncDeleteNetworkEndpointGroup(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::network_endpoint_groups::v1::
          DeleteNetworkEndpointGroupRequest const& request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncDetachNetworkEndpoints(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::network_endpoint_groups::v1::
          DetachNetworkEndpointsRequest const& request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::NetworkEndpointGroup>
  GetNetworkEndpointGroup(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::network_endpoint_groups::v1::
          GetNetworkEndpointGroupRequest const& request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncInsertNetworkEndpointGroup(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::network_endpoint_groups::v1::
          InsertNetworkEndpointGroupRequest const& request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::NetworkEndpointGroupList>
  ListNetworkEndpointGroups(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::network_endpoint_groups::v1::
          ListNetworkEndpointGroupsRequest const& request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::
                       NetworkEndpointGroupsListNetworkEndpoints>
  ListNetworkEndpoints(google::cloud::rest_internal::RestContext& rest_context,
                       google::cloud::cpp::compute::network_endpoint_groups::
                           v1::ListNetworkEndpointsRequest const& request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
  TestIamPermissions(google::cloud::rest_internal::RestContext& rest_context,
                     google::cloud::cpp::compute::network_endpoint_groups::v1::
                         TestIamPermissionsRequest const& request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::zone_operations::v1::
          GetZoneOperationRequest const& request) = 0;

  virtual future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::zone_operations::v1::
          DeleteZoneOperationRequest const& request) = 0;
};

class DefaultNetworkEndpointGroupsRestStub
    : public NetworkEndpointGroupsRestStub {
 public:
  ~DefaultNetworkEndpointGroupsRestStub() override = default;

  explicit DefaultNetworkEndpointGroupsRestStub(Options options);
  DefaultNetworkEndpointGroupsRestStub(
      std::shared_ptr<rest_internal::RestClient> service,
      std::shared_ptr<rest_internal::RestClient> operations, Options options);

  StatusOr<google::cloud::cpp::compute::v1::NetworkEndpointGroupAggregatedList>
  AggregatedListNetworkEndpointGroups(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::network_endpoint_groups::v1::
          AggregatedListNetworkEndpointGroupsRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncAttachNetworkEndpoints(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::network_endpoint_groups::v1::
          AttachNetworkEndpointsRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncDeleteNetworkEndpointGroup(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::network_endpoint_groups::v1::
          DeleteNetworkEndpointGroupRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncDetachNetworkEndpoints(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::network_endpoint_groups::v1::
          DetachNetworkEndpointsRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::NetworkEndpointGroup>
  GetNetworkEndpointGroup(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::network_endpoint_groups::v1::
          GetNetworkEndpointGroupRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncInsertNetworkEndpointGroup(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::network_endpoint_groups::v1::
          InsertNetworkEndpointGroupRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::NetworkEndpointGroupList>
  ListNetworkEndpointGroups(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::network_endpoint_groups::v1::
          ListNetworkEndpointGroupsRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::
               NetworkEndpointGroupsListNetworkEndpoints>
  ListNetworkEndpoints(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::network_endpoint_groups::v1::
          ListNetworkEndpointsRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
  TestIamPermissions(google::cloud::rest_internal::RestContext& rest_context,
                     google::cloud::cpp::compute::network_endpoint_groups::v1::
                         TestIamPermissionsRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::zone_operations::v1::
          GetZoneOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::zone_operations::v1::
          DeleteZoneOperationRequest const& request) override;

 private:
  std::shared_ptr<rest_internal::RestClient> service_;
  std::shared_ptr<rest_internal::RestClient> operations_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_network_endpoint_groups_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_NETWORK_ENDPOINT_GROUPS_V1_INTERNAL_NETWORK_ENDPOINT_GROUPS_REST_STUB_H
