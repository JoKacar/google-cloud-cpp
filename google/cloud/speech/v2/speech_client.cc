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

#include "google/cloud/speech/v2/speech_client.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace speech_v2 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

SpeechClient::SpeechClient(ExperimentalTag,
                           std::shared_ptr<SpeechConnection> connection,
                           Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
SpeechClient::~SpeechClient() = default;

future<StatusOr<google::cloud::speech::v2::Recognizer>>
SpeechClient::CreateRecognizer(
    std::string const& parent,
    google::cloud::speech::v2::Recognizer const& recognizer,
    std::string const& recognizer_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::speech::v2::CreateRecognizerRequest request;
  request.set_parent(parent);
  *request.mutable_recognizer() = recognizer;
  request.set_recognizer_id(recognizer_id);
  return connection_->CreateRecognizer(request);
}

future<StatusOr<google::cloud::speech::v2::Recognizer>>
SpeechClient::CreateRecognizer(
    google::cloud::speech::v2::CreateRecognizerRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateRecognizer(request);
}

StreamRange<google::cloud::speech::v2::Recognizer>
SpeechClient::ListRecognizers(std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::speech::v2::ListRecognizersRequest request;
  request.set_parent(parent);
  return connection_->ListRecognizers(request);
}

StreamRange<google::cloud::speech::v2::Recognizer>
SpeechClient::ListRecognizers(
    google::cloud::speech::v2::ListRecognizersRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListRecognizers(std::move(request));
}

StatusOr<google::cloud::speech::v2::Recognizer> SpeechClient::GetRecognizer(
    std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::speech::v2::GetRecognizerRequest request;
  request.set_name(name);
  return connection_->GetRecognizer(request);
}

StatusOr<google::cloud::speech::v2::Recognizer> SpeechClient::GetRecognizer(
    google::cloud::speech::v2::GetRecognizerRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetRecognizer(request);
}

future<StatusOr<google::cloud::speech::v2::Recognizer>>
SpeechClient::UpdateRecognizer(
    google::cloud::speech::v2::Recognizer const& recognizer,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::speech::v2::UpdateRecognizerRequest request;
  *request.mutable_recognizer() = recognizer;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateRecognizer(request);
}

future<StatusOr<google::cloud::speech::v2::Recognizer>>
SpeechClient::UpdateRecognizer(
    google::cloud::speech::v2::UpdateRecognizerRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateRecognizer(request);
}

future<StatusOr<google::cloud::speech::v2::Recognizer>>
SpeechClient::DeleteRecognizer(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::speech::v2::DeleteRecognizerRequest request;
  request.set_name(name);
  return connection_->DeleteRecognizer(request);
}

future<StatusOr<google::cloud::speech::v2::Recognizer>>
SpeechClient::DeleteRecognizer(
    google::cloud::speech::v2::DeleteRecognizerRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteRecognizer(request);
}

future<StatusOr<google::cloud::speech::v2::Recognizer>>
SpeechClient::UndeleteRecognizer(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::speech::v2::UndeleteRecognizerRequest request;
  request.set_name(name);
  return connection_->UndeleteRecognizer(request);
}

future<StatusOr<google::cloud::speech::v2::Recognizer>>
SpeechClient::UndeleteRecognizer(
    google::cloud::speech::v2::UndeleteRecognizerRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UndeleteRecognizer(request);
}

StatusOr<google::cloud::speech::v2::RecognizeResponse> SpeechClient::Recognize(
    std::string const& recognizer,
    google::cloud::speech::v2::RecognitionConfig const& config,
    google::protobuf::FieldMask const& config_mask, std::string const& content,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::speech::v2::RecognizeRequest request;
  request.set_recognizer(recognizer);
  *request.mutable_config() = config;
  *request.mutable_config_mask() = config_mask;
  request.set_content(content);
  return connection_->Recognize(request);
}

StatusOr<google::cloud::speech::v2::RecognizeResponse> SpeechClient::Recognize(
    google::cloud::speech::v2::RecognizeRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->Recognize(request);
}

std::unique_ptr<::google::cloud::AsyncStreamingReadWriteRpc<
    google::cloud::speech::v2::StreamingRecognizeRequest,
    google::cloud::speech::v2::StreamingRecognizeResponse>>
SpeechClient::AsyncStreamingRecognize(Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->AsyncStreamingRecognize();
}

future<StatusOr<google::cloud::speech::v2::BatchRecognizeResponse>>
SpeechClient::BatchRecognize(
    std::string const& recognizer,
    google::cloud::speech::v2::RecognitionConfig const& config,
    google::protobuf::FieldMask const& config_mask,
    std::vector<google::cloud::speech::v2::BatchRecognizeFileMetadata> const&
        files,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::speech::v2::BatchRecognizeRequest request;
  request.set_recognizer(recognizer);
  *request.mutable_config() = config;
  *request.mutable_config_mask() = config_mask;
  *request.mutable_files() = {files.begin(), files.end()};
  return connection_->BatchRecognize(request);
}

future<StatusOr<google::cloud::speech::v2::BatchRecognizeResponse>>
SpeechClient::BatchRecognize(
    google::cloud::speech::v2::BatchRecognizeRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->BatchRecognize(request);
}

StatusOr<google::cloud::speech::v2::Config> SpeechClient::GetConfig(
    std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::speech::v2::GetConfigRequest request;
  request.set_name(name);
  return connection_->GetConfig(request);
}

StatusOr<google::cloud::speech::v2::Config> SpeechClient::GetConfig(
    google::cloud::speech::v2::GetConfigRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetConfig(request);
}

StatusOr<google::cloud::speech::v2::Config> SpeechClient::UpdateConfig(
    google::cloud::speech::v2::Config const& config,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::speech::v2::UpdateConfigRequest request;
  *request.mutable_config() = config;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateConfig(request);
}

StatusOr<google::cloud::speech::v2::Config> SpeechClient::UpdateConfig(
    google::cloud::speech::v2::UpdateConfigRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateConfig(request);
}

future<StatusOr<google::cloud::speech::v2::CustomClass>>
SpeechClient::CreateCustomClass(
    std::string const& parent,
    google::cloud::speech::v2::CustomClass const& custom_class,
    std::string const& custom_class_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::speech::v2::CreateCustomClassRequest request;
  request.set_parent(parent);
  *request.mutable_custom_class() = custom_class;
  request.set_custom_class_id(custom_class_id);
  return connection_->CreateCustomClass(request);
}

future<StatusOr<google::cloud::speech::v2::CustomClass>>
SpeechClient::CreateCustomClass(
    google::cloud::speech::v2::CreateCustomClassRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateCustomClass(request);
}

StreamRange<google::cloud::speech::v2::CustomClass>
SpeechClient::ListCustomClasses(std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::speech::v2::ListCustomClassesRequest request;
  request.set_parent(parent);
  return connection_->ListCustomClasses(request);
}

StreamRange<google::cloud::speech::v2::CustomClass>
SpeechClient::ListCustomClasses(
    google::cloud::speech::v2::ListCustomClassesRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListCustomClasses(std::move(request));
}

StatusOr<google::cloud::speech::v2::CustomClass> SpeechClient::GetCustomClass(
    std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::speech::v2::GetCustomClassRequest request;
  request.set_name(name);
  return connection_->GetCustomClass(request);
}

StatusOr<google::cloud::speech::v2::CustomClass> SpeechClient::GetCustomClass(
    google::cloud::speech::v2::GetCustomClassRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetCustomClass(request);
}

future<StatusOr<google::cloud::speech::v2::CustomClass>>
SpeechClient::UpdateCustomClass(
    google::cloud::speech::v2::CustomClass const& custom_class,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::speech::v2::UpdateCustomClassRequest request;
  *request.mutable_custom_class() = custom_class;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateCustomClass(request);
}

future<StatusOr<google::cloud::speech::v2::CustomClass>>
SpeechClient::UpdateCustomClass(
    google::cloud::speech::v2::UpdateCustomClassRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateCustomClass(request);
}

future<StatusOr<google::cloud::speech::v2::CustomClass>>
SpeechClient::DeleteCustomClass(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::speech::v2::DeleteCustomClassRequest request;
  request.set_name(name);
  return connection_->DeleteCustomClass(request);
}

future<StatusOr<google::cloud::speech::v2::CustomClass>>
SpeechClient::DeleteCustomClass(
    google::cloud::speech::v2::DeleteCustomClassRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteCustomClass(request);
}

future<StatusOr<google::cloud::speech::v2::CustomClass>>
SpeechClient::UndeleteCustomClass(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::speech::v2::UndeleteCustomClassRequest request;
  request.set_name(name);
  return connection_->UndeleteCustomClass(request);
}

future<StatusOr<google::cloud::speech::v2::CustomClass>>
SpeechClient::UndeleteCustomClass(
    google::cloud::speech::v2::UndeleteCustomClassRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UndeleteCustomClass(request);
}

future<StatusOr<google::cloud::speech::v2::PhraseSet>>
SpeechClient::CreatePhraseSet(
    std::string const& parent,
    google::cloud::speech::v2::PhraseSet const& phrase_set,
    std::string const& phrase_set_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::speech::v2::CreatePhraseSetRequest request;
  request.set_parent(parent);
  *request.mutable_phrase_set() = phrase_set;
  request.set_phrase_set_id(phrase_set_id);
  return connection_->CreatePhraseSet(request);
}

future<StatusOr<google::cloud::speech::v2::PhraseSet>>
SpeechClient::CreatePhraseSet(
    google::cloud::speech::v2::CreatePhraseSetRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreatePhraseSet(request);
}

StreamRange<google::cloud::speech::v2::PhraseSet> SpeechClient::ListPhraseSets(
    std::string const& parent, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::speech::v2::ListPhraseSetsRequest request;
  request.set_parent(parent);
  return connection_->ListPhraseSets(request);
}

StreamRange<google::cloud::speech::v2::PhraseSet> SpeechClient::ListPhraseSets(
    google::cloud::speech::v2::ListPhraseSetsRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListPhraseSets(std::move(request));
}

StatusOr<google::cloud::speech::v2::PhraseSet> SpeechClient::GetPhraseSet(
    std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::speech::v2::GetPhraseSetRequest request;
  request.set_name(name);
  return connection_->GetPhraseSet(request);
}

StatusOr<google::cloud::speech::v2::PhraseSet> SpeechClient::GetPhraseSet(
    google::cloud::speech::v2::GetPhraseSetRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetPhraseSet(request);
}

future<StatusOr<google::cloud::speech::v2::PhraseSet>>
SpeechClient::UpdatePhraseSet(
    google::cloud::speech::v2::PhraseSet const& phrase_set,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::speech::v2::UpdatePhraseSetRequest request;
  *request.mutable_phrase_set() = phrase_set;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdatePhraseSet(request);
}

future<StatusOr<google::cloud::speech::v2::PhraseSet>>
SpeechClient::UpdatePhraseSet(
    google::cloud::speech::v2::UpdatePhraseSetRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdatePhraseSet(request);
}

future<StatusOr<google::cloud::speech::v2::PhraseSet>>
SpeechClient::DeletePhraseSet(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::speech::v2::DeletePhraseSetRequest request;
  request.set_name(name);
  return connection_->DeletePhraseSet(request);
}

future<StatusOr<google::cloud::speech::v2::PhraseSet>>
SpeechClient::DeletePhraseSet(
    google::cloud::speech::v2::DeletePhraseSetRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeletePhraseSet(request);
}

future<StatusOr<google::cloud::speech::v2::PhraseSet>>
SpeechClient::UndeletePhraseSet(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::speech::v2::UndeletePhraseSetRequest request;
  request.set_name(name);
  return connection_->UndeletePhraseSet(request);
}

future<StatusOr<google::cloud::speech::v2::PhraseSet>>
SpeechClient::UndeletePhraseSet(
    google::cloud::speech::v2::UndeletePhraseSetRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UndeletePhraseSet(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace speech_v2
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
