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
// source: google/cloud/dialogflow/v2/knowledge_base.proto

#include "google/cloud/dialogflow_es/internal/knowledge_bases_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/cloud/dialogflow/v2/knowledge_base.grpc.pb.h>
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace dialogflow_es_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

KnowledgeBasesStub::~KnowledgeBasesStub() = default;

StatusOr<google::cloud::dialogflow::v2::ListKnowledgeBasesResponse>
DefaultKnowledgeBasesStub::ListKnowledgeBases(
    grpc::ClientContext& client_context,
    google::cloud::dialogflow::v2::ListKnowledgeBasesRequest const& request) {
  google::cloud::dialogflow::v2::ListKnowledgeBasesResponse response;
  auto status =
      grpc_stub_->ListKnowledgeBases(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::dialogflow::v2::KnowledgeBase>
DefaultKnowledgeBasesStub::GetKnowledgeBase(
    grpc::ClientContext& client_context,
    google::cloud::dialogflow::v2::GetKnowledgeBaseRequest const& request) {
  google::cloud::dialogflow::v2::KnowledgeBase response;
  auto status =
      grpc_stub_->GetKnowledgeBase(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::dialogflow::v2::KnowledgeBase>
DefaultKnowledgeBasesStub::CreateKnowledgeBase(
    grpc::ClientContext& client_context,
    google::cloud::dialogflow::v2::CreateKnowledgeBaseRequest const& request) {
  google::cloud::dialogflow::v2::KnowledgeBase response;
  auto status =
      grpc_stub_->CreateKnowledgeBase(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultKnowledgeBasesStub::DeleteKnowledgeBase(
    grpc::ClientContext& client_context,
    google::cloud::dialogflow::v2::DeleteKnowledgeBaseRequest const& request) {
  google::protobuf::Empty response;
  auto status =
      grpc_stub_->DeleteKnowledgeBase(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

StatusOr<google::cloud::dialogflow::v2::KnowledgeBase>
DefaultKnowledgeBasesStub::UpdateKnowledgeBase(
    grpc::ClientContext& client_context,
    google::cloud::dialogflow::v2::UpdateKnowledgeBaseRequest const& request) {
  google::cloud::dialogflow::v2::KnowledgeBase response;
  auto status =
      grpc_stub_->UpdateKnowledgeBase(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
