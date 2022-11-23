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
// source: google/cloud/compute/backend_services/v1/backend_services.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_BACKEND_SERVICES_V1_INTERNAL_BACKEND_SERVICES_REST_METADATA_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_BACKEND_SERVICES_V1_INTERNAL_BACKEND_SERVICES_REST_METADATA_DECORATOR_H

#include "google/cloud/compute/backend_services/v1/internal/backend_services_rest_stub.h"
#include "google/cloud/future.h"
#include "google/cloud/rest_options.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/backend_services/v1/backend_services.pb.h>
#include <google/cloud/compute/global_operations/v1/global_operations.pb.h>
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace compute_backend_services_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class BackendServicesRestMetadata : public BackendServicesRestStub {
 public:
  ~BackendServicesRestMetadata() override = default;
  explicit BackendServicesRestMetadata(
      std::shared_ptr<BackendServicesRestStub> child);

  google::cloud::future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncAddSignedUrlKey(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::backend_services::v1::
          AddSignedUrlKeyRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::BackendServiceAggregatedList>
  AggregatedListBackendServices(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::backend_services::v1::
          AggregatedListBackendServicesRequest const& request) override;

  google::cloud::future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncDeleteBackendServices(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::backend_services::v1::
          DeleteBackendServicesRequest const& request) override;

  google::cloud::future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncDeleteSignedUrlKey(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::backend_services::v1::
          DeleteSignedUrlKeyRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::BackendService> GetBackendServices(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::backend_services::v1::
          GetBackendServicesRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::BackendServiceGroupHealth>
  GetHealth(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::backend_services::v1::GetHealthRequest const&
          request) override;

  StatusOr<google::cloud::cpp::compute::v1::Policy> GetIamPolicy(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::backend_services::v1::
          GetIamPolicyRequest const& request) override;

  google::cloud::future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncInsertBackendServices(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::backend_services::v1::
          InsertBackendServicesRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::BackendServiceList>
  ListBackendServices(google::cloud::rest_internal::RestContext& rest_context,
                      google::cloud::cpp::compute::backend_services::v1::
                          ListBackendServicesRequest const& request) override;

  google::cloud::future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncPatchBackendServices(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::backend_services::v1::
          PatchBackendServicesRequest const& request) override;

  google::cloud::future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncSetEdgeSecurityPolicy(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::backend_services::v1::
          SetEdgeSecurityPolicyRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Policy> SetIamPolicy(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::backend_services::v1::
          SetIamPolicyRequest const& request) override;

  google::cloud::future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncSetSecurityPolicy(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::backend_services::v1::
          SetSecurityPolicyRequest const& request) override;

  google::cloud::future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncUpdateBackendServices(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::backend_services::v1::
          UpdateBackendServicesRequest const& request) override;

  google::cloud::future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::global_operations::v1::
          GetGlobalOperationsRequest const& request) override;

  google::cloud::future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::global_operations::v1::
          DeleteGlobalOperationsRequest const& request) override;

 private:
  void SetMetadata(rest_internal::RestContext& rest_context,
                   std::vector<std::string> const& params = {});

  std::shared_ptr<BackendServicesRestStub> child_;
  std::string api_client_header_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_backend_services_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_BACKEND_SERVICES_V1_INTERNAL_BACKEND_SERVICES_REST_METADATA_DECORATOR_H
