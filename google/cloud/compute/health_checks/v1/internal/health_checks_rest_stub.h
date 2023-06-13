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
// source: google/cloud/compute/health_checks/v1/health_checks.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_HEALTH_CHECKS_V1_INTERNAL_HEALTH_CHECKS_REST_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_HEALTH_CHECKS_V1_INTERNAL_HEALTH_CHECKS_REST_STUB_H

#include "google/cloud/completion_queue.h"
#include "google/cloud/internal/rest_client.h"
#include "google/cloud/internal/rest_context.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/global_operations/v1/global_operations.pb.h>
#include <google/cloud/compute/health_checks/v1/health_checks.pb.h>
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace compute_health_checks_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class HealthChecksRestStub {
 public:
  virtual ~HealthChecksRestStub() = default;

  virtual StatusOr<google::cloud::cpp::compute::v1::HealthChecksAggregatedList>
  AggregatedListHealthChecks(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::health_checks::v1::
          AggregatedListHealthChecksRequest const& request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncDeleteHealthChecks(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::health_checks::v1::
          DeleteHealthChecksRequest const& request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::HealthCheck>
  GetHealthChecks(google::cloud::rest_internal::RestContext& rest_context,
                  google::cloud::cpp::compute::health_checks::v1::
                      GetHealthChecksRequest const& request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncInsertHealthChecks(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::health_checks::v1::
          InsertHealthChecksRequest const& request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::HealthCheckList>
  ListHealthChecks(google::cloud::rest_internal::RestContext& rest_context,
                   google::cloud::cpp::compute::health_checks::v1::
                       ListHealthChecksRequest const& request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncPatchHealthChecks(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::health_checks::v1::
          PatchHealthChecksRequest const& request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncUpdateHealthChecks(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::health_checks::v1::
          UpdateHealthChecksRequest const& request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::global_operations::v1::
          GetGlobalOperationsRequest const& request) = 0;

  virtual future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::global_operations::v1::
          DeleteGlobalOperationsRequest const& request) = 0;
};

class DefaultHealthChecksRestStub : public HealthChecksRestStub {
 public:
  ~DefaultHealthChecksRestStub() override = default;

  explicit DefaultHealthChecksRestStub(Options options);
  DefaultHealthChecksRestStub(
      std::shared_ptr<rest_internal::RestClient> service,
      std::shared_ptr<rest_internal::RestClient> operations, Options options);

  StatusOr<google::cloud::cpp::compute::v1::HealthChecksAggregatedList>
  AggregatedListHealthChecks(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::health_checks::v1::
          AggregatedListHealthChecksRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncDeleteHealthChecks(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::health_checks::v1::
          DeleteHealthChecksRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::HealthCheck> GetHealthChecks(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::health_checks::v1::
          GetHealthChecksRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncInsertHealthChecks(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::health_checks::v1::
          InsertHealthChecksRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::HealthCheckList> ListHealthChecks(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::health_checks::v1::
          ListHealthChecksRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncPatchHealthChecks(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::health_checks::v1::
          PatchHealthChecksRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncUpdateHealthChecks(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::health_checks::v1::
          UpdateHealthChecksRequest const& request) override;

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
  std::shared_ptr<rest_internal::RestClient> service_;
  std::shared_ptr<rest_internal::RestClient> operations_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_health_checks_v1_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_HEALTH_CHECKS_V1_INTERNAL_HEALTH_CHECKS_REST_STUB_H
