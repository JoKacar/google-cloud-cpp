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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_GLOBAL_FORWARDING_RULES_V1_INTERNAL_GLOBAL_FORWARDING_RULES_REST_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_GLOBAL_FORWARDING_RULES_V1_INTERNAL_GLOBAL_FORWARDING_RULES_REST_STUB_H

#include "google/cloud/completion_queue.h"
#include "google/cloud/internal/rest_client.h"
#include "google/cloud/internal/rest_context.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/global_forwarding_rules/v1/global_forwarding_rules.pb.h>
#include <google/cloud/compute/global_operations/v1/global_operations.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace compute_global_forwarding_rules_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class GlobalForwardingRulesRestStub {
 public:
  virtual ~GlobalForwardingRulesRestStub() = default;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>> AsyncDeleteGlobalForwardingRules(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::global_forwarding_rules::v1::DeleteGlobalForwardingRulesRequest const& request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::ForwardingRule> GetGlobalForwardingRules(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::global_forwarding_rules::v1::GetGlobalForwardingRulesRequest const& request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>> AsyncInsertGlobalForwardingRules(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::global_forwarding_rules::v1::InsertGlobalForwardingRulesRequest const& request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::ForwardingRuleList> ListGlobalForwardingRules(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::global_forwarding_rules::v1::ListGlobalForwardingRulesRequest const& request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>> AsyncPatchGlobalForwardingRules(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::global_forwarding_rules::v1::PatchGlobalForwardingRulesRequest const& request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>> AsyncSetLabels(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::global_forwarding_rules::v1::SetLabelsRequest const& request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>> AsyncSetTarget(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::global_forwarding_rules::v1::SetTargetRequest const& request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::global_operations::v1::GetGlobalOperationsRequest const& request) = 0;

  virtual future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::global_operations::v1::DeleteGlobalOperationsRequest const& request) = 0;
};

class DefaultGlobalForwardingRulesRestStub : public GlobalForwardingRulesRestStub {
 public:
  ~DefaultGlobalForwardingRulesRestStub() override = default;

  explicit DefaultGlobalForwardingRulesRestStub(Options options);
  DefaultGlobalForwardingRulesRestStub(
      std::shared_ptr<rest_internal::RestClient> service,
      std::shared_ptr<rest_internal::RestClient> operations,
      Options options);

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> AsyncDeleteGlobalForwardingRules(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::global_forwarding_rules::v1::DeleteGlobalForwardingRulesRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::ForwardingRule> GetGlobalForwardingRules(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::global_forwarding_rules::v1::GetGlobalForwardingRulesRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> AsyncInsertGlobalForwardingRules(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::global_forwarding_rules::v1::InsertGlobalForwardingRulesRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::ForwardingRuleList> ListGlobalForwardingRules(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::global_forwarding_rules::v1::ListGlobalForwardingRulesRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> AsyncPatchGlobalForwardingRules(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::global_forwarding_rules::v1::PatchGlobalForwardingRulesRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> AsyncSetLabels(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::global_forwarding_rules::v1::SetLabelsRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> AsyncSetTarget(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::global_forwarding_rules::v1::SetTargetRequest const& request) override;

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
}  // namespace compute_global_forwarding_rules_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_GLOBAL_FORWARDING_RULES_V1_INTERNAL_GLOBAL_FORWARDING_RULES_REST_STUB_H
