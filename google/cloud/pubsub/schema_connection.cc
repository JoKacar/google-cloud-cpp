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
// source: google/pubsub/v1/schema.proto

#include "google/cloud/pubsub/schema_connection.h"
#include "google/cloud/pubsub/internal/schema_connection_impl.h"
#include "google/cloud/pubsub/internal/schema_option_defaults.h"
#include "google/cloud/pubsub/internal/schema_stub_factory.h"
#include "google/cloud/pubsub/internal/schema_tracing_connection.h"
#include "google/cloud/pubsub/schema_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace pubsub {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

SchemaServiceConnection::~SchemaServiceConnection() = default;

StatusOr<google::pubsub::v1::Schema> SchemaServiceConnection::CreateSchema(
    google::pubsub::v1::CreateSchemaRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::pubsub::v1::Schema> SchemaServiceConnection::GetSchema(
    google::pubsub::v1::GetSchemaRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::pubsub::v1::Schema> SchemaServiceConnection::ListSchemas(
    google::pubsub::v1::
        ListSchemasRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::pubsub::v1::Schema>>();
}

StreamRange<google::pubsub::v1::Schema>
SchemaServiceConnection::ListSchemaRevisions(
    google::pubsub::v1::
        ListSchemaRevisionsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::pubsub::v1::Schema>>();
}

StatusOr<google::pubsub::v1::Schema> SchemaServiceConnection::CommitSchema(
    google::pubsub::v1::CommitSchemaRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::pubsub::v1::Schema> SchemaServiceConnection::RollbackSchema(
    google::pubsub::v1::RollbackSchemaRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::pubsub::v1::Schema>
SchemaServiceConnection::DeleteSchemaRevision(
    google::pubsub::v1::DeleteSchemaRevisionRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

Status SchemaServiceConnection::DeleteSchema(
    google::pubsub::v1::DeleteSchemaRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::pubsub::v1::ValidateSchemaResponse>
SchemaServiceConnection::ValidateSchema(
    google::pubsub::v1::ValidateSchemaRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::pubsub::v1::ValidateMessageResponse>
SchemaServiceConnection::ValidateMessage(
    google::pubsub::v1::ValidateMessageRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

std::shared_ptr<SchemaServiceConnection> MakeSchemaServiceConnection(
    Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 UnifiedCredentialsOptionList,
                                 SchemaServicePolicyOptionList>(options,
                                                                __func__);
  options = pubsub_internal::SchemaServiceDefaultOptions(std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto stub = pubsub_internal::CreateDefaultSchemaServiceStub(background->cq(),
                                                              options);
  return pubsub_internal::MakeSchemaServiceTracingConnection(
      std::make_shared<pubsub_internal::SchemaServiceConnectionImpl>(
          std::move(background), std::move(stub), std::move(options)));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace pubsub
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
