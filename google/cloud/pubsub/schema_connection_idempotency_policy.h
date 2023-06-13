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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_PUBSUB_SCHEMA_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_PUBSUB_SCHEMA_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/internal/retry_policy.h"
#include "google/cloud/version.h"
#include <google/pubsub/v1/schema.grpc.pb.h>
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace pubsub {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class SchemaServiceConnectionIdempotencyPolicy {
 public:
  virtual ~SchemaServiceConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<SchemaServiceConnectionIdempotencyPolicy> clone()
      const;

  virtual google::cloud::Idempotency CreateSchema(
      google::pubsub::v1::CreateSchemaRequest const& request);

  virtual google::cloud::Idempotency GetSchema(
      google::pubsub::v1::GetSchemaRequest const& request);

  virtual google::cloud::Idempotency ListSchemas(
      google::pubsub::v1::ListSchemasRequest request);

  virtual google::cloud::Idempotency ListSchemaRevisions(
      google::pubsub::v1::ListSchemaRevisionsRequest request);

  virtual google::cloud::Idempotency CommitSchema(
      google::pubsub::v1::CommitSchemaRequest const& request);

  virtual google::cloud::Idempotency RollbackSchema(
      google::pubsub::v1::RollbackSchemaRequest const& request);

  virtual google::cloud::Idempotency DeleteSchemaRevision(
      google::pubsub::v1::DeleteSchemaRevisionRequest const& request);

  virtual google::cloud::Idempotency DeleteSchema(
      google::pubsub::v1::DeleteSchemaRequest const& request);

  virtual google::cloud::Idempotency ValidateSchema(
      google::pubsub::v1::ValidateSchemaRequest const& request);

  virtual google::cloud::Idempotency ValidateMessage(
      google::pubsub::v1::ValidateMessageRequest const& request);
};

std::unique_ptr<SchemaServiceConnectionIdempotencyPolicy>
MakeDefaultSchemaServiceConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace pubsub
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_PUBSUB_SCHEMA_CONNECTION_IDEMPOTENCY_POLICY_H
