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

#include "google/cloud/dlp/dlp_connection_idempotency_policy.h"
#include "absl/memory/memory.h"
#include <memory>

namespace google {
namespace cloud {
namespace dlp {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::internal::Idempotency;

DlpServiceConnectionIdempotencyPolicy::
    ~DlpServiceConnectionIdempotencyPolicy() = default;

namespace {
class DefaultDlpServiceConnectionIdempotencyPolicy
    : public DlpServiceConnectionIdempotencyPolicy {
 public:
  ~DefaultDlpServiceConnectionIdempotencyPolicy() override = default;

  /// Create a new copy of this object.
  std::unique_ptr<DlpServiceConnectionIdempotencyPolicy> clone()
      const override {
    return absl::make_unique<DefaultDlpServiceConnectionIdempotencyPolicy>(
        *this);
  }

  Idempotency InspectContent(
      google::privacy::dlp::v2::InspectContentRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency RedactImage(
      google::privacy::dlp::v2::RedactImageRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency DeidentifyContent(
      google::privacy::dlp::v2::DeidentifyContentRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency ReidentifyContent(
      google::privacy::dlp::v2::ReidentifyContentRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency ListInfoTypes(
      google::privacy::dlp::v2::ListInfoTypesRequest const&) override {
    return Idempotency::kIdempotent;
  }

  Idempotency CreateInspectTemplate(
      google::privacy::dlp::v2::CreateInspectTemplateRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency UpdateInspectTemplate(
      google::privacy::dlp::v2::UpdateInspectTemplateRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency GetInspectTemplate(
      google::privacy::dlp::v2::GetInspectTemplateRequest const&) override {
    return Idempotency::kIdempotent;
  }

  Idempotency ListInspectTemplates(
      google::privacy::dlp::v2::ListInspectTemplatesRequest) override {
    return Idempotency::kIdempotent;
  }

  Idempotency DeleteInspectTemplate(
      google::privacy::dlp::v2::DeleteInspectTemplateRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency CreateDeidentifyTemplate(
      google::privacy::dlp::v2::CreateDeidentifyTemplateRequest const&)
      override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency UpdateDeidentifyTemplate(
      google::privacy::dlp::v2::UpdateDeidentifyTemplateRequest const&)
      override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency GetDeidentifyTemplate(
      google::privacy::dlp::v2::GetDeidentifyTemplateRequest const&) override {
    return Idempotency::kIdempotent;
  }

  Idempotency ListDeidentifyTemplates(
      google::privacy::dlp::v2::ListDeidentifyTemplatesRequest) override {
    return Idempotency::kIdempotent;
  }

  Idempotency DeleteDeidentifyTemplate(
      google::privacy::dlp::v2::DeleteDeidentifyTemplateRequest const&)
      override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency CreateJobTrigger(
      google::privacy::dlp::v2::CreateJobTriggerRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency UpdateJobTrigger(
      google::privacy::dlp::v2::UpdateJobTriggerRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency HybridInspectJobTrigger(
      google::privacy::dlp::v2::HybridInspectJobTriggerRequest const&)
      override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency GetJobTrigger(
      google::privacy::dlp::v2::GetJobTriggerRequest const&) override {
    return Idempotency::kIdempotent;
  }

  Idempotency ListJobTriggers(
      google::privacy::dlp::v2::ListJobTriggersRequest) override {
    return Idempotency::kIdempotent;
  }

  Idempotency DeleteJobTrigger(
      google::privacy::dlp::v2::DeleteJobTriggerRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency ActivateJobTrigger(
      google::privacy::dlp::v2::ActivateJobTriggerRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency CreateDlpJob(
      google::privacy::dlp::v2::CreateDlpJobRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency ListDlpJobs(
      google::privacy::dlp::v2::ListDlpJobsRequest) override {
    return Idempotency::kIdempotent;
  }

  Idempotency GetDlpJob(
      google::privacy::dlp::v2::GetDlpJobRequest const&) override {
    return Idempotency::kIdempotent;
  }

  Idempotency DeleteDlpJob(
      google::privacy::dlp::v2::DeleteDlpJobRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency CancelDlpJob(
      google::privacy::dlp::v2::CancelDlpJobRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency CreateStoredInfoType(
      google::privacy::dlp::v2::CreateStoredInfoTypeRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency UpdateStoredInfoType(
      google::privacy::dlp::v2::UpdateStoredInfoTypeRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency GetStoredInfoType(
      google::privacy::dlp::v2::GetStoredInfoTypeRequest const&) override {
    return Idempotency::kIdempotent;
  }

  Idempotency ListStoredInfoTypes(
      google::privacy::dlp::v2::ListStoredInfoTypesRequest) override {
    return Idempotency::kIdempotent;
  }

  Idempotency DeleteStoredInfoType(
      google::privacy::dlp::v2::DeleteStoredInfoTypeRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency HybridInspectDlpJob(
      google::privacy::dlp::v2::HybridInspectDlpJobRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency FinishDlpJob(
      google::privacy::dlp::v2::FinishDlpJobRequest const&) override {
    return Idempotency::kNonIdempotent;
  }
};
}  // namespace

std::unique_ptr<DlpServiceConnectionIdempotencyPolicy>
MakeDefaultDlpServiceConnectionIdempotencyPolicy() {
  return absl::make_unique<DefaultDlpServiceConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dlp
}  // namespace cloud
}  // namespace google
