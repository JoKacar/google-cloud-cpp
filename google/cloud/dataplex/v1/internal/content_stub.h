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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPLEX_V1_INTERNAL_CONTENT_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPLEX_V1_INTERNAL_CONTENT_STUB_H

#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/cloud/dataplex/v1/content.grpc.pb.h>
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace dataplex_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class ContentServiceStub {
 public:
  virtual ~ContentServiceStub() = 0;

  virtual StatusOr<google::cloud::dataplex::v1::Content> CreateContent(
      grpc::ClientContext& context,
      google::cloud::dataplex::v1::CreateContentRequest const& request) = 0;

  virtual StatusOr<google::cloud::dataplex::v1::Content> UpdateContent(
      grpc::ClientContext& context,
      google::cloud::dataplex::v1::UpdateContentRequest const& request) = 0;

  virtual Status DeleteContent(
      grpc::ClientContext& context,
      google::cloud::dataplex::v1::DeleteContentRequest const& request) = 0;

  virtual StatusOr<google::cloud::dataplex::v1::Content> GetContent(
      grpc::ClientContext& context,
      google::cloud::dataplex::v1::GetContentRequest const& request) = 0;

  virtual StatusOr<google::iam::v1::Policy> GetIamPolicy(
      grpc::ClientContext& context,
      google::iam::v1::GetIamPolicyRequest const& request) = 0;

  virtual StatusOr<google::iam::v1::Policy> SetIamPolicy(
      grpc::ClientContext& context,
      google::iam::v1::SetIamPolicyRequest const& request) = 0;

  virtual StatusOr<google::iam::v1::TestIamPermissionsResponse>
  TestIamPermissions(
      grpc::ClientContext& context,
      google::iam::v1::TestIamPermissionsRequest const& request) = 0;

  virtual StatusOr<google::cloud::dataplex::v1::ListContentResponse>
  ListContent(
      grpc::ClientContext& context,
      google::cloud::dataplex::v1::ListContentRequest const& request) = 0;
};

class DefaultContentServiceStub : public ContentServiceStub {
 public:
  explicit DefaultContentServiceStub(
      std::unique_ptr<
          google::cloud::dataplex::v1::ContentService::StubInterface>
          grpc_stub)
      : grpc_stub_(std::move(grpc_stub)) {}

  StatusOr<google::cloud::dataplex::v1::Content> CreateContent(
      grpc::ClientContext& client_context,
      google::cloud::dataplex::v1::CreateContentRequest const& request)
      override;

  StatusOr<google::cloud::dataplex::v1::Content> UpdateContent(
      grpc::ClientContext& client_context,
      google::cloud::dataplex::v1::UpdateContentRequest const& request)
      override;

  Status DeleteContent(grpc::ClientContext& client_context,
                       google::cloud::dataplex::v1::DeleteContentRequest const&
                           request) override;

  StatusOr<google::cloud::dataplex::v1::Content> GetContent(
      grpc::ClientContext& client_context,
      google::cloud::dataplex::v1::GetContentRequest const& request) override;

  StatusOr<google::iam::v1::Policy> GetIamPolicy(
      grpc::ClientContext& client_context,
      google::iam::v1::GetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::Policy> SetIamPolicy(
      grpc::ClientContext& client_context,
      google::iam::v1::SetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::TestIamPermissionsResponse> TestIamPermissions(
      grpc::ClientContext& client_context,
      google::iam::v1::TestIamPermissionsRequest const& request) override;

  StatusOr<google::cloud::dataplex::v1::ListContentResponse> ListContent(
      grpc::ClientContext& client_context,
      google::cloud::dataplex::v1::ListContentRequest const& request) override;

 private:
  std::unique_ptr<google::cloud::dataplex::v1::ContentService::StubInterface>
      grpc_stub_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dataplex_v1_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPLEX_V1_INTERNAL_CONTENT_STUB_H
