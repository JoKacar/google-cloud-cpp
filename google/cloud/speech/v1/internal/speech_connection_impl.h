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
// source: google/cloud/speech/v1/cloud_speech.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SPEECH_V1_INTERNAL_SPEECH_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SPEECH_V1_INTERNAL_SPEECH_CONNECTION_IMPL_H

#include "google/cloud/speech/v1/internal/speech_retry_traits.h"
#include "google/cloud/speech/v1/internal/speech_stub.h"
#include "google/cloud/speech/v1/speech_connection.h"
#include "google/cloud/speech/v1/speech_connection_idempotency_policy.h"
#include "google/cloud/speech/v1/speech_options.h"
#include "google/cloud/async_streaming_read_write_rpc.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace speech_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class SpeechConnectionImpl : public speech_v1::SpeechConnection {
 public:
  ~SpeechConnectionImpl() override = default;

  SpeechConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<speech_v1_internal::SpeechStub> stub, Options options);

  Options options() override { return options_; }

  StatusOr<google::cloud::speech::v1::RecognizeResponse> Recognize(
      google::cloud::speech::v1::RecognizeRequest const& request) override;

  future<StatusOr<google::cloud::speech::v1::LongRunningRecognizeResponse>>
  LongRunningRecognize(
      google::cloud::speech::v1::LongRunningRecognizeRequest const& request)
      override;

  std::unique_ptr<::google::cloud::AsyncStreamingReadWriteRpc<
      google::cloud::speech::v1::StreamingRecognizeRequest,
      google::cloud::speech::v1::StreamingRecognizeResponse>>
  AsyncStreamingRecognize() override;

 private:
  std::unique_ptr<speech_v1::SpeechRetryPolicy> retry_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<speech_v1::SpeechRetryPolicyOption>()) {
      return options.get<speech_v1::SpeechRetryPolicyOption>()->clone();
    }
    return options_.get<speech_v1::SpeechRetryPolicyOption>()->clone();
  }

  std::unique_ptr<BackoffPolicy> backoff_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<speech_v1::SpeechBackoffPolicyOption>()) {
      return options.get<speech_v1::SpeechBackoffPolicyOption>()->clone();
    }
    return options_.get<speech_v1::SpeechBackoffPolicyOption>()->clone();
  }

  std::unique_ptr<speech_v1::SpeechConnectionIdempotencyPolicy>
  idempotency_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<speech_v1::SpeechConnectionIdempotencyPolicyOption>()) {
      return options.get<speech_v1::SpeechConnectionIdempotencyPolicyOption>()
          ->clone();
    }
    return options_.get<speech_v1::SpeechConnectionIdempotencyPolicyOption>()
        ->clone();
  }

  std::unique_ptr<PollingPolicy> polling_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<speech_v1::SpeechPollingPolicyOption>()) {
      return options.get<speech_v1::SpeechPollingPolicyOption>()->clone();
    }
    return options_.get<speech_v1::SpeechPollingPolicyOption>()->clone();
  }

  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<speech_v1_internal::SpeechStub> stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace speech_v1_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SPEECH_V1_INTERNAL_SPEECH_CONNECTION_IMPL_H
