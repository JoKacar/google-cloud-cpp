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
// source: google/cloud/compute/ssl_policies/v1/ssl_policies.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_SSL_POLICIES_V1_INTERNAL_SSL_POLICIES_REST_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_SSL_POLICIES_V1_INTERNAL_SSL_POLICIES_REST_STUB_H

#include "google/cloud/completion_queue.h"
#include "google/cloud/internal/rest_client.h"
#include "google/cloud/internal/rest_context.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/global_operations/v1/global_operations.pb.h>
#include <google/cloud/compute/ssl_policies/v1/ssl_policies.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace compute_ssl_policies_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class SslPoliciesRestStub {
 public:
  virtual ~SslPoliciesRestStub() = default;

  virtual StatusOr<google::cloud::cpp::compute::v1::SslPoliciesAggregatedList> AggregatedListSslPolicies(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::ssl_policies::v1::AggregatedListSslPoliciesRequest const& request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>> AsyncDeleteSslPolicies(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::ssl_policies::v1::DeleteSslPoliciesRequest const& request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::SslPolicy> GetSslPolicies(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::ssl_policies::v1::GetSslPoliciesRequest const& request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>> AsyncInsertSslPolicies(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::ssl_policies::v1::InsertSslPoliciesRequest const& request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::SslPoliciesList> ListSslPolicies(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::ssl_policies::v1::ListSslPoliciesRequest const& request) = 0;

  virtual StatusOr<google::cloud::cpp::compute::v1::SslPoliciesListAvailableFeaturesResponse> ListAvailableFeatures(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::ssl_policies::v1::ListAvailableFeaturesRequest const& request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>> AsyncPatchSslPolicies(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::ssl_policies::v1::PatchSslPoliciesRequest const& request) = 0;

  virtual future<StatusOr<google::cloud::cpp::compute::v1::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::global_operations::v1::GetGlobalOperationsRequest const& request) = 0;

  virtual future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::global_operations::v1::DeleteGlobalOperationsRequest const& request) = 0;
};

class DefaultSslPoliciesRestStub : public SslPoliciesRestStub {
 public:
  ~DefaultSslPoliciesRestStub() override = default;

  explicit DefaultSslPoliciesRestStub(Options options);
  DefaultSslPoliciesRestStub(
      std::shared_ptr<rest_internal::RestClient> service,
      std::shared_ptr<rest_internal::RestClient> operations,
      Options options);

  StatusOr<google::cloud::cpp::compute::v1::SslPoliciesAggregatedList> AggregatedListSslPolicies(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::ssl_policies::v1::AggregatedListSslPoliciesRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> AsyncDeleteSslPolicies(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::ssl_policies::v1::DeleteSslPoliciesRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::SslPolicy> GetSslPolicies(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::ssl_policies::v1::GetSslPoliciesRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> AsyncInsertSslPolicies(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::ssl_policies::v1::InsertSslPoliciesRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::SslPoliciesList> ListSslPolicies(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::ssl_policies::v1::ListSslPoliciesRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::SslPoliciesListAvailableFeaturesResponse> ListAvailableFeatures(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::ssl_policies::v1::ListAvailableFeaturesRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> AsyncPatchSslPolicies(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<google::cloud::rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::ssl_policies::v1::PatchSslPoliciesRequest const& request) override;

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
}  // namespace compute_ssl_policies_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_SSL_POLICIES_V1_INTERNAL_SSL_POLICIES_REST_STUB_H
