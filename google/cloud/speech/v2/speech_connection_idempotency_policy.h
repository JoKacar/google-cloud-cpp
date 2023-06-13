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
// source: google/cloud/speech/v2/cloud_speech.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SPEECH_V2_SPEECH_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SPEECH_V2_SPEECH_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/internal/retry_policy.h"
#include "google/cloud/version.h"
#include <google/cloud/speech/v2/cloud_speech.grpc.pb.h>
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace speech_v2 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class SpeechConnectionIdempotencyPolicy {
 public:
  virtual ~SpeechConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<SpeechConnectionIdempotencyPolicy> clone() const;

  virtual google::cloud::Idempotency CreateRecognizer(
      google::cloud::speech::v2::CreateRecognizerRequest const& request);

  virtual google::cloud::Idempotency ListRecognizers(
      google::cloud::speech::v2::ListRecognizersRequest request);

  virtual google::cloud::Idempotency GetRecognizer(
      google::cloud::speech::v2::GetRecognizerRequest const& request);

  virtual google::cloud::Idempotency UpdateRecognizer(
      google::cloud::speech::v2::UpdateRecognizerRequest const& request);

  virtual google::cloud::Idempotency DeleteRecognizer(
      google::cloud::speech::v2::DeleteRecognizerRequest const& request);

  virtual google::cloud::Idempotency UndeleteRecognizer(
      google::cloud::speech::v2::UndeleteRecognizerRequest const& request);

  virtual google::cloud::Idempotency Recognize(
      google::cloud::speech::v2::RecognizeRequest const& request);

  virtual google::cloud::Idempotency BatchRecognize(
      google::cloud::speech::v2::BatchRecognizeRequest const& request);

  virtual google::cloud::Idempotency GetConfig(
      google::cloud::speech::v2::GetConfigRequest const& request);

  virtual google::cloud::Idempotency UpdateConfig(
      google::cloud::speech::v2::UpdateConfigRequest const& request);

  virtual google::cloud::Idempotency CreateCustomClass(
      google::cloud::speech::v2::CreateCustomClassRequest const& request);

  virtual google::cloud::Idempotency ListCustomClasses(
      google::cloud::speech::v2::ListCustomClassesRequest request);

  virtual google::cloud::Idempotency GetCustomClass(
      google::cloud::speech::v2::GetCustomClassRequest const& request);

  virtual google::cloud::Idempotency UpdateCustomClass(
      google::cloud::speech::v2::UpdateCustomClassRequest const& request);

  virtual google::cloud::Idempotency DeleteCustomClass(
      google::cloud::speech::v2::DeleteCustomClassRequest const& request);

  virtual google::cloud::Idempotency UndeleteCustomClass(
      google::cloud::speech::v2::UndeleteCustomClassRequest const& request);

  virtual google::cloud::Idempotency CreatePhraseSet(
      google::cloud::speech::v2::CreatePhraseSetRequest const& request);

  virtual google::cloud::Idempotency ListPhraseSets(
      google::cloud::speech::v2::ListPhraseSetsRequest request);

  virtual google::cloud::Idempotency GetPhraseSet(
      google::cloud::speech::v2::GetPhraseSetRequest const& request);

  virtual google::cloud::Idempotency UpdatePhraseSet(
      google::cloud::speech::v2::UpdatePhraseSetRequest const& request);

  virtual google::cloud::Idempotency DeletePhraseSet(
      google::cloud::speech::v2::DeletePhraseSetRequest const& request);

  virtual google::cloud::Idempotency UndeletePhraseSet(
      google::cloud::speech::v2::UndeletePhraseSetRequest const& request);
};

std::unique_ptr<SpeechConnectionIdempotencyPolicy>
MakeDefaultSpeechConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace speech_v2
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SPEECH_V2_SPEECH_CONNECTION_IDEMPOTENCY_POLICY_H
