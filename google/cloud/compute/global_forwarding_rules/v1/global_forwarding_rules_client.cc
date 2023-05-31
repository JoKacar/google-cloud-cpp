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
// source: google/cloud/compute/global_forwarding_rules/v1/global_forwarding_rules.proto

#include "google/cloud/compute/global_forwarding_rules/v1/global_forwarding_rules_client.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_global_forwarding_rules_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

GlobalForwardingRulesClient::GlobalForwardingRulesClient(ExperimentalTag,
    std::shared_ptr<GlobalForwardingRulesConnection> connection, Options opts)
    : connection_(std::move(connection)),
      options_(internal::MergeOptions(std::move(opts),
      connection_->options())) {}
GlobalForwardingRulesClient::~GlobalForwardingRulesClient() = default;

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
GlobalForwardingRulesClient::DeleteGlobalForwardingRules(std::string const& project, std::string const& forwarding_rule, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::global_forwarding_rules::v1::DeleteGlobalForwardingRulesRequest request;
  request.set_project(project);
  request.set_forwarding_rule(forwarding_rule);
  return connection_->DeleteGlobalForwardingRules(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
GlobalForwardingRulesClient::DeleteGlobalForwardingRules(google::cloud::cpp::compute::global_forwarding_rules::v1::DeleteGlobalForwardingRulesRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteGlobalForwardingRules(request);
}

StatusOr<google::cloud::cpp::compute::v1::ForwardingRule>
GlobalForwardingRulesClient::GetGlobalForwardingRules(std::string const& project, std::string const& forwarding_rule, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::global_forwarding_rules::v1::GetGlobalForwardingRulesRequest request;
  request.set_project(project);
  request.set_forwarding_rule(forwarding_rule);
  return connection_->GetGlobalForwardingRules(request);
}

StatusOr<google::cloud::cpp::compute::v1::ForwardingRule>
GlobalForwardingRulesClient::GetGlobalForwardingRules(google::cloud::cpp::compute::global_forwarding_rules::v1::GetGlobalForwardingRulesRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetGlobalForwardingRules(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
GlobalForwardingRulesClient::InsertGlobalForwardingRules(std::string const& project, google::cloud::cpp::compute::v1::ForwardingRule const& forwarding_rule_resource, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::global_forwarding_rules::v1::InsertGlobalForwardingRulesRequest request;
  request.set_project(project);
  *request.mutable_forwarding_rule_resource() = forwarding_rule_resource;
  return connection_->InsertGlobalForwardingRules(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
GlobalForwardingRulesClient::InsertGlobalForwardingRules(google::cloud::cpp::compute::global_forwarding_rules::v1::InsertGlobalForwardingRulesRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->InsertGlobalForwardingRules(request);
}

StreamRange<google::cloud::cpp::compute::v1::ForwardingRule>
GlobalForwardingRulesClient::ListGlobalForwardingRules(std::string const& project, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::global_forwarding_rules::v1::ListGlobalForwardingRulesRequest request;
  request.set_project(project);
  return connection_->ListGlobalForwardingRules(request);
}

StreamRange<google::cloud::cpp::compute::v1::ForwardingRule>
GlobalForwardingRulesClient::ListGlobalForwardingRules(google::cloud::cpp::compute::global_forwarding_rules::v1::ListGlobalForwardingRulesRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListGlobalForwardingRules(std::move(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
GlobalForwardingRulesClient::PatchGlobalForwardingRules(std::string const& project, std::string const& forwarding_rule, google::cloud::cpp::compute::v1::ForwardingRule const& forwarding_rule_resource, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::global_forwarding_rules::v1::PatchGlobalForwardingRulesRequest request;
  request.set_project(project);
  request.set_forwarding_rule(forwarding_rule);
  *request.mutable_forwarding_rule_resource() = forwarding_rule_resource;
  return connection_->PatchGlobalForwardingRules(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
GlobalForwardingRulesClient::PatchGlobalForwardingRules(google::cloud::cpp::compute::global_forwarding_rules::v1::PatchGlobalForwardingRulesRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->PatchGlobalForwardingRules(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
GlobalForwardingRulesClient::SetLabels(std::string const& project, std::string const& resource, google::cloud::cpp::compute::v1::GlobalSetLabelsRequest const& global_set_labels_request_resource, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::global_forwarding_rules::v1::SetLabelsRequest request;
  request.set_project(project);
  request.set_resource(resource);
  *request.mutable_global_set_labels_request_resource() = global_set_labels_request_resource;
  return connection_->SetLabels(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
GlobalForwardingRulesClient::SetLabels(google::cloud::cpp::compute::global_forwarding_rules::v1::SetLabelsRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->SetLabels(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
GlobalForwardingRulesClient::SetTarget(std::string const& project, std::string const& forwarding_rule, google::cloud::cpp::compute::v1::TargetReference const& target_reference_resource, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::global_forwarding_rules::v1::SetTargetRequest request;
  request.set_project(project);
  request.set_forwarding_rule(forwarding_rule);
  *request.mutable_target_reference_resource() = target_reference_resource;
  return connection_->SetTarget(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
GlobalForwardingRulesClient::SetTarget(google::cloud::cpp::compute::global_forwarding_rules::v1::SetTargetRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->SetTarget(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_global_forwarding_rules_v1
}  // namespace cloud
}  // namespace google
