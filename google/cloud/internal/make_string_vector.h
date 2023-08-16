// Copyright 2023 Google LLC
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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_INTERNAL_MAKE_STRING_VECTOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_INTERNAL_MAKE_STRING_VECTOR_H

#include "google/cloud/version.h"
#include "absl/strings/string_view.h"
#include <string>
#include <vector>

namespace google {
namespace cloud {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace internal {

template <typename T>
std::string Stringify(T s) {
  return std::to_string(s);
}

inline std::string Stringify(std::string s) { return s; }

inline std::string Stringify(char const* s) { return std::string(s); }

inline std::string Stringify(absl::string_view s) {
  return std::string{s.data(), s.size()};
}

template <typename... Ts>
std::vector<std::string> MakeStringVector(Ts&&... ts) {
  return {Stringify(std::forward<Ts>(ts))...};
}

}  // namespace internal
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_INTERNAL_MAKE_STRING_VECTOR_H
