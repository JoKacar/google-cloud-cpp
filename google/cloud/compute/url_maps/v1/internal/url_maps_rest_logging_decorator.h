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
// source: google/cloud/compute/url_maps/v1/url_maps.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_URL_MAPS_V1_INTERNAL_URL_MAPS_REST_LOGGING_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_URL_MAPS_V1_INTERNAL_URL_MAPS_REST_LOGGING_DECORATOR_H

#include "google/cloud/compute/url_maps/v1/internal/url_maps_rest_stub.h"
#include "google/cloud/future.h"
#include "google/cloud/internal/rest_context.h"
#include "google/cloud/tracing_options.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/global_operations/v1/global_operations.pb.h>
#include <google/cloud/compute/url_maps/v1/url_maps.pb.h>
#include <memory>
#include <set>
#include <string>

namespace google {
namespace cloud {
namespace compute_url_maps_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class UrlMapsRestLogging : public UrlMapsRestStub {
 public:
  ~UrlMapsRestLogging() override = default;
  UrlMapsRestLogging(std::shared_ptr<UrlMapsRestStub> child,
                     TracingOptions tracing_options,
                     std::set<std::string> components);

  StatusOr<google::cloud::cpp::compute::v1::UrlMapsAggregatedList>
  AggregatedListUrlMaps(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::url_maps::v1::
          AggregatedListUrlMapsRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncDeleteUrlMaps(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::url_maps::v1::DeleteUrlMapsRequest const&
          request) override;

  StatusOr<google::cloud::cpp::compute::v1::UrlMap> GetUrlMaps(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::url_maps::v1::GetUrlMapsRequest const&
          request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncInsertUrlMaps(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::url_maps::v1::InsertUrlMapsRequest const&
          request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncInvalidateCache(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::url_maps::v1::InvalidateCacheRequest const&
          request) override;

  StatusOr<google::cloud::cpp::compute::v1::UrlMapList> ListUrlMaps(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::url_maps::v1::ListUrlMapsRequest const&
          request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncPatchUrlMaps(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::url_maps::v1::PatchUrlMapsRequest const&
          request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncUpdateUrlMaps(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::url_maps::v1::UpdateUrlMapsRequest const&
          request) override;

  StatusOr<google::cloud::cpp::compute::v1::UrlMapsValidateResponse> Validate(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::url_maps::v1::ValidateRequest const& request)
      override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::global_operations::v1::
          GetGlobalOperationsRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::global_operations::v1::
          DeleteGlobalOperationsRequest const& request) override;

 private:
  std::shared_ptr<UrlMapsRestStub> child_;
  TracingOptions tracing_options_;
  std::set<std::string> components_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_url_maps_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_URL_MAPS_V1_INTERNAL_URL_MAPS_REST_LOGGING_DECORATOR_H
