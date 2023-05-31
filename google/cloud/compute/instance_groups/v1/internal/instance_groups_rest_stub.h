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
// source: google/cloud/compute/instance_groups/v1/instance_groups.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_INSTANCE_GROUPS_V1_INTERNAL_INSTANCE_GROUPS_REST_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_INSTANCE_GROUPS_V1_INTERNAL_INSTANCE_GROUPS_REST_STUB_H

#include "google/cloud/completion_queue.h"
#include "google/cloud/internal/rest_client.h"
#include "google/cloud/internal/rest_context.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/instance_groups/v1/instance_groups.pb.h>
#include <google/cloud/compute/zone_operations/v1/zone_operations.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace compute_instance_groups_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class InstanceGroupsRestStub {
 public:
  virtual ~InstanceGroupsRestStub() = default;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>> AsyncAddInstances(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::instance_groups::v1::AddInstancesRequest const& request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::InstanceGroupAggregatedList> AggregatedListInstanceGroups(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::instance_groups::v1::AggregatedListInstanceGroupsRequest const& request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>> AsyncDeleteInstanceGroups(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::instance_groups::v1::DeleteInstanceGroupsRequest const& request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::InstanceGroup> GetInstanceGroups(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::instance_groups::v1::GetInstanceGroupsRequest const& request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>> AsyncInsertInstanceGroups(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::instance_groups::v1::InsertInstanceGroupsRequest const& request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::InstanceGroupList> ListInstanceGroups(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::instance_groups::v1::ListInstanceGroupsRequest const& request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::InstanceGroupsListInstances> ListInstances(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::instance_groups::v1::ListInstancesRequest const& request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>> AsyncRemoveInstances(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::instance_groups::v1::RemoveInstancesRequest const& request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>> AsyncSetNamedPorts(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::instance_groups::v1::SetNamedPortsRequest const& request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::zone_operations::v1::GetZoneOperationsRequest const& request) = 0;

  virtual future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::zone_operations::v1::DeleteZoneOperationsRequest const& request) = 0;
};

class DefaultInstanceGroupsRestStub : public InstanceGroupsRestStub {
 public:
  ~DefaultInstanceGroupsRestStub() override = default;

  explicit DefaultInstanceGroupsRestStub(Options options);
  DefaultInstanceGroupsRestStub(
      std::shared_ptr<rest_internal::RestClient> service,
      std::shared_ptr<rest_internal::RestClient> operations,
      Options options);

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> AsyncAddInstances(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::instance_groups::v1::AddInstancesRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::InstanceGroupAggregatedList> AggregatedListInstanceGroups(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::instance_groups::v1::AggregatedListInstanceGroupsRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> AsyncDeleteInstanceGroups(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::instance_groups::v1::DeleteInstanceGroupsRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::InstanceGroup> GetInstanceGroups(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::instance_groups::v1::GetInstanceGroupsRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> AsyncInsertInstanceGroups(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::instance_groups::v1::InsertInstanceGroupsRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::InstanceGroupList> ListInstanceGroups(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::instance_groups::v1::ListInstanceGroupsRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::InstanceGroupsListInstances> ListInstances(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::instance_groups::v1::ListInstancesRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> AsyncRemoveInstances(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::instance_groups::v1::RemoveInstancesRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> AsyncSetNamedPorts(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::instance_groups::v1::SetNamedPortsRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::zone_operations::v1::GetZoneOperationsRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::zone_operations::v1::DeleteZoneOperationsRequest const& request) override;

 private:
  std::shared_ptr<rest_internal::RestClient> service_;
  std::shared_ptr<rest_internal::RestClient> operations_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_instance_groups_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_INSTANCE_GROUPS_V1_INTERNAL_INSTANCE_GROUPS_REST_STUB_H
