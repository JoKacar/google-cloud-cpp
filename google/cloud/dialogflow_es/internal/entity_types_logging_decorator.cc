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
// source: google/cloud/dialogflow/v2/entity_type.proto

#include "google/cloud/dialogflow_es/internal/entity_types_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <google/cloud/dialogflow/v2/entity_type.grpc.pb.h>
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace dialogflow_es_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

EntityTypesLogging::EntityTypesLogging(std::shared_ptr<EntityTypesStub> child,
                                       TracingOptions tracing_options,
                                       std::set<std::string> components)
    : child_(std::move(child)),
      tracing_options_(std::move(tracing_options)),
      components_(std::move(components)) {}

StatusOr<google::cloud::dialogflow::v2::ListEntityTypesResponse>
EntityTypesLogging::ListEntityTypes(
    grpc::ClientContext& context,
    google::cloud::dialogflow::v2::ListEntityTypesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::dialogflow::v2::ListEntityTypesRequest const&
                 request) { return child_->ListEntityTypes(context, request); },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::dialogflow::v2::EntityType>
EntityTypesLogging::GetEntityType(
    grpc::ClientContext& context,
    google::cloud::dialogflow::v2::GetEntityTypeRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context,
          google::cloud::dialogflow::v2::GetEntityTypeRequest const& request) {
        return child_->GetEntityType(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::dialogflow::v2::EntityType>
EntityTypesLogging::CreateEntityType(
    grpc::ClientContext& context,
    google::cloud::dialogflow::v2::CreateEntityTypeRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::dialogflow::v2::CreateEntityTypeRequest const&
                 request) {
        return child_->CreateEntityType(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::dialogflow::v2::EntityType>
EntityTypesLogging::UpdateEntityType(
    grpc::ClientContext& context,
    google::cloud::dialogflow::v2::UpdateEntityTypeRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::dialogflow::v2::UpdateEntityTypeRequest const&
                 request) {
        return child_->UpdateEntityType(context, request);
      },
      context, request, __func__, tracing_options_);
}

Status EntityTypesLogging::DeleteEntityType(
    grpc::ClientContext& context,
    google::cloud::dialogflow::v2::DeleteEntityTypeRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::dialogflow::v2::DeleteEntityTypeRequest const&
                 request) {
        return child_->DeleteEntityType(context, request);
      },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
EntityTypesLogging::AsyncBatchUpdateEntityTypes(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::dialogflow::v2::BatchUpdateEntityTypesRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::dialogflow::v2::BatchUpdateEntityTypesRequest const&
                 request) {
        return child_->AsyncBatchUpdateEntityTypes(cq, std::move(context),
                                                   request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
EntityTypesLogging::AsyncBatchDeleteEntityTypes(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::dialogflow::v2::BatchDeleteEntityTypesRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::dialogflow::v2::BatchDeleteEntityTypesRequest const&
                 request) {
        return child_->AsyncBatchDeleteEntityTypes(cq, std::move(context),
                                                   request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
EntityTypesLogging::AsyncBatchCreateEntities(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::dialogflow::v2::BatchCreateEntitiesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::dialogflow::v2::BatchCreateEntitiesRequest const&
                 request) {
        return child_->AsyncBatchCreateEntities(cq, std::move(context),
                                                request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
EntityTypesLogging::AsyncBatchUpdateEntities(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::dialogflow::v2::BatchUpdateEntitiesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::dialogflow::v2::BatchUpdateEntitiesRequest const&
                 request) {
        return child_->AsyncBatchUpdateEntities(cq, std::move(context),
                                                request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
EntityTypesLogging::AsyncBatchDeleteEntities(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::dialogflow::v2::BatchDeleteEntitiesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::cloud::dialogflow::v2::BatchDeleteEntitiesRequest const&
                 request) {
        return child_->AsyncBatchDeleteEntities(cq, std::move(context),
                                                request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
EntityTypesLogging::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::longrunning::GetOperationRequest const& request) {
        return child_->AsyncGetOperation(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<Status> EntityTypesLogging::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::shared_ptr<grpc::ClientContext> context,
             google::longrunning::CancelOperationRequest const& request) {
        return child_->AsyncCancelOperation(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
