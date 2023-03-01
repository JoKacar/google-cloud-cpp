// Copyright 2023 Google LLC
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

#include "generator/internal/discovery_to_proto.h"
#include "google/cloud/internal/make_status.h"
#include <string>

namespace google {
namespace cloud {
namespace generator_internal {

Status GenerateProtosFromDiscoveryDoc(std::string const&, std::string const&,
                                      std::string const&, std::string const&) {
  // TODO(10980): Implement this function.
  return google::cloud::internal::UnimplementedError("not yet implemented");
}

}  // namespace generator_internal
}  // namespace cloud
}  // namespace google
