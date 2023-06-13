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
// source: google/cloud/dialogflow/v2/intent.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_INTENTS_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_INTENTS_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/internal/retry_policy.h"
#include "google/cloud/version.h"
#include <google/cloud/dialogflow/v2/intent.grpc.pb.h>
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace dialogflow_es {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class IntentsConnectionIdempotencyPolicy {
 public:
  virtual ~IntentsConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<IntentsConnectionIdempotencyPolicy> clone() const;

  virtual google::cloud::Idempotency ListIntents(
      google::cloud::dialogflow::v2::ListIntentsRequest request);

  virtual google::cloud::Idempotency GetIntent(
      google::cloud::dialogflow::v2::GetIntentRequest const& request);

  virtual google::cloud::Idempotency CreateIntent(
      google::cloud::dialogflow::v2::CreateIntentRequest const& request);

  virtual google::cloud::Idempotency UpdateIntent(
      google::cloud::dialogflow::v2::UpdateIntentRequest const& request);

  virtual google::cloud::Idempotency DeleteIntent(
      google::cloud::dialogflow::v2::DeleteIntentRequest const& request);

  virtual google::cloud::Idempotency BatchUpdateIntents(
      google::cloud::dialogflow::v2::BatchUpdateIntentsRequest const& request);

  virtual google::cloud::Idempotency BatchDeleteIntents(
      google::cloud::dialogflow::v2::BatchDeleteIntentsRequest const& request);
};

std::unique_ptr<IntentsConnectionIdempotencyPolicy>
MakeDefaultIntentsConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_INTENTS_CONNECTION_IDEMPOTENCY_POLICY_H
