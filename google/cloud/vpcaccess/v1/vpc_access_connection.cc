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
// source: google/cloud/vpcaccess/v1/vpc_access.proto

#include "google/cloud/vpcaccess/v1/vpc_access_connection.h"
#include "google/cloud/vpcaccess/v1/internal/vpc_access_connection_impl.h"
#include "google/cloud/vpcaccess/v1/internal/vpc_access_option_defaults.h"
#include "google/cloud/vpcaccess/v1/internal/vpc_access_stub_factory.h"
#include "google/cloud/vpcaccess/v1/internal/vpc_access_tracing_connection.h"
#include "google/cloud/vpcaccess/v1/vpc_access_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace vpcaccess_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

VpcAccessServiceConnection::~VpcAccessServiceConnection() = default;

future<StatusOr<google::cloud::vpcaccess::v1::Connector>>
VpcAccessServiceConnection::CreateConnector(
    google::cloud::vpcaccess::v1::CreateConnectorRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::vpcaccess::v1::Connector>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::vpcaccess::v1::Connector>
VpcAccessServiceConnection::GetConnector(
    google::cloud::vpcaccess::v1::GetConnectorRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::vpcaccess::v1::Connector>
VpcAccessServiceConnection::ListConnectors(
    google::cloud::vpcaccess::v1::
        ListConnectorsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::vpcaccess::v1::Connector>>();
}

future<StatusOr<google::cloud::vpcaccess::v1::OperationMetadata>>
VpcAccessServiceConnection::DeleteConnector(
    google::cloud::vpcaccess::v1::DeleteConnectorRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::vpcaccess::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

std::shared_ptr<VpcAccessServiceConnection> MakeVpcAccessServiceConnection(
    Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 UnifiedCredentialsOptionList,
                                 VpcAccessServicePolicyOptionList>(options,
                                                                   __func__);
  options =
      vpcaccess_v1_internal::VpcAccessServiceDefaultOptions(std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto stub = vpcaccess_v1_internal::CreateDefaultVpcAccessServiceStub(
      background->cq(), options);
  return vpcaccess_v1_internal::MakeVpcAccessServiceTracingConnection(
      std::make_shared<vpcaccess_v1_internal::VpcAccessServiceConnectionImpl>(
          std::move(background), std::move(stub), std::move(options)));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace vpcaccess_v1
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
