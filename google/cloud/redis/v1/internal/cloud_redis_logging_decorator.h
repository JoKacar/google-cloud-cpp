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
// source: google/cloud/redis/v1/cloud_redis.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_REDIS_V1_INTERNAL_CLOUD_REDIS_LOGGING_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_REDIS_V1_INTERNAL_CLOUD_REDIS_LOGGING_DECORATOR_H

#include "google/cloud/redis/v1/internal/cloud_redis_stub.h"
#include "google/cloud/tracing_options.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <set>
#include <string>

namespace google {
namespace cloud {
namespace redis_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class CloudRedisLogging : public CloudRedisStub {
 public:
  ~CloudRedisLogging() override = default;
  CloudRedisLogging(std::shared_ptr<CloudRedisStub> child,
                    TracingOptions tracing_options,
                    std::set<std::string> components);

  StatusOr<google::cloud::redis::v1::ListInstancesResponse> ListInstances(
      grpc::ClientContext& context,
      google::cloud::redis::v1::ListInstancesRequest const& request) override;

  StatusOr<google::cloud::redis::v1::Instance> GetInstance(
      grpc::ClientContext& context,
      google::cloud::redis::v1::GetInstanceRequest const& request) override;

  StatusOr<google::cloud::redis::v1::InstanceAuthString> GetInstanceAuthString(
      grpc::ClientContext& context,
      google::cloud::redis::v1::GetInstanceAuthStringRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateInstance(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::redis::v1::CreateInstanceRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateInstance(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::redis::v1::UpdateInstanceRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpgradeInstance(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::redis::v1::UpgradeInstanceRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncImportInstance(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::redis::v1::ImportInstanceRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncExportInstance(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::redis::v1::ExportInstanceRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncFailoverInstance(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::redis::v1::FailoverInstanceRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteInstance(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::redis::v1::DeleteInstanceRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncRescheduleMaintenance(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::redis::v1::RescheduleMaintenanceRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::shared_ptr<CloudRedisStub> child_;
  TracingOptions tracing_options_;
  std::set<std::string> components_;
};  // CloudRedisLogging

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace redis_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_REDIS_V1_INTERNAL_CLOUD_REDIS_LOGGING_DECORATOR_H
