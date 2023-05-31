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
// source: google/cloud/compute/projects/v1/projects.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_PROJECTS_V1_PROJECTS_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_PROJECTS_V1_PROJECTS_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/internal/retry_policy.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/projects/v1/projects.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace compute_projects_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class ProjectsConnectionIdempotencyPolicy {
 public:
  virtual ~ProjectsConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<ProjectsConnectionIdempotencyPolicy> clone() const;

  virtual google::cloud::Idempotency
  DisableXpnHost(google::cloud::cpp::compute::projects::v1::DisableXpnHostRequest const& request);

  virtual google::cloud::Idempotency
  DisableXpnResource(google::cloud::cpp::compute::projects::v1::DisableXpnResourceRequest const& request);

  virtual google::cloud::Idempotency
  EnableXpnHost(google::cloud::cpp::compute::projects::v1::EnableXpnHostRequest const& request);

  virtual google::cloud::Idempotency
  EnableXpnResource(google::cloud::cpp::compute::projects::v1::EnableXpnResourceRequest const& request);

  virtual google::cloud::Idempotency
  GetProjects(google::cloud::cpp::compute::projects::v1::GetProjectsRequest const& request);

  virtual google::cloud::Idempotency
  GetXpnHost(google::cloud::cpp::compute::projects::v1::GetXpnHostRequest const& request);

  virtual google::cloud::Idempotency
  GetXpnResources(google::cloud::cpp::compute::projects::v1::GetXpnResourcesRequest const& request);

  virtual google::cloud::Idempotency
  ListXpnHosts(google::cloud::cpp::compute::projects::v1::ListXpnHostsRequest request);

  virtual google::cloud::Idempotency
  MoveDisk(google::cloud::cpp::compute::projects::v1::MoveDiskRequest const& request);

  virtual google::cloud::Idempotency
  MoveInstance(google::cloud::cpp::compute::projects::v1::MoveInstanceRequest const& request);

  virtual google::cloud::Idempotency
  SetCommonInstanceMetadata(google::cloud::cpp::compute::projects::v1::SetCommonInstanceMetadataRequest const& request);

  virtual google::cloud::Idempotency
  SetDefaultNetworkTier(google::cloud::cpp::compute::projects::v1::SetDefaultNetworkTierRequest const& request);

  virtual google::cloud::Idempotency
  SetUsageExportBucket(google::cloud::cpp::compute::projects::v1::SetUsageExportBucketRequest const& request);
};

std::unique_ptr<ProjectsConnectionIdempotencyPolicy>
    MakeDefaultProjectsConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_projects_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_PROJECTS_V1_PROJECTS_CONNECTION_IDEMPOTENCY_POLICY_H
