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

#include "google/cloud/speech/v2/internal/speech_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace speech_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

SpeechTracingConnection::SpeechTracingConnection(
    std::shared_ptr<speech_v2::SpeechConnection> child)
    : child_(std::move(child)) {}

future<StatusOr<google::cloud::speech::v2::Recognizer>>
SpeechTracingConnection::CreateRecognizer(
    google::cloud::speech::v2::CreateRecognizerRequest const& request) {
  auto span =
      internal::MakeSpan("speech_v2::SpeechConnection::CreateRecognizer");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->CreateRecognizer(request));
}

StreamRange<google::cloud::speech::v2::Recognizer>
SpeechTracingConnection::ListRecognizers(
    google::cloud::speech::v2::ListRecognizersRequest request) {
  auto span =
      internal::MakeSpan("speech_v2::SpeechConnection::ListRecognizers");
  auto scope = opentelemetry::trace::Scope(span);
  auto sr = child_->ListRecognizers(std::move(request));
  return internal::MakeTracedStreamRange<google::cloud::speech::v2::Recognizer>(
      std::move(span), std::move(sr));
}

StatusOr<google::cloud::speech::v2::Recognizer>
SpeechTracingConnection::GetRecognizer(
    google::cloud::speech::v2::GetRecognizerRequest const& request) {
  auto span = internal::MakeSpan("speech_v2::SpeechConnection::GetRecognizer");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetRecognizer(request));
}

future<StatusOr<google::cloud::speech::v2::Recognizer>>
SpeechTracingConnection::UpdateRecognizer(
    google::cloud::speech::v2::UpdateRecognizerRequest const& request) {
  auto span =
      internal::MakeSpan("speech_v2::SpeechConnection::UpdateRecognizer");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->UpdateRecognizer(request));
}

future<StatusOr<google::cloud::speech::v2::Recognizer>>
SpeechTracingConnection::DeleteRecognizer(
    google::cloud::speech::v2::DeleteRecognizerRequest const& request) {
  auto span =
      internal::MakeSpan("speech_v2::SpeechConnection::DeleteRecognizer");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->DeleteRecognizer(request));
}

future<StatusOr<google::cloud::speech::v2::Recognizer>>
SpeechTracingConnection::UndeleteRecognizer(
    google::cloud::speech::v2::UndeleteRecognizerRequest const& request) {
  auto span =
      internal::MakeSpan("speech_v2::SpeechConnection::UndeleteRecognizer");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span),
                           child_->UndeleteRecognizer(request));
}

StatusOr<google::cloud::speech::v2::RecognizeResponse>
SpeechTracingConnection::Recognize(
    google::cloud::speech::v2::RecognizeRequest const& request) {
  auto span = internal::MakeSpan("speech_v2::SpeechConnection::Recognize");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->Recognize(request));
}

std::unique_ptr<::google::cloud::AsyncStreamingReadWriteRpc<
    google::cloud::speech::v2::StreamingRecognizeRequest,
    google::cloud::speech::v2::StreamingRecognizeResponse>>
SpeechTracingConnection::AsyncStreamingRecognize() {
  return child_->AsyncStreamingRecognize();
}

future<StatusOr<google::cloud::speech::v2::BatchRecognizeResponse>>
SpeechTracingConnection::BatchRecognize(
    google::cloud::speech::v2::BatchRecognizeRequest const& request) {
  auto span = internal::MakeSpan("speech_v2::SpeechConnection::BatchRecognize");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->BatchRecognize(request));
}

StatusOr<google::cloud::speech::v2::Config> SpeechTracingConnection::GetConfig(
    google::cloud::speech::v2::GetConfigRequest const& request) {
  auto span = internal::MakeSpan("speech_v2::SpeechConnection::GetConfig");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetConfig(request));
}

StatusOr<google::cloud::speech::v2::Config>
SpeechTracingConnection::UpdateConfig(
    google::cloud::speech::v2::UpdateConfigRequest const& request) {
  auto span = internal::MakeSpan("speech_v2::SpeechConnection::UpdateConfig");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->UpdateConfig(request));
}

future<StatusOr<google::cloud::speech::v2::CustomClass>>
SpeechTracingConnection::CreateCustomClass(
    google::cloud::speech::v2::CreateCustomClassRequest const& request) {
  auto span =
      internal::MakeSpan("speech_v2::SpeechConnection::CreateCustomClass");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->CreateCustomClass(request));
}

