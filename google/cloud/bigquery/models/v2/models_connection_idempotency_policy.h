// Copyright 2024 Google LLC
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
// source: google/cloud/bigquery/models/v2/models.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_MODELS_V2_MODELS_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_MODELS_V2_MODELS_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/version.h"
#include <google/cloud/bigquery/models/v2/models.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace bigquery_models_v2 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class ModelsConnectionIdempotencyPolicy {
 public:
  virtual ~ModelsConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<ModelsConnectionIdempotencyPolicy> clone() const;

  virtual google::cloud::Idempotency DeleteModel(
      google::cloud::cpp::bigquery::models::v2::DeleteModelRequest const&
          request);

  virtual google::cloud::Idempotency GetModel(
      google::cloud::cpp::bigquery::models::v2::GetModelRequest const& request);

  virtual google::cloud::Idempotency ListModels(
      google::cloud::cpp::bigquery::models::v2::ListModelsRequest const&
          request);

  virtual google::cloud::Idempotency PatchModel(
      google::cloud::cpp::bigquery::models::v2::PatchModelRequest const&
          request);
};

std::unique_ptr<ModelsConnectionIdempotencyPolicy>
MakeDefaultModelsConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigquery_models_v2
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_MODELS_V2_MODELS_CONNECTION_IDEMPOTENCY_POLICY_H
