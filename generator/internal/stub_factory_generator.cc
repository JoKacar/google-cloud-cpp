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

#include "generator/internal/stub_factory_generator.h"
#include "generator/internal/codegen_utils.h"
#include "generator/internal/printer.h"
#include <google/protobuf/descriptor.h>

namespace google {
namespace cloud {
namespace generator_internal {

StubFactoryGenerator::StubFactoryGenerator(
    google::protobuf::ServiceDescriptor const* service_descriptor,
    VarsDictionary service_vars,
    std::map<std::string, VarsDictionary> service_method_vars,
    google::protobuf::compiler::GeneratorContext* context)
    : ServiceCodeGenerator("stub_factory_header_path", "stub_factory_cc_path",
                           service_descriptor, std::move(service_vars),
                           std::move(service_method_vars), context) {}

Status StubFactoryGenerator::GenerateHeader() {
  HeaderPrint(CopyrightLicenseFileHeader());
  HeaderPrint(  // clang-format off
    "\n"
    "// Generated by the Codegen C++ plugin.\n"
    "// If you make any local changes, they will be lost.\n"
    "// source: $proto_file_name$\n"
    "\n"
    "#ifndef $header_include_guard$\n"
    "#define $header_include_guard$\n");
  // clang-format on

  // includes
  HeaderPrint("\n");
  HeaderLocalIncludes({vars("stub_header_path"),
                       "google/cloud/completion_queue.h",
                       "google/cloud/credentials.h",
                       "google/cloud/internal/unified_grpc_credentials.h",
                       "google/cloud/version.h"});
  HeaderSystemIncludes({"memory"});

  // This portability include must be the last file included.
  HeaderPushPortabilityMacros();
  auto result = HeaderOpenNamespaces(NamespaceType::kInternal);
  if (!result.ok()) return result;

  HeaderPrint(
      R"""(
std::shared_ptr<$stub_class_name$> CreateDefault$stub_class_name$(
    google::cloud::CompletionQueue cq, Options const& options);
)""");

  HeaderCloseNamespaces();
  // Restore any pushed preprocessor definitions.
  HeaderPopPortabilityMacros();
  // close header guard
  HeaderPrint("\n#endif  // $header_include_guard$\n");
  return {};
}

Status StubFactoryGenerator::GenerateCc() {
  CcPrint(CopyrightLicenseFileHeader());
  CcPrint(  // clang-format off
    "\n"
    "// Generated by the Codegen C++ plugin.\n"
    "// If you make any local changes, they will be lost.\n"
    "// source: $proto_file_name$\n");
  // clang-format on

  // includes
  CcPrint("\n");
  CcLocalIncludes({vars("stub_factory_header_path"), vars("auth_header_path"),
                   vars("logging_header_path"), vars("metadata_header_path"),
                   vars("stub_header_path"), vars("tracing_stub_header_path"),
                   "google/cloud/common_options.h",
                   "google/cloud/grpc_options.h",
                   "google/cloud/internal/algorithm.h",
                   "google/cloud/internal/opentelemetry.h",
                   "google/cloud/options.h", "google/cloud/log.h"});
  CcSystemIncludes({vars("proto_grpc_header_path"), "memory"});

  // This portability include must be the last file included.
  CcPushPortabilityMacros();
  auto result = CcOpenNamespaces(NamespaceType::kInternal);
  if (!result.ok()) return result;

  // factory function implementation
  CcPrint(R"""(
std::shared_ptr<$stub_class_name$>
CreateDefault$stub_class_name$(
    google::cloud::CompletionQueue cq, Options const& options) {
  auto auth = google::cloud::internal::CreateAuthenticationStrategy(
      std::move(cq), options);
  auto channel = auth->CreateChannel(
    options.get<EndpointOption>(), internal::MakeChannelArguments(options));
  auto service_grpc_stub = $grpc_stub_fqn$::NewStub(channel);)""");

  if (!HasLongrunningMethod()) {
    CcPrint(R"""(
  std::shared_ptr<$stub_class_name$> stub =
    std::make_shared<Default$stub_class_name$>(std::move(service_grpc_stub));
)""");
  } else {
    CcPrint(R"""(
  std::shared_ptr<$stub_class_name$> stub =
    std::make_shared<Default$stub_class_name$>(
      std::move(service_grpc_stub),
      google::longrunning::Operations::NewStub(channel));
)""");
  }
  CcPrint(R"""(
  if (auth->RequiresConfigureContext()) {
    stub = std::make_shared<$auth_class_name$>(
        std::move(auth), std::move(stub));
  }
  stub = std::make_shared<$metadata_class_name$>(
      std::move(stub), std::multimap<std::string, std::string>{});
  if (internal::Contains(
      options.get<TracingComponentsOption>(), "rpc")) {
    GCP_LOG(INFO) << "Enabled logging for gRPC calls";
    stub = std::make_shared<$logging_class_name$>(
        std::move(stub),
        options.get<GrpcTracingOptionsOption>(),
        options.get<TracingComponentsOption>());
  }
  if (internal::TracingEnabled(options)) {
    stub = Make$tracing_stub_class_name$(std::move(stub));
  }
  return stub;
}
)""");

  CcCloseNamespaces();
  // Restore any pushed preprocessor definitions.
  CcPopPortabilityMacros();
  return {};
}

}  // namespace generator_internal
}  // namespace cloud
}  // namespace google
