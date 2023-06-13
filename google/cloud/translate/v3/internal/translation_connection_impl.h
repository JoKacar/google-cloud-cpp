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
// source: google/cloud/translate/v3/translation_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TRANSLATE_V3_INTERNAL_TRANSLATION_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TRANSLATE_V3_INTERNAL_TRANSLATION_CONNECTION_IMPL_H

#include "google/cloud/translate/v3/internal/translation_retry_traits.h"
#include "google/cloud/translate/v3/internal/translation_stub.h"
#include "google/cloud/translate/v3/translation_connection.h"
#include "google/cloud/translate/v3/translation_connection_idempotency_policy.h"
#include "google/cloud/translate/v3/translation_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace translate_v3_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class TranslationServiceConnectionImpl
    : public translate_v3::TranslationServiceConnection {
 public:
  ~TranslationServiceConnectionImpl() override = default;

  TranslationServiceConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<translate_v3_internal::TranslationServiceStub> stub,
      Options options);

  Options options() override { return options_; }

  StatusOr<google::cloud::translation::v3::TranslateTextResponse> TranslateText(
      google::cloud::translation::v3::TranslateTextRequest const& request)
      override;

  StatusOr<google::cloud::translation::v3::DetectLanguageResponse>
  DetectLanguage(google::cloud::translation::v3::DetectLanguageRequest const&
                     request) override;

  StatusOr<google::cloud::translation::v3::SupportedLanguages>
  GetSupportedLanguages(
      google::cloud::translation::v3::GetSupportedLanguagesRequest const&
          request) override;

  StatusOr<google::cloud::translation::v3::TranslateDocumentResponse>
  TranslateDocument(
      google::cloud::translation::v3::TranslateDocumentRequest const& request)
      override;

  future<StatusOr<google::cloud::translation::v3::BatchTranslateResponse>>
  BatchTranslateText(
      google::cloud::translation::v3::BatchTranslateTextRequest const& request)
      override;

  future<
      StatusOr<google::cloud::translation::v3::BatchTranslateDocumentResponse>>
  BatchTranslateDocument(
      google::cloud::translation::v3::BatchTranslateDocumentRequest const&
          request) override;

  future<StatusOr<google::cloud::translation::v3::Glossary>> CreateGlossary(
      google::cloud::translation::v3::CreateGlossaryRequest const& request)
      override;

  StreamRange<google::cloud::translation::v3::Glossary> ListGlossaries(
      google::cloud::translation::v3::ListGlossariesRequest request) override;

  StatusOr<google::cloud::translation::v3::Glossary> GetGlossary(
      google::cloud::translation::v3::GetGlossaryRequest const& request)
      override;

  future<StatusOr<google::cloud::translation::v3::DeleteGlossaryResponse>>
  DeleteGlossary(google::cloud::translation::v3::DeleteGlossaryRequest const&
                     request) override;

 private:
  std::unique_ptr<translate_v3::TranslationServiceRetryPolicy> retry_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<translate_v3::TranslationServiceRetryPolicyOption>()) {
      return options.get<translate_v3::TranslationServiceRetryPolicyOption>()
          ->clone();
    }
    return options_.get<translate_v3::TranslationServiceRetryPolicyOption>()
        ->clone();
  }

  std::unique_ptr<BackoffPolicy> backoff_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<translate_v3::TranslationServiceBackoffPolicyOption>()) {
      return options.get<translate_v3::TranslationServiceBackoffPolicyOption>()
          ->clone();
    }
    return options_.get<translate_v3::TranslationServiceBackoffPolicyOption>()
        ->clone();
  }

  std::unique_ptr<translate_v3::TranslationServiceConnectionIdempotencyPolicy>
  idempotency_policy() {
    auto const& options = internal::CurrentOptions();
    if (options
            .has<translate_v3::
                     TranslationServiceConnectionIdempotencyPolicyOption>()) {
      return options
          .get<translate_v3::
                   TranslationServiceConnectionIdempotencyPolicyOption>()
          ->clone();
    }
    return options_
        .get<
            translate_v3::TranslationServiceConnectionIdempotencyPolicyOption>()
        ->clone();
  }

  std::unique_ptr<PollingPolicy> polling_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<translate_v3::TranslationServicePollingPolicyOption>()) {
      return options.get<translate_v3::TranslationServicePollingPolicyOption>()
          ->clone();
    }
    return options_.get<translate_v3::TranslationServicePollingPolicyOption>()
        ->clone();
  }

  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<translate_v3_internal::TranslationServiceStub> stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace translate_v3_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TRANSLATE_V3_INTERNAL_TRANSLATION_CONNECTION_IMPL_H
