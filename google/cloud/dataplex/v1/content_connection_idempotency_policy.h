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
// source: google/cloud/dataplex/v1/content.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPLEX_V1_CONTENT_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPLEX_V1_CONTENT_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/internal/retry_policy.h"
#include "google/cloud/version.h"
#include <google/cloud/dataplex/v1/content.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace dataplex_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class ContentServiceConnectionIdempotencyPolicy {
 public:
  virtual ~ContentServiceConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<ContentServiceConnectionIdempotencyPolicy> clone()
      const;

  virtual google::cloud::Idempotency CreateContent(
      google::cloud::dataplex::v1::CreateContentRequest const& request);

  virtual google::cloud::Idempotency UpdateContent(
      google::cloud::dataplex::v1::UpdateContentRequest const& request);

  virtual google::cloud::Idempotency DeleteContent(
      google::cloud::dataplex::v1::DeleteContentRequest const& request);

  virtual google::cloud::Idempotency GetContent(
      google::cloud::dataplex::v1::GetContentRequest const& request);

  virtual google::cloud::Idempotency GetIamPolicy(
      google::iam::v1::GetIamPolicyRequest const& request);

  virtual google::cloud::Idempotency SetIamPolicy(
      google::iam::v1::SetIamPolicyRequest const& request);

  virtual google::cloud::Idempotency TestIamPermissions(
      google::iam::v1::TestIamPermissionsRequest const& request);

  virtual google::cloud::Idempotency ListContent(
      google::cloud::dataplex::v1::ListContentRequest request);
};

std::unique_ptr<ContentServiceConnectionIdempotencyPolicy>
MakeDefaultContentServiceConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dataplex_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPLEX_V1_CONTENT_CONNECTION_IDEMPOTENCY_POLICY_H
