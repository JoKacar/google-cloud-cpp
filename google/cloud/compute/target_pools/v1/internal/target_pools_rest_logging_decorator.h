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
// source: google/cloud/compute/target_pools/v1/target_pools.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_TARGET_POOLS_V1_INTERNAL_TARGET_POOLS_REST_LOGGING_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_TARGET_POOLS_V1_INTERNAL_TARGET_POOLS_REST_LOGGING_DECORATOR_H

#include "google/cloud/compute/target_pools/v1/internal/target_pools_rest_stub.h"
#include "google/cloud/future.h"
#include "google/cloud/internal/rest_context.h"
#include "google/cloud/tracing_options.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/region_operations/v1/region_operations.pb.h>
#include <google/cloud/compute/target_pools/v1/target_pools.pb.h>
#include <memory>
#include <set>
#include <string>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace compute_target_pools_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class TargetPoolsRestLogging : public TargetPoolsRestStub {
 public:
  ~TargetPoolsRestLogging() override = default;
  TargetPoolsRestLogging(std::shared_ptr<TargetPoolsRestStub> child,
                         TracingOptions tracing_options,
                         std::set<std::string> components);

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncAddHealthCheck(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::target_pools::v1::
          AddHealthCheckRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> AsyncAddInstance(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::target_pools::v1::AddInstanceRequest const&
          request) override;

  StatusOr<google::cloud::cpp::compute::v1::TargetPoolAggregatedList>
  AggregatedListTargetPools(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::target_pools::v1::
          AggregatedListTargetPoolsRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncDeleteTargetPools(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::target_pools::v1::
          DeleteTargetPoolsRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::TargetPool> GetTargetPools(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::target_pools::v1::
          GetTargetPoolsRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::TargetPoolInstanceHealth> GetHealth(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::target_pools::v1::GetHealthRequest const&
          request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncInsertTargetPools(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::target_pools::v1::
          InsertTargetPoolsRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::TargetPoolList> ListTargetPools(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::target_pools::v1::
          ListTargetPoolsRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncRemoveHealthCheck(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::target_pools::v1::
          RemoveHealthCheckRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncRemoveInstance(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::target_pools::v1::
          RemoveInstanceRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> AsyncSetBackup(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::target_pools::v1::SetBackupRequest const&
          request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::region_operations::v1::
          GetRegionOperationsRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::region_operations::v1::
          DeleteRegionOperationsRequest const& request) override;

 private:
  std::shared_ptr<TargetPoolsRestStub> child_;
  TracingOptions tracing_options_;
  std::set<std::string> components_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_target_pools_v1_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_TARGET_POOLS_V1_INTERNAL_TARGET_POOLS_REST_LOGGING_DECORATOR_H
