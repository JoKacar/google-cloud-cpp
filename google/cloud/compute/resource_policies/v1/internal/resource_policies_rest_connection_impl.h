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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_RESOURCE_POLICIES_V1_INTERNAL_RESOURCE_POLICIES_REST_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_RESOURCE_POLICIES_V1_INTERNAL_RESOURCE_POLICIES_REST_CONNECTION_IMPL_H

#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/compute/resource_policies/v1/internal/resource_policies_rest_stub.h"
#include "google/cloud/compute/resource_policies/v1/internal/resource_policies_retry_traits.h"
#include "google/cloud/compute/resource_policies/v1/resource_policies_connection.h"
#include "google/cloud/compute/resource_policies/v1/resource_policies_connection_idempotency_policy.h"
#include "google/cloud/compute/resource_policies/v1/resource_policies_options.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace compute_resource_policies_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class ResourcePoliciesRestConnectionImpl
    : public compute_resource_policies_v1::ResourcePoliciesConnection {
 public:
  ~ResourcePoliciesRestConnectionImpl() override = default;

  ResourcePoliciesRestConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<compute_resource_policies_v1_internal::ResourcePoliciesRestStub> stub,
    Options options);

  Options options() override { return options_; }

  StatusOr<google::cloud::cpp::compute::v1::ResourcePolicyAggregatedList>
  AggregatedListResourcePolicies(google::cloud::cpp::compute::resource_policies::v1::AggregatedListResourcePoliciesRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteResourcePolicies(google::cloud::cpp::compute::resource_policies::v1::DeleteResourcePoliciesRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::ResourcePolicy>
  GetResourcePolicies(google::cloud::cpp::compute::resource_policies::v1::GetResourcePoliciesRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Policy>
  GetIamPolicy(google::cloud::cpp::compute::resource_policies::v1::GetIamPolicyRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertResourcePolicies(google::cloud::cpp::compute::resource_policies::v1::InsertResourcePoliciesRequest const& request) override;

  StreamRange<google::cloud::cpp::compute::v1::ResourcePolicy>
  ListResourcePolicies(google::cloud::cpp::compute::resource_policies::v1::ListResourcePoliciesRequest request) override;

  StatusOr<google::cloud::cpp::compute::v1::Policy>
  SetIamPolicy(google::cloud::cpp::compute::resource_policies::v1::SetIamPolicyRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
  TestIamPermissions(google::cloud::cpp::compute::resource_policies::v1::TestIamPermissionsRequest const& request) override;

 private:
  std::unique_ptr<compute_resource_policies_v1::ResourcePoliciesRetryPolicy> retry_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<compute_resource_policies_v1::ResourcePoliciesRetryPolicyOption>()) {
      return options.get<compute_resource_policies_v1::ResourcePoliciesRetryPolicyOption>()->clone();
    }
    return options_.get<compute_resource_policies_v1::ResourcePoliciesRetryPolicyOption>()->clone();
  }

  std::unique_ptr<BackoffPolicy> backoff_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<compute_resource_policies_v1::ResourcePoliciesBackoffPolicyOption>()) {
      return options.get<compute_resource_policies_v1::ResourcePoliciesBackoffPolicyOption>()->clone();
    }
    return options_.get<compute_resource_policies_v1::ResourcePoliciesBackoffPolicyOption>()->clone();
  }

  std::unique_ptr<compute_resource_policies_v1::ResourcePoliciesConnectionIdempotencyPolicy> idempotency_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<compute_resource_policies_v1::ResourcePoliciesConnectionIdempotencyPolicyOption>()) {
      return options.get<compute_resource_policies_v1::ResourcePoliciesConnectionIdempotencyPolicyOption>()->clone();
    }
    return options_.get<compute_resource_policies_v1::ResourcePoliciesConnectionIdempotencyPolicyOption>()->
clone();
  }

  std::unique_ptr<PollingPolicy> polling_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<compute_resource_policies_v1::ResourcePoliciesPollingPolicyOption>()) {
      return options.get<compute_resource_policies_v1::ResourcePoliciesPollingPolicyOption>()->clone();
    }
    return options_.get<compute_resource_policies_v1::ResourcePoliciesPollingPolicyOption>()->clone();
  }

  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<compute_resource_policies_v1_internal::ResourcePoliciesRestStub> stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_resource_policies_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_RESOURCE_POLICIES_V1_INTERNAL_RESOURCE_POLICIES_REST_CONNECTION_IMPL_H
