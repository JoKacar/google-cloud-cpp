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
// source: google/cloud/compute/subnetworks/v1/subnetworks.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_SUBNETWORKS_V1_INTERNAL_SUBNETWORKS_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_SUBNETWORKS_V1_INTERNAL_SUBNETWORKS_TRACING_CONNECTION_H

#include "google/cloud/compute/subnetworks/v1/subnetworks_connection.h"
#include "google/cloud/version.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace compute_subnetworks_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class SubnetworksTracingConnection
    : public compute_subnetworks_v1::SubnetworksConnection {
 public:
  ~SubnetworksTracingConnection() override = default;

  explicit SubnetworksTracingConnection(
      std::shared_ptr<compute_subnetworks_v1::SubnetworksConnection> child);

  Options options() override { return child_->options(); }

  StatusOr<google::cloud::cpp::compute::v1::SubnetworkAggregatedList>
  AggregatedListSubnetworks(
      google::cloud::cpp::compute::subnetworks::v1::
          AggregatedListSubnetworksRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteSubnetworks(google::cloud::cpp::compute::subnetworks::v1::
                        DeleteSubnetworksRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  ExpandIpCidrRange(google::cloud::cpp::compute::subnetworks::v1::
                        ExpandIpCidrRangeRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Subnetwork> GetSubnetworks(
      google::cloud::cpp::compute::subnetworks::v1::GetSubnetworksRequest const&
          request) override;

  StatusOr<google::cloud::cpp::compute::v1::Policy> GetIamPolicy(
      google::cloud::cpp::compute::subnetworks::v1::GetIamPolicyRequest const&
          request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertSubnetworks(google::cloud::cpp::compute::subnetworks::v1::
                        InsertSubnetworksRequest const& request) override;

  StreamRange<google::cloud::cpp::compute::v1::Subnetwork> ListSubnetworks(
      google::cloud::cpp::compute::subnetworks::v1::ListSubnetworksRequest
          request) override;

  StreamRange<google::cloud::cpp::compute::v1::UsableSubnetwork> ListUsable(
      google::cloud::cpp::compute::subnetworks::v1::ListUsableRequest request)
      override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> PatchSubnetworks(
      google::cloud::cpp::compute::subnetworks::v1::
          PatchSubnetworksRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Policy> SetIamPolicy(
      google::cloud::cpp::compute::subnetworks::v1::SetIamPolicyRequest const&
          request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  SetPrivateIpGoogleAccess(
      google::cloud::cpp::compute::subnetworks::v1::
          SetPrivateIpGoogleAccessRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
  TestIamPermissions(google::cloud::cpp::compute::subnetworks::v1::
                         TestIamPermissionsRequest const& request) override;

 private:
  std::shared_ptr<compute_subnetworks_v1::SubnetworksConnection> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Conditionally applies the tracing decorator to the given connection.
 *
 * The connection is only decorated if tracing is enabled (as determined by the
 * connection's options).
 */
std::shared_ptr<compute_subnetworks_v1::SubnetworksConnection>
MakeSubnetworksTracingConnection(
    std::shared_ptr<compute_subnetworks_v1::SubnetworksConnection> conn);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_subnetworks_v1_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_SUBNETWORKS_V1_INTERNAL_SUBNETWORKS_TRACING_CONNECTION_H
