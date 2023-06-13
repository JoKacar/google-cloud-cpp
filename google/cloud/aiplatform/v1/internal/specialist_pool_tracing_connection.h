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
// source: google/cloud/aiplatform/v1/specialist_pool_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_INTERNAL_SPECIALIST_POOL_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_INTERNAL_SPECIALIST_POOL_TRACING_CONNECTION_H

#include "google/cloud/aiplatform/v1/specialist_pool_connection.h"
#include "google/cloud/version.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace aiplatform_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class SpecialistPoolServiceTracingConnection
    : public aiplatform_v1::SpecialistPoolServiceConnection {
 public:
  ~SpecialistPoolServiceTracingConnection() override = default;

  explicit SpecialistPoolServiceTracingConnection(
      std::shared_ptr<aiplatform_v1::SpecialistPoolServiceConnection> child);

  Options options() override { return child_->options(); }

  future<StatusOr<google::cloud::aiplatform::v1::SpecialistPool>>
  CreateSpecialistPool(
      google::cloud::aiplatform::v1::CreateSpecialistPoolRequest const& request)
      override;

  StatusOr<google::cloud::aiplatform::v1::SpecialistPool> GetSpecialistPool(
      google::cloud::aiplatform::v1::GetSpecialistPoolRequest const& request)
      override;

  StreamRange<google::cloud::aiplatform::v1::SpecialistPool>
  ListSpecialistPools(google::cloud::aiplatform::v1::ListSpecialistPoolsRequest
                          request) override;

  future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
  DeleteSpecialistPool(
      google::cloud::aiplatform::v1::DeleteSpecialistPoolRequest const& request)
      override;

  future<StatusOr<google::cloud::aiplatform::v1::SpecialistPool>>
  UpdateSpecialistPool(
      google::cloud::aiplatform::v1::UpdateSpecialistPoolRequest const& request)
      override;

 private:
  std::shared_ptr<aiplatform_v1::SpecialistPoolServiceConnection> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Conditionally applies the tracing decorator to the given connection.
 *
 * The connection is only decorated if tracing is enabled (as determined by the
 * connection's options).
 */
std::shared_ptr<aiplatform_v1::SpecialistPoolServiceConnection>
MakeSpecialistPoolServiceTracingConnection(
    std::shared_ptr<aiplatform_v1::SpecialistPoolServiceConnection> conn);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_INTERNAL_SPECIALIST_POOL_TRACING_CONNECTION_H
