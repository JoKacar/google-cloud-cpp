// Copyright 2024 Google LLC
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

#ifndef GOOGLE_CLOUD_CPP_GENERATOR_INTERNAL_DOXYGEN_H
#define GOOGLE_CLOUD_CPP_GENERATOR_INTERNAL_DOXYGEN_H

#include "google/cloud/version.h"
#include "google/protobuf/descriptor.h"
#include <string>

namespace google {
namespace cloud {
namespace generator_internal {

// Returns a "@googleapis_link" Doxygen string pointing to the file path and
// line number where the message is defined in the proto file.
std::string FormatDoxygenLink(google::protobuf::Descriptor const& message_type);

}  // namespace generator_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GENERATOR_INTERNAL_DOXYGEN_H
