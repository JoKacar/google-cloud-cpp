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
// google/cloud/compute/region_instance_templates/v1/region_instance_templates.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_INSTANCE_TEMPLATES_V1_REGION_INSTANCE_TEMPLATES_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_INSTANCE_TEMPLATES_V1_REGION_INSTANCE_TEMPLATES_CONNECTION_H

#include "google/cloud/compute/region_instance_templates/v1/internal/region_instance_templates_retry_traits.h"
#include "google/cloud/compute/region_instance_templates/v1/region_instance_templates_connection_idempotency_policy.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/experimental_tag.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/region_instance_templates/v1/region_instance_templates.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace compute_region_instance_templates_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using RegionInstanceTemplatesRetryPolicy =
    ::google::cloud::internal::TraitBasedRetryPolicy<
        compute_region_instance_templates_v1_internal::
            RegionInstanceTemplatesRetryTraits>;

using RegionInstanceTemplatesLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        compute_region_instance_templates_v1_internal::
            RegionInstanceTemplatesRetryTraits>;

using RegionInstanceTemplatesLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        compute_region_instance_templates_v1_internal::
            RegionInstanceTemplatesRetryTraits>;

/**
 * The `RegionInstanceTemplatesConnection` object for
 * `RegionInstanceTemplatesClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `RegionInstanceTemplatesClient`. This allows users to inject custom
 * behavior (e.g., with a Google Mock object) when writing tests that use
 * objects of type `RegionInstanceTemplatesClient`.
 *
 * To create a concrete instance, see `MakeRegionInstanceTemplatesConnection()`.
 *
 * For mocking, see
 * `compute_region_instance_templates_v1_mocks::MockRegionInstanceTemplatesConnection`.
 */
class RegionInstanceTemplatesConnection {
 public:
  virtual ~RegionInstanceTemplatesConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteRegionInstanceTemplates(
      google::cloud::cpp::compute::region_instance_templates::v1::
          DeleteRegionInstanceTemplatesRequest const& request);

  virtual StatusOr<google::cloud::cpp::compute::v1::InstanceTemplate>
  GetRegionInstanceTemplates(
      google::cloud::cpp::compute::region_instance_templates::v1::
          GetRegionInstanceTemplatesRequest const& request);

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertRegionInstanceTemplates(
      google::cloud::cpp::compute::region_instance_templates::v1::
          InsertRegionInstanceTemplatesRequest const& request);

  virtual StreamRange<google::cloud::cpp::compute::v1::InstanceTemplate>
  ListRegionInstanceTemplates(
      google::cloud::cpp::compute::region_instance_templates::v1::
          ListRegionInstanceTemplatesRequest request);
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_instance_templates_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_INSTANCE_TEMPLATES_V1_REGION_INSTANCE_TEMPLATES_CONNECTION_H
