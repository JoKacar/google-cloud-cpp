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
// source: google/cloud/ids/v1/ids.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_IDS_V1_INTERNAL_IDS_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_IDS_V1_INTERNAL_IDS_STUB_H

#include "google/cloud/completion_queue.h"
#include "google/cloud/future.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/cloud/ids/v1/ids.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace ids_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class IDSStub {
 public:
  virtual ~IDSStub() = 0;

  virtual StatusOr<google::cloud::ids::v1::ListEndpointsResponse> ListEndpoints(
      grpc::ClientContext& context,
      google::cloud::ids::v1::ListEndpointsRequest const& request) = 0;

  virtual StatusOr<google::cloud::ids::v1::Endpoint> GetEndpoint(
      grpc::ClientContext& context,
      google::cloud::ids::v1::GetEndpointRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncCreateEndpoint(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::ids::v1::CreateEndpointRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncDeleteEndpoint(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::ids::v1::DeleteEndpointRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::longrunning::GetOperationRequest const& request) = 0;

  virtual future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::longrunning::CancelOperationRequest const& request) = 0;
};

class DefaultIDSStub : public IDSStub {
 public:
  DefaultIDSStub(
      std::unique_ptr<google::cloud::ids::v1::IDS::StubInterface> grpc_stub,
      std::unique_ptr<google::longrunning::Operations::StubInterface>
          operations)
      : grpc_stub_(std::move(grpc_stub)), operations_(std::move(operations)) {}

  StatusOr<google::cloud::ids::v1::ListEndpointsResponse> ListEndpoints(
      grpc::ClientContext& client_context,
      google::cloud::ids::v1::ListEndpointsRequest const& request) override;

  StatusOr<google::cloud::ids::v1::Endpoint> GetEndpoint(
      grpc::ClientContext& client_context,
      google::cloud::ids::v1::GetEndpointRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateEndpoint(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::ids::v1::CreateEndpointRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteEndpoint(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::ids::v1::DeleteEndpointRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::unique_ptr<google::cloud::ids::v1::IDS::StubInterface> grpc_stub_;
  std::unique_ptr<google::longrunning::Operations::StubInterface> operations_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace ids_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_IDS_V1_INTERNAL_IDS_STUB_H
