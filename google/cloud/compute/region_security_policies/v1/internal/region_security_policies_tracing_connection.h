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
// google/cloud/compute/region_security_policies/v1/region_security_policies.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_SECURITY_POLICIES_V1_INTERNAL_REGION_SECURITY_POLICIES_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_SECURITY_POLICIES_V1_INTERNAL_REGION_SECURITY_POLICIES_TRACING_CONNECTION_H

#include "google/cloud/compute/region_security_policies/v1/region_security_policies_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_region_security_policies_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class RegionSecurityPoliciesTracingConnection
    : public compute_region_security_policies_v1::
          RegionSecurityPoliciesConnection {
 public:
  ~RegionSecurityPoliciesTracingConnection() override = default;

  explicit RegionSecurityPoliciesTracingConnection(
      std::shared_ptr<
          compute_region_security_policies_v1::RegionSecurityPoliciesConnection>
          child);

  Options options() override { return child_->options(); }

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteRegionSecurityPolicies(
      google::cloud::cpp::compute::region_security_policies::v1::
          DeleteRegionSecurityPoliciesRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::SecurityPolicy>
  GetRegionSecurityPolicies(
      google::cloud::cpp::compute::region_security_policies::v1::
          GetRegionSecurityPoliciesRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertRegionSecurityPolicies(
      google::cloud::cpp::compute::region_security_policies::v1::
          InsertRegionSecurityPoliciesRequest const& request) override;

  StreamRange<google::cloud::cpp::compute::v1::SecurityPolicy>
  ListRegionSecurityPolicies(
      google::cloud::cpp::compute::region_security_policies::v1::
          ListRegionSecurityPoliciesRequest request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  PatchRegionSecurityPolicies(
      google::cloud::cpp::compute::region_security_policies::v1::
          PatchRegionSecurityPoliciesRequest const& request) override;

 private:
  std::shared_ptr<
      compute_region_security_policies_v1::RegionSecurityPoliciesConnection>
      child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Conditionally applies the tracing decorator to the given connection.
 *
 * The connection is only decorated if tracing is enabled (as determined by the
 * connection's options).
 */
std::shared_ptr<
    compute_region_security_policies_v1::RegionSecurityPoliciesConnection>
MakeRegionSecurityPoliciesTracingConnection(
    std::shared_ptr<
        compute_region_security_policies_v1::RegionSecurityPoliciesConnection>
        conn);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_security_policies_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_SECURITY_POLICIES_V1_INTERNAL_REGION_SECURITY_POLICIES_TRACING_CONNECTION_H
