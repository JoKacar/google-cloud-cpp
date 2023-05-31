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

#include "google/cloud/compute/url_maps/v1/internal/url_maps_rest_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/absl_str_join_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/status_or.h"
#include "absl/strings/str_format.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_url_maps_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

UrlMapsRestMetadata::UrlMapsRestMetadata(std::shared_ptr<UrlMapsRestStub> child)
    : child_(std::move(child)),
      api_client_header_(
          google::cloud::internal::ApiClientHeader("generator")) {}

StatusOr<google::cloud::cpp::compute::v1::UrlMapsAggregatedList>
UrlMapsRestMetadata::AggregatedListUrlMaps(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::url_maps::v1::
        AggregatedListUrlMapsRequest const& request) {
  SetMetadata(rest_context);
  return child_->AggregatedListUrlMaps(rest_context, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
UrlMapsRestMetadata::AsyncDeleteUrlMaps(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::url_maps::v1::DeleteUrlMapsRequest const&
        request) {
  SetMetadata(*rest_context);
  return child_->AsyncDeleteUrlMaps(cq, std::move(rest_context), request);
}

StatusOr<google::cloud::cpp::compute::v1::UrlMap>
UrlMapsRestMetadata::GetUrlMaps(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::url_maps::v1::GetUrlMapsRequest const&
        request) {
  SetMetadata(rest_context);
  return child_->GetUrlMaps(rest_context, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
UrlMapsRestMetadata::AsyncInsertUrlMaps(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::url_maps::v1::InsertUrlMapsRequest const&
        request) {
  SetMetadata(*rest_context);
  return child_->AsyncInsertUrlMaps(cq, std::move(rest_context), request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
UrlMapsRestMetadata::AsyncInvalidateCache(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::url_maps::v1::InvalidateCacheRequest const&
        request) {
  SetMetadata(*rest_context);
  return child_->AsyncInvalidateCache(cq, std::move(rest_context), request);
}

StatusOr<google::cloud::cpp::compute::v1::UrlMapList>
UrlMapsRestMetadata::ListUrlMaps(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::url_maps::v1::ListUrlMapsRequest const&
        request) {
  SetMetadata(rest_context);
  return child_->ListUrlMaps(rest_context, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
UrlMapsRestMetadata::AsyncPatchUrlMaps(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::url_maps::v1::PatchUrlMapsRequest const&
        request) {
  SetMetadata(*rest_context);
  return child_->AsyncPatchUrlMaps(cq, std::move(rest_context), request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
UrlMapsRestMetadata::AsyncUpdateUrlMaps(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::url_maps::v1::UpdateUrlMapsRequest const&
        request) {
  SetMetadata(*rest_context);
  return child_->AsyncUpdateUrlMaps(cq, std::move(rest_context), request);
}

StatusOr<google::cloud::cpp::compute::v1::UrlMapsValidateResponse>
UrlMapsRestMetadata::Validate(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::url_maps::v1::ValidateRequest const& request) {
  SetMetadata(rest_context);
  return child_->Validate(rest_context, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
UrlMapsRestMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::global_operations::v1::
        GetGlobalOperationsRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncGetOperation(cq, std::move(rest_context), request);
}

future<Status> UrlMapsRestMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::global_operations::v1::
        DeleteGlobalOperationsRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncCancelOperation(cq, std::move(rest_context), request);
}

void UrlMapsRestMetadata::SetMetadata(rest_internal::RestContext& rest_context,
                                      std::vector<std::string> const& params) {
  rest_context.AddHeader("x-goog-api-client", api_client_header_);
  if (!params.empty()) {
    rest_context.AddHeader("x-goog-request-params", absl::StrJoin(params, "&"));
  }
  auto const& options = internal::CurrentOptions();
  if (options.has<UserProjectOption>()) {
    rest_context.AddHeader("x-goog-user-project",
                           options.get<UserProjectOption>());
  }
  if (options.has<google::cloud::QuotaUserOption>()) {
    rest_context.AddHeader("x-goog-quota-user",
                           options.get<google::cloud::QuotaUserOption>());
  }
  if (options.has<google::cloud::ServerTimeoutOption>()) {
    auto ms_rep = absl::StrCat(
        absl::Dec(options.get<google::cloud::ServerTimeoutOption>().count(),
                  absl::kZeroPad4));
    rest_context.AddHeader("x-server-timeout",
                           ms_rep.insert(ms_rep.size() - 3, "."));
  }
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_url_maps_v1_internal
}  // namespace cloud
}  // namespace google
