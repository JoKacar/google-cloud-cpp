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
// source: google/cloud/dialogflow/cx/v3/session_entity_type.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_INTERNAL_SESSION_ENTITY_TYPES_AUTH_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_INTERNAL_SESSION_ENTITY_TYPES_AUTH_DECORATOR_H

#include "google/cloud/dialogflow_cx/internal/session_entity_types_stub.h"
#include "google/cloud/internal/unified_grpc_credentials.h"
#include "google/cloud/version.h"
#include <memory>
#include <set>
#include <string>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace dialogflow_cx_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class SessionEntityTypesAuth : public SessionEntityTypesStub {
 public:
  ~SessionEntityTypesAuth() override = default;
  SessionEntityTypesAuth(
      std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
      std::shared_ptr<SessionEntityTypesStub> child);

  StatusOr<google::cloud::dialogflow::cx::v3::ListSessionEntityTypesResponse>
  ListSessionEntityTypes(
      grpc::ClientContext& context,
      google::cloud::dialogflow::cx::v3::ListSessionEntityTypesRequest const&
          request) override;

  StatusOr<google::cloud::dialogflow::cx::v3::SessionEntityType>
  GetSessionEntityType(
      grpc::ClientContext& context,
      google::cloud::dialogflow::cx::v3::GetSessionEntityTypeRequest const&
          request) override;

  StatusOr<google::cloud::dialogflow::cx::v3::SessionEntityType>
  CreateSessionEntityType(
      grpc::ClientContext& context,
      google::cloud::dialogflow::cx::v3::CreateSessionEntityTypeRequest const&
          request) override;

  StatusOr<google::cloud::dialogflow::cx::v3::SessionEntityType>
  UpdateSessionEntityType(
      grpc::ClientContext& context,
      google::cloud::dialogflow::cx::v3::UpdateSessionEntityTypeRequest const&
          request) override;

  Status DeleteSessionEntityType(
      grpc::ClientContext& context,
      google::cloud::dialogflow::cx::v3::DeleteSessionEntityTypeRequest const&
          request) override;

 private:
  std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth_;
  std::shared_ptr<SessionEntityTypesStub> child_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_cx_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_INTERNAL_SESSION_ENTITY_TYPES_AUTH_DECORATOR_H
