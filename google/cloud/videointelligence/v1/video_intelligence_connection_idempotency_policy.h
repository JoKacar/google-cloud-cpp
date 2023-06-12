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
// source: google/cloud/videointelligence/v1/video_intelligence.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VIDEOINTELLIGENCE_V1_VIDEO_INTELLIGENCE_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VIDEOINTELLIGENCE_V1_VIDEO_INTELLIGENCE_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/internal/retry_policy.h"
#include "google/cloud/version.h"
#include <google/cloud/videointelligence/v1/video_intelligence.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace videointelligence_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class VideoIntelligenceServiceConnectionIdempotencyPolicy {
 public:
  virtual ~VideoIntelligenceServiceConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<VideoIntelligenceServiceConnectionIdempotencyPolicy>
  clone() const;

  virtual google::cloud::Idempotency AnnotateVideo(
      google::cloud::videointelligence::v1::AnnotateVideoRequest const&
          request);
};

std::unique_ptr<VideoIntelligenceServiceConnectionIdempotencyPolicy>
MakeDefaultVideoIntelligenceServiceConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace videointelligence_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VIDEOINTELLIGENCE_V1_VIDEO_INTELLIGENCE_CONNECTION_IDEMPOTENCY_POLICY_H
