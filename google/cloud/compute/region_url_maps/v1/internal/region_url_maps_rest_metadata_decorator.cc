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
// source: google/cloud/compute/region_url_maps/v1/region_url_maps.proto


#include "google/cloud/compute/region_url_maps/v1/internal/region_url_maps_rest_metadata_decorator.h"
#include "absl/strings/str_format.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/absl_str_join_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/status_or.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_region_url_maps_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

RegionUrlMapsRestMetadata::RegionUrlMapsRestMetadata(
    std::shared_ptr<RegionUrlMapsRestStub> child)
    : child_(std::move(child)),
      api_client_header_(google::cloud::internal::ApiClientHeader("generator")) {}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionUrlMapsRestMetadata::AsyncDeleteRegionUrlMaps(
      CompletionQueue& cq,
      std::unique_ptr<rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::region_url_maps::v1::DeleteRegionUrlMapsRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncDeleteRegionUrlMaps(cq, std::move(rest_context), request);
}

StatusOr<google::cloud::cpp::compute::v1::UrlMap>
RegionUrlMapsRestMetadata::GetRegionUrlMaps(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::region_url_maps::v1::GetRegionUrlMapsRequest const& request) {
  SetMetadata(rest_context);
  return child_->GetRegionUrlMaps(rest_context, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionUrlMapsRestMetadata::AsyncInsertRegionUrlMaps(
      CompletionQueue& cq,
      std::unique_ptr<rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::region_url_maps::v1::InsertRegionUrlMapsRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncInsertRegionUrlMaps(cq, std::move(rest_context), request);
}

StatusOr<google::cloud::cpp::compute::v1::UrlMapList>
RegionUrlMapsRestMetadata::ListRegionUrlMaps(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::region_url_maps::v1::ListRegionUrlMapsRequest const& request) {
  SetMetadata(rest_context);
  return child_->ListRegionUrlMaps(rest_context, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionUrlMapsRestMetadata::AsyncPatchRegionUrlMaps(
      CompletionQueue& cq,
      std::unique_ptr<rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::region_url_maps::v1::PatchRegionUrlMapsRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncPatchRegionUrlMaps(cq, std::move(rest_context), request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionUrlMapsRestMetadata::AsyncUpdateRegionUrlMaps(
      CompletionQueue& cq,
      std::unique_ptr<rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::region_url_maps::v1::UpdateRegionUrlMapsRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncUpdateRegionUrlMaps(cq, std::move(rest_context), request);
}

StatusOr<google::cloud::cpp::compute::v1::UrlMapsValidateResponse>
RegionUrlMapsRestMetadata::Validate(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::region_url_maps::v1::ValidateRequest const& request) {
  SetMetadata(rest_context);
  return child_->Validate(rest_context, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
RegionUrlMapsRestMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::region_operations::v1::GetRegionOperationsRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncGetOperation(cq, std::move(rest_context), request);
}

future<Status>
RegionUrlMapsRestMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::region_operations::v1::DeleteRegionOperationsRequest const& request) {
  SetMetadata(*rest_context);
  return child_->AsyncCancelOperation(cq, std::move(rest_context), request);
}

void RegionUrlMapsRestMetadata::SetMetadata(
      rest_internal::RestContext& rest_context,
      std::vector<std::string> const& params) {
  rest_context.AddHeader("x-goog-api-client", api_client_header_);
  if (!params.empty()) {
    rest_context.AddHeader("x-goog-request-params", absl::StrJoin(params, "&"));
  }
  auto const& options = internal::CurrentOptions();
  if (options.has<UserProjectOption>()) {
    rest_context.AddHeader(
        "x-goog-user-project", options.get<UserProjectOption>());
  }
  if (options.has<google::cloud::QuotaUserOption>()) {
    rest_context.AddHeader(
        "x-goog-quota-user", options.get<google::cloud::QuotaUserOption>());
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
}  // namespace compute_region_url_maps_v1_internal
}  // namespace cloud
}  // namespace google
