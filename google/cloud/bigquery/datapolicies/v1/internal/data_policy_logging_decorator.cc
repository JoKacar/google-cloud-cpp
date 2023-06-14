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
// source: google/cloud/bigquery/datapolicies/v1/datapolicy.proto

#include "google/cloud/bigquery/datapolicies/v1/internal/data_policy_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <google/cloud/bigquery/datapolicies/v1/datapolicy.grpc.pb.h>
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace bigquery_datapolicies_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DataPolicyServiceLogging::DataPolicyServiceLogging(
    std::shared_ptr<DataPolicyServiceStub> child,
    TracingOptions tracing_options, std::set<std::string> components)
    : child_(std::move(child)),
      tracing_options_(std::move(tracing_options)),
      components_(std::move(components)) {}

StatusOr<google::cloud::bigquery::datapolicies::v1::DataPolicy>
DataPolicyServiceLogging::CreateDataPolicy(
    grpc::ClientContext& context,
    google::cloud::bigquery::datapolicies::v1::CreateDataPolicyRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::bigquery::datapolicies::v1::
                 CreateDataPolicyRequest const& request) {
        return child_->CreateDataPolicy(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::bigquery::datapolicies::v1::DataPolicy>
DataPolicyServiceLogging::UpdateDataPolicy(
    grpc::ClientContext& context,
    google::cloud::bigquery::datapolicies::v1::UpdateDataPolicyRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::bigquery::datapolicies::v1::
                 UpdateDataPolicyRequest const& request) {
        return child_->UpdateDataPolicy(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::bigquery::datapolicies::v1::DataPolicy>
DataPolicyServiceLogging::RenameDataPolicy(
    grpc::ClientContext& context,
    google::cloud::bigquery::datapolicies::v1::RenameDataPolicyRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::bigquery::datapolicies::v1::
                 RenameDataPolicyRequest const& request) {
        return child_->RenameDataPolicy(context, request);
      },
      context, request, __func__, tracing_options_);
}

Status DataPolicyServiceLogging::DeleteDataPolicy(
    grpc::ClientContext& context,
    google::cloud::bigquery::datapolicies::v1::DeleteDataPolicyRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::bigquery::datapolicies::v1::
                 DeleteDataPolicyRequest const& request) {
        return child_->DeleteDataPolicy(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::bigquery::datapolicies::v1::DataPolicy>
DataPolicyServiceLogging::GetDataPolicy(
    grpc::ClientContext& context,
    google::cloud::bigquery::datapolicies::v1::GetDataPolicyRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context,
          google::cloud::bigquery::datapolicies::v1::GetDataPolicyRequest const&
              request) { return child_->GetDataPolicy(context, request); },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::bigquery::datapolicies::v1::ListDataPoliciesResponse>
DataPolicyServiceLogging::ListDataPolicies(
    grpc::ClientContext& context,
    google::cloud::bigquery::datapolicies::v1::ListDataPoliciesRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::bigquery::datapolicies::v1::
                 ListDataPoliciesRequest const& request) {
        return child_->ListDataPolicies(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::iam::v1::Policy> DataPolicyServiceLogging::GetIamPolicy(
    grpc::ClientContext& context,
    google::iam::v1::GetIamPolicyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::iam::v1::GetIamPolicyRequest const& request) {
        return child_->GetIamPolicy(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::iam::v1::Policy> DataPolicyServiceLogging::SetIamPolicy(
    grpc::ClientContext& context,
    google::iam::v1::SetIamPolicyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::iam::v1::SetIamPolicyRequest const& request) {
        return child_->SetIamPolicy(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
DataPolicyServiceLogging::TestIamPermissions(
    grpc::ClientContext& context,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::iam::v1::TestIamPermissionsRequest const& request) {
        return child_->TestIamPermissions(context, request);
      },
      context, request, __func__, tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigquery_datapolicies_v1_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
