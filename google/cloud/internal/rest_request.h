// Copyright 2021 Google LLC
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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_INTERNAL_REST_REQUEST_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_INTERNAL_REST_REQUEST_H

#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <unordered_map>
#include <vector>

namespace google {
namespace cloud {
namespace rest_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class RestClient;

class RestRequest {
 public:
  using HttpHeaders = std::unordered_map<std::string, std::vector<std::string>>;
  using HttpParameters = std::vector<std::pair<std::string, std::string>>;

  RestRequest();
  explicit RestRequest(std::string path);
  RestRequest(std::string path, HttpHeaders headers);
  RestRequest(std::string path, HttpParameters parameters);
  RestRequest(std::string path, HttpHeaders headers, HttpParameters parameters);

  RestRequest(RestRequest const&) = default;
  RestRequest& operator=(RestRequest const&) = default;
  RestRequest(RestRequest&&) = default;
  RestRequest& operator=(RestRequest&&) = default;

  std::string const& path() const;
  HttpHeaders const& headers() const;
  HttpParameters const& parameters() const;

  RestRequest& SetPath(std::string path);
  // Adding a header/value pair that already exists results in the new value
  // appended to the list of values for the existing header.
  RestRequest& AddHeader(std::string header, std::string value);
  RestRequest& AddHeader(std::pair<std::string, std::string> header);
  // Adding a duplicate param and or value results in both the new and original
  // pairs stored in order of addition.
  RestRequest& AddQueryParameter(std::string parameter, std::string value);
  RestRequest& AddQueryParameter(std::pair<std::string, std::string> parameter);

  // Vector is empty if header name is not found.
  // Header names are case-insensitive; header values are case-sensitive.
  std::vector<std::string> GetHeader(std::string header) const;
  // Returns all values associated with parameter name.
  // Parameter names and values are case-sensitive.
  std::vector<std::string> GetQueryParameter(
      std::string const& parameter) const;

 private:
  friend bool operator==(RestRequest const& lhs, RestRequest const& rhs);
  std::string path_;
  HttpHeaders headers_;
  HttpParameters parameters_;
};

bool operator==(RestRequest const& lhs, RestRequest const& rhs);
bool operator!=(RestRequest const& lhs, RestRequest const& rhs);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace rest_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_INTERNAL_REST_REQUEST_H
