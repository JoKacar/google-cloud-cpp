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
// source: google/cloud/compute/license_codes/v1/license_codes.proto

#include "google/cloud/compute/license_codes/v1/internal/license_codes_rest_stub.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/rest_stub_helpers.h"
#include "google/cloud/status_or.h"
#include <google/cloud/compute/license_codes/v1/license_codes.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace compute_license_codes_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DefaultLicenseCodesRestStub::DefaultLicenseCodesRestStub(Options options)
    : service_(rest_internal::MakePooledRestClient(
          options.get<EndpointOption>(), options)),
      options_(std::move(options)) {}

DefaultLicenseCodesRestStub::DefaultLicenseCodesRestStub(
    std::shared_ptr<rest_internal::RestClient> service, Options options)
    : service_(std::move(service)), options_(std::move(options)) {}

StatusOr<google::cloud::cpp::compute::v1::LicenseCode>
DefaultLicenseCodesRestStub::GetLicenseCode(
    google::cloud::rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::license_codes::v1::GetLicenseCodeRequest const&
        request) {
  auto const& opts = internal::CurrentOptions();
  return rest_internal::Get<google::cloud::cpp::compute::v1::LicenseCode>(
      *service_, rest_context, request, false,
      absl::StrCat("/", "compute", "/",
                   rest_internal::DetermineApiVersion("v1", opts), "/",
                   "projects", "/", request.project(), "/", "global", "/",
                   "licenseCodes", "/", request.license_code()));
}

StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
DefaultLicenseCodesRestStub::TestIamPermissions(
    google::cloud::rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::license_codes::v1::
        TestIamPermissionsRequest const& request) {
  auto const& opts = internal::CurrentOptions();
  return rest_internal::Post<
      google::cloud::cpp::compute::v1::TestPermissionsResponse>(
      *service_, rest_context, request.test_permissions_request_resource(),
      false,
      absl::StrCat(
          "/", "compute", "/", rest_internal::DetermineApiVersion("v1", opts),
          "/", "projects", "/", request.project(), "/", "global", "/",
          "licenseCodes", "/", request.resource(), "/", "testIamPermissions"));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_license_codes_v1_internal
}  // namespace cloud
}  // namespace google
