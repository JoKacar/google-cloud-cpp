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
// google/cloud/compute/region_target_tcp_proxies/v1/region_target_tcp_proxies.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_TARGET_TCP_PROXIES_V1_INTERNAL_REGION_TARGET_TCP_PROXIES_REST_METADATA_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_TARGET_TCP_PROXIES_V1_INTERNAL_REGION_TARGET_TCP_PROXIES_REST_METADATA_DECORATOR_H

#include "google/cloud/compute/region_target_tcp_proxies/v1/internal/region_target_tcp_proxies_rest_stub.h"
#include "google/cloud/future.h"
#include "google/cloud/rest_options.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/region_operations/v1/region_operations.pb.h>
#include <google/cloud/compute/region_target_tcp_proxies/v1/region_target_tcp_proxies.pb.h>
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace compute_region_target_tcp_proxies_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class RegionTargetTcpProxiesRestMetadata
    : public RegionTargetTcpProxiesRestStub {
 public:
  ~RegionTargetTcpProxiesRestMetadata() override = default;
  explicit RegionTargetTcpProxiesRestMetadata(
      std::shared_ptr<RegionTargetTcpProxiesRestStub> child,
      std::string api_client_header = "");

  google::cloud::future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncDeleteRegionTargetTcpProxy(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::region_target_tcp_proxies::v1::
          DeleteRegionTargetTcpProxyRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::TargetTcpProxy>
  GetRegionTargetTcpProxy(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::region_target_tcp_proxies::v1::
          GetRegionTargetTcpProxyRequest const& request) override;

  google::cloud::future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncInsertRegionTargetTcpProxy(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::region_target_tcp_proxies::v1::
          InsertRegionTargetTcpProxyRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::TargetTcpProxyList>
  ListRegionTargetTcpProxies(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::region_target_tcp_proxies::v1::
          ListRegionTargetTcpProxiesRequest const& request) override;

  google::cloud::future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::region_operations::v1::
          GetRegionOperationRequest const& request) override;

  google::cloud::future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::region_operations::v1::
          DeleteRegionOperationRequest const& request) override;

 private:
  void SetMetadata(rest_internal::RestContext& rest_context,
                   std::vector<std::string> const& params = {});

  std::shared_ptr<RegionTargetTcpProxiesRestStub> child_;
  std::string api_client_header_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_target_tcp_proxies_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_TARGET_TCP_PROXIES_V1_INTERNAL_REGION_TARGET_TCP_PROXIES_REST_METADATA_DECORATOR_H