StreamRange<google::cloud::speech::v2::CustomClass>
SpeechTracingConnection::ListCustomClasses(
    google::cloud::speech::v2::ListCustomClassesRequest request) {
  auto span =
      internal::MakeSpan("speech_v2::SpeechConnection::ListCustomClasses");
  auto scope = opentelemetry::trace::Scope(span);
  auto sr = child_->ListCustomClasses(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::speech::v2::CustomClass>(std::move(span), std::move(sr));
}

StatusOr<google::cloud::speech::v2::CustomClass>
SpeechTracingConnection::GetCustomClass(
    google::cloud::speech::v2::GetCustomClassRequest const& request) {
  auto span = internal::MakeSpan("speech_v2::SpeechConnection::GetCustomClass");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetCustomClass(request));
}

future<StatusOr<google::cloud::speech::v2::CustomClass>>
SpeechTracingConnection::UpdateCustomClass(
    google::cloud::speech::v2::UpdateCustomClassRequest const& request) {
  auto span =
      internal::MakeSpan("speech_v2::SpeechConnection::UpdateCustomClass");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->UpdateCustomClass(request));
}

future<StatusOr<google::cloud::speech::v2::CustomClass>>
SpeechTracingConnection::DeleteCustomClass(
    google::cloud::speech::v2::DeleteCustomClassRequest const& request) {
  auto span =
      internal::MakeSpan("speech_v2::SpeechConnection::DeleteCustomClass");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->DeleteCustomClass(request));
}

future<StatusOr<google::cloud::speech::v2::CustomClass>>
SpeechTracingConnection::UndeleteCustomClass(
    google::cloud::speech::v2::UndeleteCustomClassRequest const& request) {
  auto span =
      internal::MakeSpan("speech_v2::SpeechConnection::UndeleteCustomClass");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span),
                           child_->UndeleteCustomClass(request));
}

future<StatusOr<google::cloud::speech::v2::PhraseSet>>
SpeechTracingConnection::CreatePhraseSet(
    google::cloud::speech::v2::CreatePhraseSetRequest const& request) {
  auto span =
      internal::MakeSpan("speech_v2::SpeechConnection::CreatePhraseSet");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->CreatePhraseSet(request));
}

StreamRange<google::cloud::speech::v2::PhraseSet>
SpeechTracingConnection::ListPhraseSets(
    google::cloud::speech::v2::ListPhraseSetsRequest request) {
  auto span = internal::MakeSpan("speech_v2::SpeechConnection::ListPhraseSets");
  auto scope = opentelemetry::trace::Scope(span);
  auto sr = child_->ListPhraseSets(std::move(request));
  return internal::MakeTracedStreamRange<google::cloud::speech::v2::PhraseSet>(
      std::move(span), std::move(sr));
}

StatusOr<google::cloud::speech::v2::PhraseSet>
SpeechTracingConnection::GetPhraseSet(
    google::cloud::speech::v2::GetPhraseSetRequest const& request) {
  auto span = internal::MakeSpan("speech_v2::SpeechConnection::GetPhraseSet");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetPhraseSet(request));
}

future<StatusOr<google::cloud::speech::v2::PhraseSet>>
SpeechTracingConnection::UpdatePhraseSet(
    google::cloud::speech::v2::UpdatePhraseSetRequest const& request) {
  auto span =
      internal::MakeSpan("speech_v2::SpeechConnection::UpdatePhraseSet");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->UpdatePhraseSet(request));
}

future<StatusOr<google::cloud::speech::v2::PhraseSet>>
SpeechTracingConnection::DeletePhraseSet(
    google::cloud::speech::v2::DeletePhraseSetRequest const& request) {
  auto span =
      internal::MakeSpan("speech_v2::SpeechConnection::DeletePhraseSet");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->DeletePhraseSet(request));
}

future<StatusOr<google::cloud::speech::v2::PhraseSet>>
SpeechTracingConnection::UndeletePhraseSet(
    google::cloud::speech::v2::UndeletePhraseSetRequest const& request) {
  auto span =
      internal::MakeSpan("speech_v2::SpeechConnection::UndeletePhraseSet");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->UndeletePhraseSet(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<speech_v2::SpeechConnection> MakeSpeechTracingConnection(
    std::shared_ptr<speech_v2::SpeechConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<SpeechTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace speech_v2_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
