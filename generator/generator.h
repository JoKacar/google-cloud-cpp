// Copyright 2020 Google LLC
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
#ifndef GENERATOR_GENERATOR_H_
#define GENERATOR_GENERATOR_H_

#include <google/protobuf/compiler/code_generator.h>
#include <google/protobuf/descriptor.h>
#include <string>

namespace google {
namespace codegen {

class Generator : public google::protobuf::compiler::CodeGenerator {
 public:
  bool Generate(google::protobuf::FileDescriptor const* file,
                std::string const& parameter,
                google::protobuf::compiler::GeneratorContext* generator_context,
                std::string* error) const override;
};

}  // namespace codegen
}  // namespace google

#endif  // GENERATOR_GENERATOR_H_