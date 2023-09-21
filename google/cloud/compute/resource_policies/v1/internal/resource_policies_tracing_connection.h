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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_RESOURCE_POLICIES_V1_INTERNAL_RESOURCE_POLICIES_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_RESOURCE_POLICIES_V1_INTERNAL_RESOURCE_POLICIES_TRACING_CONNECTION_H

#include "google/cloud/compute/resource_policies/v1/resource_policies_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_resource_policies_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class ResourcePoliciesTracingConnection
    : public compute_resource_policies_v1::ResourcePoliciesConnection {
 public:
  ~ResourcePoliciesTracingConnection() override = default;

  explicit ResourcePoliciesTracingConnection(
      std::shared_ptr<compute_resource_policies_v1::ResourcePoliciesConnection>
          child);

  Options options() override { return child_->options(); }

  StreamRange<std::pair<
      std::string, google::cloud::cpp::compute::v1::ResourcePoliciesScopedList>>
  AggregatedListResourcePolicies(
      google::cloud::cpp::compute::resource_policies::v1::
          AggregatedListResourcePoliciesRequest request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteResourcePolicy(google::cloud::cpp::compute::resource_policies::v1::
                           DeleteResourcePolicyRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::ResourcePolicy> GetResourcePolicy(
      google::cloud::cpp::compute::resource_policies::v1::
          GetResourcePolicyRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Policy> GetIamPolicy(
      google::cloud::cpp::compute::resource_policies::v1::
          GetIamPolicyRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertResourcePolicy(google::cloud::cpp::compute::resource_policies::v1::
                           InsertResourcePolicyRequest const& request) override;

  StreamRange<google::cloud::cpp::compute::v1::ResourcePolicy>
  ListResourcePolicies(google::cloud::cpp::compute::resource_policies::v1::
                           ListResourcePoliciesRequest request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  PatchResourcePolicy(google::cloud::cpp::compute::resource_policies::v1::
                          PatchResourcePolicyRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Policy> SetIamPolicy(
      google::cloud::cpp::compute::resource_policies::v1::
          SetIamPolicyRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
  TestIamPermissions(google::cloud::cpp::compute::resource_policies::v1::
                         TestIamPermissionsRequest const& request) override;

 private:
  std::shared_ptr<compute_resource_policies_v1::ResourcePoliciesConnection>
      child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Conditionally applies the tracing decorator to the given connection.
 *
 * The connection is only decorated if tracing is enabled (as determined by the
 * connection's options).
 */
std::shared_ptr<compute_resource_policies_v1::ResourcePoliciesConnection>
MakeResourcePoliciesTracingConnection(
    std::shared_ptr<compute_resource_policies_v1::ResourcePoliciesConnection>
        conn);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_resource_policies_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_RESOURCE_POLICIES_V1_INTERNAL_RESOURCE_POLICIES_TRACING_CONNECTION_H
