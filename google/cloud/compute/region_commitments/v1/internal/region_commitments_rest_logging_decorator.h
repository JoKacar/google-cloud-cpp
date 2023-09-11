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
// source: google/cloud/compute/region_commitments/v1/region_commitments.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_COMMITMENTS_V1_INTERNAL_REGION_COMMITMENTS_REST_LOGGING_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_COMMITMENTS_V1_INTERNAL_REGION_COMMITMENTS_REST_LOGGING_DECORATOR_H

#include "google/cloud/compute/region_commitments/v1/internal/region_commitments_rest_stub.h"
#include "google/cloud/future.h"
#include "google/cloud/internal/rest_context.h"
#include "google/cloud/tracing_options.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/region_commitments/v1/region_commitments.pb.h>
#include <google/cloud/compute/region_operations/v1/region_operations.pb.h>
#include <memory>
#include <set>
#include <string>

namespace google {
namespace cloud {
namespace compute_region_commitments_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class RegionCommitmentsRestLogging : public RegionCommitmentsRestStub {
 public:
  ~RegionCommitmentsRestLogging() override = default;
  RegionCommitmentsRestLogging(std::shared_ptr<RegionCommitmentsRestStub> child,
                               TracingOptions tracing_options,
                               std::set<std::string> components);

  StatusOr<google::cloud::cpp::compute::v1::CommitmentAggregatedList>
  AggregatedListRegionCommitments(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::region_commitments::v1::
          AggregatedListRegionCommitmentsRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Commitment> GetCommitment(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::region_commitments::v1::
          GetCommitmentRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncInsertCommitment(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::region_commitments::v1::
          InsertCommitmentRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::CommitmentList>
  ListRegionCommitments(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::region_commitments::v1::
          ListRegionCommitmentsRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncUpdateCommitment(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::region_commitments::v1::
          UpdateCommitmentRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::region_operations::v1::
          GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::region_operations::v1::
          DeleteOperationRequest const& request) override;

 private:
  std::shared_ptr<RegionCommitmentsRestStub> child_;
  TracingOptions tracing_options_;
  std::set<std::string> components_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_commitments_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_COMMITMENTS_V1_INTERNAL_REGION_COMMITMENTS_REST_LOGGING_DECORATOR_H
