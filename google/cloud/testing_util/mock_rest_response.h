// Copyright 2022 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TESTING_UTIL_MOCK_REST_RESPONSE_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TESTING_UTIL_MOCK_REST_RESPONSE_H

#include "google/cloud/internal/http_payload.h"
#include "google/cloud/internal/rest_response.h"
#include "google/cloud/version.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace testing_util {

class MockRestResponse : public rest_internal::RestResponse {
 public:
  ~MockRestResponse() override = default;
  MOCK_METHOD(rest_internal::HttpStatusCode, StatusCode, (), (const, override));
  MOCK_METHOD((std::multimap<std::string, std::string>), Headers, (),
              (const, override));
  MOCK_METHOD(std::unique_ptr<rest_internal::HttpPayload>, ExtractPayload, (),
              (ref(&&), override));
};

}  // namespace testing_util
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TESTING_UTIL_MOCK_REST_RESPONSE_H
