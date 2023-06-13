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
// source: google/cloud/compute/service_attachments/v1/service_attachments.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_SERVICE_ATTACHMENTS_V1_INTERNAL_SERVICE_ATTACHMENTS_REST_METADATA_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_SERVICE_ATTACHMENTS_V1_INTERNAL_SERVICE_ATTACHMENTS_REST_METADATA_DECORATOR_H

#include "google/cloud/compute/service_attachments/v1/internal/service_attachments_rest_stub.h"
#include "google/cloud/future.h"
#include "google/cloud/rest_options.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/region_operations/v1/region_operations.pb.h>
#include <google/cloud/compute/service_attachments/v1/service_attachments.pb.h>
#include <memory>
#include <string>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace compute_service_attachments_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class ServiceAttachmentsRestMetadata : public ServiceAttachmentsRestStub {
 public:
  ~ServiceAttachmentsRestMetadata() override = default;
  explicit ServiceAttachmentsRestMetadata(
      std::shared_ptr<ServiceAttachmentsRestStub> child);

  StatusOr<google::cloud::cpp::compute::v1::ServiceAttachmentAggregatedList>
  AggregatedListServiceAttachments(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::service_attachments::v1::
          AggregatedListServiceAttachmentsRequest const& request) override;

  google::cloud::future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncDeleteServiceAttachments(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::service_attachments::v1::
          DeleteServiceAttachmentsRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::ServiceAttachment>
  GetServiceAttachments(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::service_attachments::v1::
          GetServiceAttachmentsRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Policy> GetIamPolicy(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::service_attachments::v1::
          GetIamPolicyRequest const& request) override;

  google::cloud::future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncInsertServiceAttachments(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::service_attachments::v1::
          InsertServiceAttachmentsRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::ServiceAttachmentList>
  ListServiceAttachments(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::service_attachments::v1::
          ListServiceAttachmentsRequest const& request) override;

  google::cloud::future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncPatchServiceAttachments(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::service_attachments::v1::
          PatchServiceAttachmentsRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Policy> SetIamPolicy(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::service_attachments::v1::
          SetIamPolicyRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
  TestIamPermissions(google::cloud::rest_internal::RestContext& rest_context,
                     google::cloud::cpp::compute::service_attachments::v1::
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

  std::shared_ptr<ServiceAttachmentsRestStub> child_;
  std::string api_client_header_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_service_attachments_v1_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_SERVICE_ATTACHMENTS_V1_INTERNAL_SERVICE_ATTACHMENTS_REST_METADATA_DECORATOR_H
