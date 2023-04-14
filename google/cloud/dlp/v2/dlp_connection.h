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
// source: google/privacy/dlp/v2/dlp.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DLP_V2_DLP_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DLP_V2_DLP_CONNECTION_H

#include "google/cloud/dlp/v2/dlp_connection_idempotency_policy.h"
#include "google/cloud/dlp/v2/internal/dlp_retry_traits.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/privacy/dlp/v2/dlp.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace dlp_v2 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using DlpServiceRetryPolicy = ::google::cloud::internal::TraitBasedRetryPolicy<
    dlp_v2_internal::DlpServiceRetryTraits>;

using DlpServiceLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        dlp_v2_internal::DlpServiceRetryTraits>;

using DlpServiceLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        dlp_v2_internal::DlpServiceRetryTraits>;

/**
 * The `DlpServiceConnection` object for `DlpServiceClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `DlpServiceClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `DlpServiceClient`.
 *
 * To create a concrete instance, see `MakeDlpServiceConnection()`.
 *
 * For mocking, see `dlp_v2_mocks::MockDlpServiceConnection`.
 */
class DlpServiceConnection {
 public:
  virtual ~DlpServiceConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StatusOr<google::privacy::dlp::v2::InspectContentResponse>
  InspectContent(
      google::privacy::dlp::v2::InspectContentRequest const& request);

  virtual StatusOr<google::privacy::dlp::v2::RedactImageResponse> RedactImage(
      google::privacy::dlp::v2::RedactImageRequest const& request);

  virtual StatusOr<google::privacy::dlp::v2::DeidentifyContentResponse>
  DeidentifyContent(
      google::privacy::dlp::v2::DeidentifyContentRequest const& request);

  virtual StatusOr<google::privacy::dlp::v2::ReidentifyContentResponse>
  ReidentifyContent(
      google::privacy::dlp::v2::ReidentifyContentRequest const& request);

  virtual StatusOr<google::privacy::dlp::v2::ListInfoTypesResponse>
  ListInfoTypes(google::privacy::dlp::v2::ListInfoTypesRequest const& request);

  virtual StatusOr<google::privacy::dlp::v2::InspectTemplate>
  CreateInspectTemplate(
      google::privacy::dlp::v2::CreateInspectTemplateRequest const& request);

  virtual StatusOr<google::privacy::dlp::v2::InspectTemplate>
  UpdateInspectTemplate(
      google::privacy::dlp::v2::UpdateInspectTemplateRequest const& request);

  virtual StatusOr<google::privacy::dlp::v2::InspectTemplate>
  GetInspectTemplate(
      google::privacy::dlp::v2::GetInspectTemplateRequest const& request);

  virtual StreamRange<google::privacy::dlp::v2::InspectTemplate>
  ListInspectTemplates(
      google::privacy::dlp::v2::ListInspectTemplatesRequest request);

  virtual Status DeleteInspectTemplate(
      google::privacy::dlp::v2::DeleteInspectTemplateRequest const& request);

  virtual StatusOr<google::privacy::dlp::v2::DeidentifyTemplate>
  CreateDeidentifyTemplate(
      google::privacy::dlp::v2::CreateDeidentifyTemplateRequest const& request);

  virtual StatusOr<google::privacy::dlp::v2::DeidentifyTemplate>
  UpdateDeidentifyTemplate(
      google::privacy::dlp::v2::UpdateDeidentifyTemplateRequest const& request);

  virtual StatusOr<google::privacy::dlp::v2::DeidentifyTemplate>
  GetDeidentifyTemplate(
      google::privacy::dlp::v2::GetDeidentifyTemplateRequest const& request);

  virtual StreamRange<google::privacy::dlp::v2::DeidentifyTemplate>
  ListDeidentifyTemplates(
      google::privacy::dlp::v2::ListDeidentifyTemplatesRequest request);

  virtual Status DeleteDeidentifyTemplate(
      google::privacy::dlp::v2::DeleteDeidentifyTemplateRequest const& request);

  virtual StatusOr<google::privacy::dlp::v2::JobTrigger> CreateJobTrigger(
      google::privacy::dlp::v2::CreateJobTriggerRequest const& request);

  virtual StatusOr<google::privacy::dlp::v2::JobTrigger> UpdateJobTrigger(
      google::privacy::dlp::v2::UpdateJobTriggerRequest const& request);

  virtual StatusOr<google::privacy::dlp::v2::HybridInspectResponse>
  HybridInspectJobTrigger(
      google::privacy::dlp::v2::HybridInspectJobTriggerRequest const& request);

  virtual StatusOr<google::privacy::dlp::v2::JobTrigger> GetJobTrigger(
      google::privacy::dlp::v2::GetJobTriggerRequest const& request);

  virtual StreamRange<google::privacy::dlp::v2::JobTrigger> ListJobTriggers(
      google::privacy::dlp::v2::ListJobTriggersRequest request);

  virtual Status DeleteJobTrigger(
      google::privacy::dlp::v2::DeleteJobTriggerRequest const& request);

  virtual StatusOr<google::privacy::dlp::v2::DlpJob> ActivateJobTrigger(
      google::privacy::dlp::v2::ActivateJobTriggerRequest const& request);

  virtual StatusOr<google::privacy::dlp::v2::DlpJob> CreateDlpJob(
      google::privacy::dlp::v2::CreateDlpJobRequest const& request);

  virtual StreamRange<google::privacy::dlp::v2::DlpJob> ListDlpJobs(
      google::privacy::dlp::v2::ListDlpJobsRequest request);

  virtual StatusOr<google::privacy::dlp::v2::DlpJob> GetDlpJob(
      google::privacy::dlp::v2::GetDlpJobRequest const& request);

  virtual Status DeleteDlpJob(
      google::privacy::dlp::v2::DeleteDlpJobRequest const& request);

  virtual Status CancelDlpJob(
      google::privacy::dlp::v2::CancelDlpJobRequest const& request);

  virtual StatusOr<google::privacy::dlp::v2::StoredInfoType>
  CreateStoredInfoType(
      google::privacy::dlp::v2::CreateStoredInfoTypeRequest const& request);

  virtual StatusOr<google::privacy::dlp::v2::StoredInfoType>
  UpdateStoredInfoType(
      google::privacy::dlp::v2::UpdateStoredInfoTypeRequest const& request);

  virtual StatusOr<google::privacy::dlp::v2::StoredInfoType> GetStoredInfoType(
      google::privacy::dlp::v2::GetStoredInfoTypeRequest const& request);

  virtual StreamRange<google::privacy::dlp::v2::StoredInfoType>
  ListStoredInfoTypes(
      google::privacy::dlp::v2::ListStoredInfoTypesRequest request);

  virtual Status DeleteStoredInfoType(
      google::privacy::dlp::v2::DeleteStoredInfoTypeRequest const& request);

  virtual StatusOr<google::privacy::dlp::v2::HybridInspectResponse>
  HybridInspectDlpJob(
      google::privacy::dlp::v2::HybridInspectDlpJobRequest const& request);

  virtual Status FinishDlpJob(
      google::privacy::dlp::v2::FinishDlpJobRequest const& request);
};

/**
 * A factory function to construct an object of type `DlpServiceConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of DlpServiceClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `DlpServiceConnection`. Expected options are any of the types in
 * the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::dlp_v2::DlpServicePolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param options (optional) Configure the `DlpServiceConnection` created by
 * this function.
 */
std::shared_ptr<DlpServiceConnection> MakeDlpServiceConnection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dlp_v2
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DLP_V2_DLP_CONNECTION_H
