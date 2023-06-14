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

#include "google/cloud/speech/v2/speech_connection.h"
#include "google/cloud/speech/v2/internal/speech_connection_impl.h"
#include "google/cloud/speech/v2/internal/speech_option_defaults.h"
#include "google/cloud/speech/v2/internal/speech_stub_factory.h"
#include "google/cloud/speech/v2/internal/speech_tracing_connection.h"
#include "google/cloud/speech/v2/speech_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace speech_v2 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

SpeechConnection::~SpeechConnection() = default;

future<StatusOr<google::cloud::speech::v2::Recognizer>>
SpeechConnection::CreateRecognizer(
    google::cloud::speech::v2::CreateRecognizerRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::speech::v2::Recognizer>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::cloud::speech::v2::Recognizer>
SpeechConnection::ListRecognizers(
    google::cloud::speech::v2::
        ListRecognizersRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::speech::v2::Recognizer>>();
}

StatusOr<google::cloud::speech::v2::Recognizer> SpeechConnection::GetRecognizer(
    google::cloud::speech::v2::GetRecognizerRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::speech::v2::Recognizer>>
SpeechConnection::UpdateRecognizer(
    google::cloud::speech::v2::UpdateRecognizerRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::speech::v2::Recognizer>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::speech::v2::Recognizer>>
SpeechConnection::DeleteRecognizer(
    google::cloud::speech::v2::DeleteRecognizerRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::speech::v2::Recognizer>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::speech::v2::Recognizer>>
SpeechConnection::UndeleteRecognizer(
    google::cloud::speech::v2::UndeleteRecognizerRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::speech::v2::Recognizer>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::speech::v2::RecognizeResponse>
SpeechConnection::Recognize(
    google::cloud::speech::v2::RecognizeRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

std::unique_ptr<::google::cloud::AsyncStreamingReadWriteRpc<
    google::cloud::speech::v2::StreamingRecognizeRequest,
    google::cloud::speech::v2::StreamingRecognizeResponse>>
SpeechConnection::AsyncStreamingRecognize() {
  return std::make_unique<
      ::google::cloud::internal::AsyncStreamingReadWriteRpcError<
          google::cloud::speech::v2::StreamingRecognizeRequest,
          google::cloud::speech::v2::StreamingRecognizeResponse>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::speech::v2::BatchRecognizeResponse>>
SpeechConnection::BatchRecognize(
    google::cloud::speech::v2::BatchRecognizeRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::speech::v2::BatchRecognizeResponse>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::speech::v2::Config> SpeechConnection::GetConfig(
    google::cloud::speech::v2::GetConfigRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::speech::v2::Config> SpeechConnection::UpdateConfig(
    google::cloud::speech::v2::UpdateConfigRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::speech::v2::CustomClass>>
SpeechConnection::CreateCustomClass(
    google::cloud::speech::v2::CreateCustomClassRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::speech::v2::CustomClass>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::cloud::speech::v2::CustomClass>
SpeechConnection::ListCustomClasses(
    google::cloud::speech::v2::
        ListCustomClassesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::speech::v2::CustomClass>>();
}

StatusOr<google::cloud::speech::v2::CustomClass>
SpeechConnection::GetCustomClass(
    google::cloud::speech::v2::GetCustomClassRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::speech::v2::CustomClass>>
SpeechConnection::UpdateCustomClass(
    google::cloud::speech::v2::UpdateCustomClassRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::speech::v2::CustomClass>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::speech::v2::CustomClass>>
SpeechConnection::DeleteCustomClass(
    google::cloud::speech::v2::DeleteCustomClassRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::speech::v2::CustomClass>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::speech::v2::CustomClass>>
SpeechConnection::UndeleteCustomClass(
    google::cloud::speech::v2::UndeleteCustomClassRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::speech::v2::CustomClass>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::speech::v2::PhraseSet>>
SpeechConnection::CreatePhraseSet(
    google::cloud::speech::v2::CreatePhraseSetRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::speech::v2::PhraseSet>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::cloud::speech::v2::PhraseSet>
SpeechConnection::ListPhraseSets(
    google::cloud::speech::v2::
        ListPhraseSetsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::speech::v2::PhraseSet>>();
}

StatusOr<google::cloud::speech::v2::PhraseSet> SpeechConnection::GetPhraseSet(
    google::cloud::speech::v2::GetPhraseSetRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::speech::v2::PhraseSet>>
SpeechConnection::UpdatePhraseSet(
    google::cloud::speech::v2::UpdatePhraseSetRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::speech::v2::PhraseSet>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::speech::v2::PhraseSet>>
SpeechConnection::DeletePhraseSet(
    google::cloud::speech::v2::DeletePhraseSetRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::speech::v2::PhraseSet>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::speech::v2::PhraseSet>>
SpeechConnection::UndeletePhraseSet(
    google::cloud::speech::v2::UndeletePhraseSetRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::speech::v2::PhraseSet>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

std::shared_ptr<SpeechConnection> MakeSpeechConnection(ExperimentalTag,
                                                       Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 UnifiedCredentialsOptionList,
                                 SpeechPolicyOptionList>(options, __func__);
  options = speech_v2_internal::SpeechDefaultOptions(std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto stub =
      speech_v2_internal::CreateDefaultSpeechStub(background->cq(), options);
  return speech_v2_internal::MakeSpeechTracingConnection(
      std::make_shared<speech_v2_internal::SpeechConnectionImpl>(
          std::move(background), std::move(stub), std::move(options)));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace speech_v2
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
