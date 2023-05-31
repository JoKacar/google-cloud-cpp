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
// source: google/cloud/compute/region_instance_groups/v1/region_instance_groups.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_INSTANCE_GROUPS_V1_INTERNAL_REGION_INSTANCE_GROUPS_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_INSTANCE_GROUPS_V1_INTERNAL_REGION_INSTANCE_GROUPS_TRACING_CONNECTION_H

#include "google/cloud/compute/region_instance_groups/v1/region_instance_groups_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_region_instance_groups_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class RegionInstanceGroupsTracingConnection
    : public compute_region_instance_groups_v1::RegionInstanceGroupsConnection {
 public:
  ~RegionInstanceGroupsTracingConnection() override = default;

  explicit RegionInstanceGroupsTracingConnection(
    std::shared_ptr<compute_region_instance_groups_v1::RegionInstanceGroupsConnection> child);

  Options options() override { return child_->options(); }

  StatusOr<google::cloud::cpp::compute::v1::InstanceGroup>
  GetRegionInstanceGroups(google::cloud::cpp::compute::region_instance_groups::v1::GetRegionInstanceGroupsRequest const& request) override;

  StreamRange<google::cloud::cpp::compute::v1::InstanceGroup>
  ListRegionInstanceGroups(google::cloud::cpp::compute::region_instance_groups::v1::ListRegionInstanceGroupsRequest request) override;

  StreamRange<google::cloud::cpp::compute::v1::InstanceWithNamedPorts>
  ListInstances(google::cloud::cpp::compute::region_instance_groups::v1::ListInstancesRequest request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  SetNamedPorts(google::cloud::cpp::compute::region_instance_groups::v1::SetNamedPortsRequest const& request) override;

 private:
  std::shared_ptr<compute_region_instance_groups_v1::RegionInstanceGroupsConnection> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Conditionally applies the tracing decorator to the given connection.
 *
 * The connection is only decorated if tracing is enabled (as determined by the
 * connection's options).
 */
std::shared_ptr<compute_region_instance_groups_v1::RegionInstanceGroupsConnection>
MakeRegionInstanceGroupsTracingConnection(
    std::shared_ptr<compute_region_instance_groups_v1::RegionInstanceGroupsConnection> conn);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_instance_groups_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_INSTANCE_GROUPS_V1_INTERNAL_REGION_INSTANCE_GROUPS_TRACING_CONNECTION_H
