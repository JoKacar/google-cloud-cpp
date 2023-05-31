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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_INSTANCE_TEMPLATES_V1_INTERNAL_INSTANCE_TEMPLATES_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_INSTANCE_TEMPLATES_V1_INTERNAL_INSTANCE_TEMPLATES_TRACING_CONNECTION_H

#include "google/cloud/compute/instance_templates/v1/instance_templates_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_instance_templates_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class InstanceTemplatesTracingConnection
    : public compute_instance_templates_v1::InstanceTemplatesConnection {
 public:
  ~InstanceTemplatesTracingConnection() override = default;

  explicit InstanceTemplatesTracingConnection(
    std::shared_ptr<compute_instance_templates_v1::InstanceTemplatesConnection> child);

  Options options() override { return child_->options(); }

  StatusOr<google::cloud::cpp::compute::v1::InstanceTemplateAggregatedList>
  AggregatedListInstanceTemplates(google::cloud::cpp::compute::instance_templates::v1::AggregatedListInstanceTemplatesRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteInstanceTemplates(google::cloud::cpp::compute::instance_templates::v1::DeleteInstanceTemplatesRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::InstanceTemplate>
  GetInstanceTemplates(google::cloud::cpp::compute::instance_templates::v1::GetInstanceTemplatesRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Policy>
  GetIamPolicy(google::cloud::cpp::compute::instance_templates::v1::GetIamPolicyRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertInstanceTemplates(google::cloud::cpp::compute::instance_templates::v1::InsertInstanceTemplatesRequest const& request) override;

  StreamRange<google::cloud::cpp::compute::v1::InstanceTemplate>
  ListInstanceTemplates(google::cloud::cpp::compute::instance_templates::v1::ListInstanceTemplatesRequest request) override;

  StatusOr<google::cloud::cpp::compute::v1::Policy>
  SetIamPolicy(google::cloud::cpp::compute::instance_templates::v1::SetIamPolicyRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
  TestIamPermissions(google::cloud::cpp::compute::instance_templates::v1::TestIamPermissionsRequest const& request) override;

 private:
  std::shared_ptr<compute_instance_templates_v1::InstanceTemplatesConnection> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Conditionally applies the tracing decorator to the given connection.
 *
 * The connection is only decorated if tracing is enabled (as determined by the
 * connection's options).
 */
std::shared_ptr<compute_instance_templates_v1::InstanceTemplatesConnection>
MakeInstanceTemplatesTracingConnection(
    std::shared_ptr<compute_instance_templates_v1::InstanceTemplatesConnection> conn);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_instance_templates_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_INSTANCE_TEMPLATES_V1_INTERNAL_INSTANCE_TEMPLATES_TRACING_CONNECTION_H
