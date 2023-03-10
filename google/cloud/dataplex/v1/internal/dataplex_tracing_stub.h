// Copyright 2022 Google LLC
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
// source: google/cloud/dataplex/v1/service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPLEX_V1_INTERNAL_DATAPLEX_TRACING_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPLEX_V1_INTERNAL_DATAPLEX_TRACING_STUB_H

#include "google/cloud/dataplex/v1/internal/dataplex_stub.h"
#include "google/cloud/options.h"
#include "google/cloud/version.h"

namespace google {
namespace cloud {
namespace dataplex_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class DataplexServiceTracingStub : public DataplexServiceStub {
 public:
  ~DataplexServiceTracingStub() override = default;

  explicit DataplexServiceTracingStub(
      std::shared_ptr<DataplexServiceStub> child);

  future<StatusOr<google::longrunning::Operation>> AsyncCreateLake(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::dataplex::v1::CreateLakeRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateLake(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::dataplex::v1::UpdateLakeRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteLake(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::dataplex::v1::DeleteLakeRequest const& request) override;

  StatusOr<google::cloud::dataplex::v1::ListLakesResponse> ListLakes(
      grpc::ClientContext& context,
      google::cloud::dataplex::v1::ListLakesRequest const& request) override;

  StatusOr<google::cloud::dataplex::v1::Lake> GetLake(
      grpc::ClientContext& context,
      google::cloud::dataplex::v1::GetLakeRequest const& request) override;

  StatusOr<google::cloud::dataplex::v1::ListActionsResponse> ListLakeActions(
      grpc::ClientContext& context,
      google::cloud::dataplex::v1::ListLakeActionsRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateZone(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::dataplex::v1::CreateZoneRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateZone(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::dataplex::v1::UpdateZoneRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteZone(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::dataplex::v1::DeleteZoneRequest const& request) override;

  StatusOr<google::cloud::dataplex::v1::ListZonesResponse> ListZones(
      grpc::ClientContext& context,
      google::cloud::dataplex::v1::ListZonesRequest const& request) override;

  StatusOr<google::cloud::dataplex::v1::Zone> GetZone(
      grpc::ClientContext& context,
      google::cloud::dataplex::v1::GetZoneRequest const& request) override;

  StatusOr<google::cloud::dataplex::v1::ListActionsResponse> ListZoneActions(
      grpc::ClientContext& context,
      google::cloud::dataplex::v1::ListZoneActionsRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateAsset(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::dataplex::v1::CreateAssetRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateAsset(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::dataplex::v1::UpdateAssetRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteAsset(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::dataplex::v1::DeleteAssetRequest const& request) override;

  StatusOr<google::cloud::dataplex::v1::ListAssetsResponse> ListAssets(
      grpc::ClientContext& context,
      google::cloud::dataplex::v1::ListAssetsRequest const& request) override;

  StatusOr<google::cloud::dataplex::v1::Asset> GetAsset(
      grpc::ClientContext& context,
      google::cloud::dataplex::v1::GetAssetRequest const& request) override;

  StatusOr<google::cloud::dataplex::v1::ListActionsResponse> ListAssetActions(
      grpc::ClientContext& context,
      google::cloud::dataplex::v1::ListAssetActionsRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateTask(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::dataplex::v1::CreateTaskRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateTask(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::dataplex::v1::UpdateTaskRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteTask(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::dataplex::v1::DeleteTaskRequest const& request) override;

  StatusOr<google::cloud::dataplex::v1::ListTasksResponse> ListTasks(
      grpc::ClientContext& context,
      google::cloud::dataplex::v1::ListTasksRequest const& request) override;

  StatusOr<google::cloud::dataplex::v1::Task> GetTask(
      grpc::ClientContext& context,
      google::cloud::dataplex::v1::GetTaskRequest const& request) override;

  StatusOr<google::cloud::dataplex::v1::ListJobsResponse> ListJobs(
      grpc::ClientContext& context,
      google::cloud::dataplex::v1::ListJobsRequest const& request) override;

  StatusOr<google::cloud::dataplex::v1::Job> GetJob(
      grpc::ClientContext& context,
      google::cloud::dataplex::v1::GetJobRequest const& request) override;

  Status CancelJob(
      grpc::ClientContext& context,
      google::cloud::dataplex::v1::CancelJobRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateEnvironment(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::dataplex::v1::CreateEnvironmentRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateEnvironment(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::dataplex::v1::UpdateEnvironmentRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteEnvironment(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::dataplex::v1::DeleteEnvironmentRequest const& request)
      override;

  StatusOr<google::cloud::dataplex::v1::ListEnvironmentsResponse>
  ListEnvironments(grpc::ClientContext& context,
                   google::cloud::dataplex::v1::ListEnvironmentsRequest const&
                       request) override;

  StatusOr<google::cloud::dataplex::v1::Environment> GetEnvironment(
      grpc::ClientContext& context,
      google::cloud::dataplex::v1::GetEnvironmentRequest const& request)
      override;

  StatusOr<google::cloud::dataplex::v1::ListSessionsResponse> ListSessions(
      grpc::ClientContext& context,
      google::cloud::dataplex::v1::ListSessionsRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::shared_ptr<DataplexServiceStub> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Applies the tracing decorator to the given stub.
 *
 * The stub is only decorated if the library has been compiled with
 * OpenTelemetry.
 */
std::shared_ptr<DataplexServiceStub> MakeDataplexServiceTracingStub(
    std::shared_ptr<DataplexServiceStub> stub);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dataplex_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPLEX_V1_INTERNAL_DATAPLEX_TRACING_STUB_H
