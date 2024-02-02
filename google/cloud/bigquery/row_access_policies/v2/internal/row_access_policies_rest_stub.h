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
// source:
// google/cloud/bigquery/row_access_policies/v2/row_access_policies.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_ROW_ACCESS_POLICIES_V2_INTERNAL_ROW_ACCESS_POLICIES_REST_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_ROW_ACCESS_POLICIES_V2_INTERNAL_ROW_ACCESS_POLICIES_REST_STUB_H

#include "google/cloud/completion_queue.h"
#include "google/cloud/internal/rest_client.h"
#include "google/cloud/internal/rest_context.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/cloud/bigquery/row_access_policies/v2/row_access_policies.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace bigquery_row_access_policies_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class RowAccessPoliciesRestStub {
 public:
  virtual ~RowAccessPoliciesRestStub() = default;

  virtual StatusOr<google::cloud::cpp::bigquery::v2::Policy> GetIamPolicy(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::bigquery::row_access_policies::v2::
          GetIamPolicyRequest const& request) = 0;

  virtual StatusOr<
      google::cloud::cpp::bigquery::v2::ListRowAccessPoliciesResponse>
  ListRowAccessPolicies(google::cloud::rest_internal::RestContext& rest_context,
                        Options const& options,
                        google::cloud::cpp::bigquery::row_access_policies::v2::
                            ListRowAccessPoliciesRequest const& request) = 0;

  virtual StatusOr<google::cloud::cpp::bigquery::v2::TestIamPermissionsResponse>
  TestIamPermissions(google::cloud::rest_internal::RestContext& rest_context,
                     Options const& options,
                     google::cloud::cpp::bigquery::row_access_policies::v2::
                         TestIamPermissionsRequest const& request) = 0;
};

class DefaultRowAccessPoliciesRestStub : public RowAccessPoliciesRestStub {
 public:
  ~DefaultRowAccessPoliciesRestStub() override = default;

  explicit DefaultRowAccessPoliciesRestStub(Options options);
  DefaultRowAccessPoliciesRestStub(
      std::shared_ptr<rest_internal::RestClient> service, Options options);

  StatusOr<google::cloud::cpp::bigquery::v2::Policy> GetIamPolicy(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::bigquery::row_access_policies::v2::
          GetIamPolicyRequest const& request) override;

  StatusOr<google::cloud::cpp::bigquery::v2::ListRowAccessPoliciesResponse>
  ListRowAccessPolicies(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::bigquery::row_access_policies::v2::
          ListRowAccessPoliciesRequest const& request) override;

  StatusOr<google::cloud::cpp::bigquery::v2::TestIamPermissionsResponse>
  TestIamPermissions(google::cloud::rest_internal::RestContext& rest_context,
                     Options const& options,
                     google::cloud::cpp::bigquery::row_access_policies::v2::
                         TestIamPermissionsRequest const& request) override;

 private:
  std::shared_ptr<rest_internal::RestClient> service_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigquery_row_access_policies_v2_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_ROW_ACCESS_POLICIES_V2_INTERNAL_ROW_ACCESS_POLICIES_REST_STUB_H
