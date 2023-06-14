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
// source: google/cloud/texttospeech/v1/cloud_tts.proto

#include "google/cloud/texttospeech/v1/text_to_speech_connection.h"
#include "google/cloud/texttospeech/v1/internal/text_to_speech_connection_impl.h"
#include "google/cloud/texttospeech/v1/internal/text_to_speech_option_defaults.h"
#include "google/cloud/texttospeech/v1/internal/text_to_speech_stub_factory.h"
#include "google/cloud/texttospeech/v1/internal/text_to_speech_tracing_connection.h"
#include "google/cloud/texttospeech/v1/text_to_speech_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace texttospeech_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

TextToSpeechConnection::~TextToSpeechConnection() = default;

StatusOr<google::cloud::texttospeech::v1::ListVoicesResponse>
TextToSpeechConnection::ListVoices(
    google::cloud::texttospeech::v1::ListVoicesRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::texttospeech::v1::SynthesizeSpeechResponse>
TextToSpeechConnection::SynthesizeSpeech(
    google::cloud::texttospeech::v1::SynthesizeSpeechRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

std::shared_ptr<TextToSpeechConnection> MakeTextToSpeechConnection(
    Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 UnifiedCredentialsOptionList,
                                 TextToSpeechPolicyOptionList>(options,
                                                               __func__);
  options =
      texttospeech_v1_internal::TextToSpeechDefaultOptions(std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto stub = texttospeech_v1_internal::CreateDefaultTextToSpeechStub(
      background->cq(), options);
  return texttospeech_v1_internal::MakeTextToSpeechTracingConnection(
      std::make_shared<texttospeech_v1_internal::TextToSpeechConnectionImpl>(
          std::move(background), std::move(stub), std::move(options)));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace texttospeech_v1
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
