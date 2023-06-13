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
// source: google/cloud/compute/disk_types/v1/disk_types.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_DISK_TYPES_V1_DISK_TYPES_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_DISK_TYPES_V1_DISK_TYPES_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/internal/retry_policy.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/disk_types/v1/disk_types.grpc.pb.h>
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace compute_disk_types_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class DiskTypesConnectionIdempotencyPolicy {
 public:
  virtual ~DiskTypesConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<DiskTypesConnectionIdempotencyPolicy> clone() const;

  virtual google::cloud::Idempotency AggregatedListDiskTypes(
      google::cloud::cpp::compute::disk_types::v1::
          AggregatedListDiskTypesRequest const& request);

  virtual google::cloud::Idempotency GetDiskTypes(
      google::cloud::cpp::compute::disk_types::v1::GetDiskTypesRequest const&
          request);

  virtual google::cloud::Idempotency ListDiskTypes(
      google::cloud::cpp::compute::disk_types::v1::ListDiskTypesRequest
          request);
};

std::unique_ptr<DiskTypesConnectionIdempotencyPolicy>
MakeDefaultDiskTypesConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_disk_types_v1
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_DISK_TYPES_V1_DISK_TYPES_CONNECTION_IDEMPOTENCY_POLICY_H
