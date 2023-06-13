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
// source: google/cloud/compute/region_ssl_policies/v1/region_ssl_policies.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_SSL_POLICIES_V1_INTERNAL_REGION_SSL_POLICIES_REST_METADATA_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_SSL_POLICIES_V1_INTERNAL_REGION_SSL_POLICIES_REST_METADATA_DECORATOR_H

#include "google/cloud/compute/region_ssl_policies/v1/internal/region_ssl_policies_rest_stub.h"
#include "google/cloud/future.h"
#include "google/cloud/rest_options.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/region_operations/v1/region_operations.pb.h>
#include <google/cloud/compute/region_ssl_policies/v1/region_ssl_policies.pb.h>
#include <memory>
#include <string>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace compute_region_ssl_policies_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class RegionSslPoliciesRestMetadata : public RegionSslPoliciesRestStub {
 public:
  ~RegionSslPoliciesRestMetadata() override = default;
  explicit RegionSslPoliciesRestMetadata(
      std::shared_ptr<RegionSslPoliciesRestStub> child);

  google::cloud::future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncDeleteRegionSslPolicies(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::region_ssl_policies::v1::
          DeleteRegionSslPoliciesRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::SslPolicy> GetRegionSslPolicies(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::region_ssl_policies::v1::
          GetRegionSslPoliciesRequest const& request) override;

  google::cloud::future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncInsertRegionSslPolicies(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::region_ssl_policies::v1::
          InsertRegionSslPoliciesRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::SslPoliciesList>
  ListRegionSslPolicies(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::region_ssl_policies::v1::
          ListRegionSslPoliciesRequest const& request) override;

  StatusOr<
      google::cloud::cpp::compute::v1::SslPoliciesListAvailableFeaturesResponse>
  ListAvailableFeatures(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::region_ssl_policies::v1::
          ListAvailableFeaturesRequest const& request) override;

  google::cloud::future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncPatchRegionSslPolicies(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::region_ssl_policies::v1::
          PatchRegionSslPoliciesRequest const& request) override;

  google::cloud::future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::region_operations::v1::
          GetRegionOperationsRequest const& request) override;

  google::cloud::future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::region_operations::v1::
          DeleteRegionOperationsRequest const& request) override;

 private:
  void SetMetadata(rest_internal::RestContext& rest_context,
                   std::vector<std::string> const& params = {});

  std::shared_ptr<RegionSslPoliciesRestStub> child_;
  std::string api_client_header_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_ssl_policies_v1_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_SSL_POLICIES_V1_INTERNAL_REGION_SSL_POLICIES_REST_METADATA_DECORATOR_H
