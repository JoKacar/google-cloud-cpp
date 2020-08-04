// Copyright 2020 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "google/cloud/retry_policy.h"
#include <gmock/gmock.h>
#if 0
namespace google {
namespace cloud {
inline namespace GOOGLE_CLOUD_CPP_NS {
namespace {

TEST(RetryPolicyTest, PermanentFailure) {
  EXPECT_FALSE(internal::SafeGrpcRetry::IsPermanentFailure(Status()));
  EXPECT_FALSE(internal::SafeGrpcRetry::IsPermanentFailure(
      Status(StatusCode::kUnavailable, "try again")));
  EXPECT_FALSE(internal::SafeGrpcRetry::IsPermanentFailure(
      Status(StatusCode::kResourceExhausted, "slow down please")));
  EXPECT_TRUE(internal::SafeGrpcRetry::IsPermanentFailure(
      Status(StatusCode::kDeadlineExceeded, "not enough time")));
  EXPECT_TRUE(internal::SafeGrpcRetry::IsPermanentFailure(
      Status(StatusCode::kAborted, "nothing done")));
  EXPECT_TRUE(internal::SafeGrpcRetry::IsPermanentFailure(
      Status(StatusCode::kPermissionDenied, "uh oh")));
}

}  // namespace
}  // namespace GOOGLE_CLOUD_CPP_NS
}  // namespace cloud
}  // namespace google
#endif