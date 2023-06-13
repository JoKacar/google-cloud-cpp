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
// source: google/monitoring/v3/group_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MONITORING_V3_INTERNAL_GROUP_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MONITORING_V3_INTERNAL_GROUP_STUB_H

#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/monitoring/v3/group_service.grpc.pb.h>
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace monitoring_v3_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class GroupServiceStub {
 public:
  virtual ~GroupServiceStub() = 0;

  virtual StatusOr<google::monitoring::v3::ListGroupsResponse> ListGroups(
      grpc::ClientContext& context,
      google::monitoring::v3::ListGroupsRequest const& request) = 0;

  virtual StatusOr<google::monitoring::v3::Group> GetGroup(
      grpc::ClientContext& context,
      google::monitoring::v3::GetGroupRequest const& request) = 0;

  virtual StatusOr<google::monitoring::v3::Group> CreateGroup(
      grpc::ClientContext& context,
      google::monitoring::v3::CreateGroupRequest const& request) = 0;

  virtual StatusOr<google::monitoring::v3::Group> UpdateGroup(
      grpc::ClientContext& context,
      google::monitoring::v3::UpdateGroupRequest const& request) = 0;

  virtual Status DeleteGroup(
      grpc::ClientContext& context,
      google::monitoring::v3::DeleteGroupRequest const& request) = 0;

  virtual StatusOr<google::monitoring::v3::ListGroupMembersResponse>
  ListGroupMembers(
      grpc::ClientContext& context,
      google::monitoring::v3::ListGroupMembersRequest const& request) = 0;
};

class DefaultGroupServiceStub : public GroupServiceStub {
 public:
  explicit DefaultGroupServiceStub(
      std::unique_ptr<google::monitoring::v3::GroupService::StubInterface>
          grpc_stub)
      : grpc_stub_(std::move(grpc_stub)) {}

  StatusOr<google::monitoring::v3::ListGroupsResponse> ListGroups(
      grpc::ClientContext& client_context,
      google::monitoring::v3::ListGroupsRequest const& request) override;

  StatusOr<google::monitoring::v3::Group> GetGroup(
      grpc::ClientContext& client_context,
      google::monitoring::v3::GetGroupRequest const& request) override;

  StatusOr<google::monitoring::v3::Group> CreateGroup(
      grpc::ClientContext& client_context,
      google::monitoring::v3::CreateGroupRequest const& request) override;

  StatusOr<google::monitoring::v3::Group> UpdateGroup(
      grpc::ClientContext& client_context,
      google::monitoring::v3::UpdateGroupRequest const& request) override;

  Status DeleteGroup(
      grpc::ClientContext& client_context,
      google::monitoring::v3::DeleteGroupRequest const& request) override;

  StatusOr<google::monitoring::v3::ListGroupMembersResponse> ListGroupMembers(
      grpc::ClientContext& client_context,
      google::monitoring::v3::ListGroupMembersRequest const& request) override;

 private:
  std::unique_ptr<google::monitoring::v3::GroupService::StubInterface>
      grpc_stub_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace monitoring_v3_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MONITORING_V3_INTERNAL_GROUP_STUB_H
