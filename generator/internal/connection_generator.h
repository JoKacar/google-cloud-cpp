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
#ifndef GOOGLE_CLOUD_CPP_GENERATOR_INTERNAL_CONNECTION_GENERATOR_H
#define GOOGLE_CLOUD_CPP_GENERATOR_INTERNAL_CONNECTION_GENERATOR_H

#include "google/cloud/status.h"
#include "generator/internal/class_generator_interface.h"
#include "generator/internal/printer.h"
#include <google/protobuf/compiler/code_generator.h>
#include <google/protobuf/descriptor.h>
#include <map>
#include <string>

namespace google {
namespace cloud {
namespace generator_internal {

class ConnectionGenerator : public ClassGeneratorInterface {
 public:
  ConnectionGenerator(
      google::protobuf::ServiceDescriptor const* service_descriptor,
      std::map<std::string, std::string> service_vars,
      google::protobuf::compiler::GeneratorContext* context);

  ~ConnectionGenerator() override = default;

  ConnectionGenerator(ConnectionGenerator const&) = delete;
  ConnectionGenerator& operator=(ConnectionGenerator const&) = delete;
  ConnectionGenerator(ConnectionGenerator&&) = default;
  ConnectionGenerator& operator=(ConnectionGenerator&&) = default;

  Status Generate() override;

 private:
  void SetVars();

  google::protobuf::ServiceDescriptor const* service_descriptor_;
  std::map<std::string, std::string> vars_;
  std::unique_ptr<Printer> header_;
  std::unique_ptr<Printer> cc_;
};

}  // namespace generator_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GENERATOR_INTERNAL_CONNECTION_GENERATOR_H
