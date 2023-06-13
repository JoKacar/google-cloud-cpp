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
// source: google/cloud/compute/network_attachments/v1/network_attachments.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_NETWORK_ATTACHMENTS_V1_INTERNAL_NETWORK_ATTACHMENTS_REST_METADATA_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_NETWORK_ATTACHMENTS_V1_INTERNAL_NETWORK_ATTACHMENTS_REST_METADATA_DECORATOR_H

#include "google/cloud/compute/network_attachments/v1/internal/network_attachments_rest_stub.h"
#include "google/cloud/future.h"
#include "google/cloud/rest_options.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/network_attachments/v1/network_attachments.pb.h>
#include <google/cloud/compute/region_operations/v1/region_operations.pb.h>
#include <memory>
#include <string>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace compute_network_attachments_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class NetworkAttachmentsRestMetadata : public NetworkAttachmentsRestStub {
 public:
  ~NetworkAttachmentsRestMetadata() override = default;
  explicit NetworkAttachmentsRestMetadata(
      std::shared_ptr<NetworkAttachmentsRestStub> child);

  StatusOr<google::cloud::cpp::compute::v1::NetworkAttachmentAggregatedList>
  AggregatedListNetworkAttachments(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::network_attachments::v1::
          AggregatedListNetworkAttachmentsRequest const& request) override;

  google::cloud::future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncDeleteNetworkAttachments(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::network_attachments::v1::
          DeleteNetworkAttachmentsRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::NetworkAttachment>
  GetNetworkAttachments(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::network_attachments::v1::
          GetNetworkAttachmentsRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Policy> GetIamPolicy(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::network_attachments::v1::
          GetIamPolicyRequest const& request) override;

  google::cloud::future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncInsertNetworkAttachments(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::network_attachments::v1::
          InsertNetworkAttachmentsRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::NetworkAttachmentList>
  ListNetworkAttachments(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::network_attachments::v1::
          ListNetworkAttachmentsRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Policy> SetIamPolicy(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::network_attachments::v1::
          SetIamPolicyRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
  TestIamPermissions(google::cloud::rest_internal::RestContext& rest_context,
                     google::cloud::cpp::compute::network_attachments::v1::
                         TestIamPermissionsRequest const& request) override;

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

  std::shared_ptr<NetworkAttachmentsRestStub> child_;
  std::string api_client_header_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_network_attachments_v1_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_NETWORK_ATTACHMENTS_V1_INTERNAL_NETWORK_ATTACHMENTS_REST_METADATA_DECORATOR_H
