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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_PUBSUB_INTERNAL_SCHEMA_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_PUBSUB_INTERNAL_SCHEMA_TRACING_CONNECTION_H

#include "google/cloud/pubsub/schema_connection.h"
#include "google/cloud/version.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace pubsub_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class SchemaServiceTracingConnection : public pubsub::SchemaServiceConnection {
 public:
  ~SchemaServiceTracingConnection() override = default;

  explicit SchemaServiceTracingConnection(
      std::shared_ptr<pubsub::SchemaServiceConnection> child);

  Options options() override { return child_->options(); }

  StatusOr<google::pubsub::v1::Schema> CreateSchema(
      google::pubsub::v1::CreateSchemaRequest const& request) override;

  StatusOr<google::pubsub::v1::Schema> GetSchema(
      google::pubsub::v1::GetSchemaRequest const& request) override;

  StreamRange<google::pubsub::v1::Schema> ListSchemas(
      google::pubsub::v1::ListSchemasRequest request) override;

  StreamRange<google::pubsub::v1::Schema> ListSchemaRevisions(
      google::pubsub::v1::ListSchemaRevisionsRequest request) override;

  StatusOr<google::pubsub::v1::Schema> CommitSchema(
      google::pubsub::v1::CommitSchemaRequest const& request) override;

  StatusOr<google::pubsub::v1::Schema> RollbackSchema(
      google::pubsub::v1::RollbackSchemaRequest const& request) override;

  StatusOr<google::pubsub::v1::Schema> DeleteSchemaRevision(
      google::pubsub::v1::DeleteSchemaRevisionRequest const& request) override;

  Status DeleteSchema(
      google::pubsub::v1::DeleteSchemaRequest const& request) override;

  StatusOr<google::pubsub::v1::ValidateSchemaResponse> ValidateSchema(
      google::pubsub::v1::ValidateSchemaRequest const& request) override;

  StatusOr<google::pubsub::v1::ValidateMessageResponse> ValidateMessage(
      google::pubsub::v1::ValidateMessageRequest const& request) override;

 private:
  std::shared_ptr<pubsub::SchemaServiceConnection> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Conditionally applies the tracing decorator to the given connection.
 *
 * The connection is only decorated if tracing is enabled (as determined by the
 * connection's options).
 */
std::shared_ptr<pubsub::SchemaServiceConnection>
MakeSchemaServiceTracingConnection(
    std::shared_ptr<pubsub::SchemaServiceConnection> conn);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace pubsub_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_PUBSUB_INTERNAL_SCHEMA_TRACING_CONNECTION_H
