// Copyright 2019 Google LLC
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

#ifndef GENERATOR_INTERNAL_STUB_HEADER_GENERATOR_H_
#define GENERATOR_INTERNAL_STUB_HEADER_GENERATOR_H_

#include "generator/internal/printer.h"
#include <google/protobuf/descriptor.h>
#include <map>
#include <string>

namespace google {
namespace codegen {
namespace internal {

bool GenerateClientStubHeader(
    google::protobuf::ServiceDescriptor const* service,
    std::map<std::string, std::string> const& vars, Printer& p,
    std::string* /* error */);

}  // namespace internal
}  // namespace codegen
}  // namespace google

#endif  // GENERATOR_INTERNAL_STUB_HEADER_GENERATOR_H_
