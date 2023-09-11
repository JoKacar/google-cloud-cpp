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
// source: google/cloud/compute/node_templates/v1/node_templates.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_NODE_TEMPLATES_V1_INTERNAL_NODE_TEMPLATES_REST_METADATA_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_NODE_TEMPLATES_V1_INTERNAL_NODE_TEMPLATES_REST_METADATA_DECORATOR_H

#include "google/cloud/compute/node_templates/v1/internal/node_templates_rest_stub.h"
#include "google/cloud/future.h"
#include "google/cloud/rest_options.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/node_templates/v1/node_templates.pb.h>
#include <google/cloud/compute/region_operations/v1/region_operations.pb.h>
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace compute_node_templates_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class NodeTemplatesRestMetadata : public NodeTemplatesRestStub {
 public:
  ~NodeTemplatesRestMetadata() override = default;
  explicit NodeTemplatesRestMetadata(
      std::shared_ptr<NodeTemplatesRestStub> child,
      std::string api_client_header = "");

  StatusOr<google::cloud::cpp::compute::v1::NodeTemplateAggregatedList>
  AggregatedListNodeTemplates(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::node_templates::v1::
          AggregatedListNodeTemplatesRequest const& request) override;

  google::cloud::future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncDeleteNodeTemplate(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::node_templates::v1::
          DeleteNodeTemplateRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::NodeTemplate> GetNodeTemplate(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::node_templates::v1::
          GetNodeTemplateRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Policy> GetIamPolicy(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::node_templates::v1::
          GetIamPolicyRequest const& request) override;

  google::cloud::future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncInsertNodeTemplate(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::node_templates::v1::
          InsertNodeTemplateRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::NodeTemplateList> ListNodeTemplates(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::node_templates::v1::
          ListNodeTemplatesRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Policy> SetIamPolicy(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::node_templates::v1::
          SetIamPolicyRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
  TestIamPermissions(google::cloud::rest_internal::RestContext& rest_context,
                     google::cloud::cpp::compute::node_templates::v1::
                         TestIamPermissionsRequest const& request) override;

  google::cloud::future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::region_operations::v1::
          GetOperationRequest const& request) override;

  google::cloud::future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::region_operations::v1::
          DeleteOperationRequest const& request) override;

 private:
  void SetMetadata(rest_internal::RestContext& rest_context,
                   std::vector<std::string> const& params = {});

  std::shared_ptr<NodeTemplatesRestStub> child_;
  std::string api_client_header_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_node_templates_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_NODE_TEMPLATES_V1_INTERNAL_NODE_TEMPLATES_REST_METADATA_DECORATOR_H
