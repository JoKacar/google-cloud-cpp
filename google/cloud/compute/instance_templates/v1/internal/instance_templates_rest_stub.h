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
// source: google/cloud/compute/instance_templates/v1/instance_templates.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_INSTANCE_TEMPLATES_V1_INTERNAL_INSTANCE_TEMPLATES_REST_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_INSTANCE_TEMPLATES_V1_INTERNAL_INSTANCE_TEMPLATES_REST_STUB_H

#include "google/cloud/completion_queue.h"
#include "google/cloud/internal/rest_client.h"
#include "google/cloud/internal/rest_context.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/global_operations/v1/global_operations.pb.h>
#include <google/cloud/compute/instance_templates/v1/instance_templates.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace compute_instance_templates_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class InstanceTemplatesRestStub {
 public:
  virtual ~InstanceTemplatesRestStub() = default;

  virtual StatusOr<google::cloud::cpp::compute::v1::InstanceTemplateAggregatedList> AggregatedListInstanceTemplates(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::instance_templates::v1::AggregatedListInstanceTemplatesRequest const& request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>> AsyncDeleteInstanceTemplates(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::instance_templates::v1::DeleteInstanceTemplatesRequest const& request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::InstanceTemplate> GetInstanceTemplates(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::instance_templates::v1::GetInstanceTemplatesRequest const& request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::Policy> GetIamPolicy(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::instance_templates::v1::GetIamPolicyRequest const& request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>> AsyncInsertInstanceTemplates(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::instance_templates::v1::InsertInstanceTemplatesRequest const& request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::InstanceTemplateList> ListInstanceTemplates(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::instance_templates::v1::ListInstanceTemplatesRequest const& request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::Policy> SetIamPolicy(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::instance_templates::v1::SetIamPolicyRequest const& request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse> TestIamPermissions(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::instance_templates::v1::TestIamPermissionsRequest const& request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::global_operations::v1::GetGlobalOperationsRequest const& request) = 0;

  virtual future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::global_operations::v1::DeleteGlobalOperationsRequest const& request) = 0;
};

class DefaultInstanceTemplatesRestStub : public InstanceTemplatesRestStub {
 public:
  ~DefaultInstanceTemplatesRestStub() override = default;

  explicit DefaultInstanceTemplatesRestStub(Options options);
  DefaultInstanceTemplatesRestStub(
      std::shared_ptr<rest_internal::RestClient> service,
      std::shared_ptr<rest_internal::RestClient> operations,
      Options options);

  StatusOr<google::cloud::cpp::compute::v1::InstanceTemplateAggregatedList> AggregatedListInstanceTemplates(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::instance_templates::v1::AggregatedListInstanceTemplatesRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> AsyncDeleteInstanceTemplates(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::instance_templates::v1::DeleteInstanceTemplatesRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::InstanceTemplate> GetInstanceTemplates(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::instance_templates::v1::GetInstanceTemplatesRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Policy> GetIamPolicy(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::instance_templates::v1::GetIamPolicyRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> AsyncInsertInstanceTemplates(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::instance_templates::v1::InsertInstanceTemplatesRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::InstanceTemplateList> ListInstanceTemplates(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::instance_templates::v1::ListInstanceTemplatesRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Policy> SetIamPolicy(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::instance_templates::v1::SetIamPolicyRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse> TestIamPermissions(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::instance_templates::v1::TestIamPermissionsRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::global_operations::v1::GetGlobalOperationsRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::global_operations::v1::DeleteGlobalOperationsRequest const& request) override;

 private:
  std::shared_ptr<rest_internal::RestClient> service_;
  std::shared_ptr<rest_internal::RestClient> operations_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_instance_templates_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_INSTANCE_TEMPLATES_V1_INTERNAL_INSTANCE_TEMPLATES_REST_STUB_H
