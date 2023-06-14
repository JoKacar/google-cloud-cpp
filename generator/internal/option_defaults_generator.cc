// Copyright 2021 Google LLC
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

#include "generator/internal/option_defaults_generator.h"
#include "generator/internal/codegen_utils.h"
#include "generator/internal/printer.h"
#include <google/protobuf/descriptor.h>

namespace google {
namespace cloud {
namespace generator_internal {

OptionDefaultsGenerator::OptionDefaultsGenerator(
    google::protobuf::ServiceDescriptor const* service_descriptor,
    VarsDictionary service_vars,
    std::map<std::string, VarsDictionary> service_method_vars,
    google::protobuf::compiler::GeneratorContext* context)
    : ServiceCodeGenerator("option_defaults_header_path",
                           "option_defaults_cc_path", service_descriptor,
                           std::move(service_vars),
                           std::move(service_method_vars), context) {}

Status OptionDefaultsGenerator::GenerateHeader() {
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

  auto endpoint_location_style = EndpointLocationStyle();

  // includes
  HeaderPrint("\n");
  HeaderLocalIncludes({"google/cloud/options.h", "google/cloud/version.h"});
  switch (endpoint_location_style) {
    case ServiceConfiguration::LOCATION_DEPENDENT:
    case ServiceConfiguration::LOCATION_DEPENDENT_COMPAT:
      HeaderSystemIncludes({"string"});
      break;
    default:
      break;
  }

  // This portability include must be the last file included.
  HeaderPushPortabilityMacros();
  auto result = HeaderOpenNamespaces(NamespaceType::kInternal);
  if (!result.ok()) return result;

  HeaderPrint("\nOptions $service_name$DefaultOptions(");
  switch (endpoint_location_style) {
    case ServiceConfiguration::LOCATION_DEPENDENT:
    case ServiceConfiguration::LOCATION_DEPENDENT_COMPAT:
      HeaderPrint("std::string const& location, ");
      break;
    default:
      break;
  }
  HeaderPrint("Options options);\n");

  HeaderCloseNamespaces();
  // Restore any pushed preprocessor definitions.
  HeaderPopPortabilityMacros();
  // close header guard
  HeaderPrint("\n#endif  // $header_include_guard$\n");
  return {};
}

Status OptionDefaultsGenerator::GenerateCc() {
  CcPrint(CopyrightLicenseFileHeader());
  CcPrint(  // clang-format off
    "\n"
    "// Generated by the Codegen C++ plugin.\n"
    "// If you make any local changes, they will be lost.\n"
    "// source: $proto_file_name$\n");
  // clang-format on

  auto endpoint_location_style = EndpointLocationStyle();

  // includes
  CcPrint("\n");
  CcLocalIncludes({vars("option_defaults_header_path"),
                   vars("connection_header_path"), vars("options_header_path"),
                   "google/cloud/internal/populate_common_options.h",
                   "google/cloud/internal/populate_grpc_options.h"});
  switch (endpoint_location_style) {
    case ServiceConfiguration::LOCATION_DEPENDENT:
    case ServiceConfiguration::LOCATION_DEPENDENT_COMPAT:
      CcLocalIncludes({"google/cloud/internal/absl_str_cat_quiet.h"});
      break;
    default:
      break;
  }
  CcSystemIncludes({"memory"});

  // This portability include must be the last file included.
  CcPushPortabilityMacros();
  auto result = CcOpenNamespaces(NamespaceType::kInternal);
  if (!result.ok()) return result;

  CcPrint(  // clang-format off
    "\n"
    "namespace {\n"
    "auto constexpr kBackoffScaling = 2.0;\n"
    "}  // namespace\n"
  ); //  clang-format on

  CcPrint("\nOptions $service_name$DefaultOptions(");
  switch (endpoint_location_style) {
    case ServiceConfiguration::LOCATION_DEPENDENT:
    case ServiceConfiguration::LOCATION_DEPENDENT_COMPAT:
      CcPrint("std::string const& location, ");
      break;
    default:
      break;
  }
  CcPrint(
    "Options options) {\n"
    "  options = google::cloud::internal::PopulateCommonOptions(\n"
    "      std::move(options), \"$service_endpoint_env_var$\",\n"
    "      \"$emulator_endpoint_env_var$\", \"$service_authority_env_var$\",\n"
  );
  switch (endpoint_location_style) {
    case ServiceConfiguration::LOCATION_DEPENDENT:
      CcPrint(R"""(      absl::StrCat(location, "-", "$service_endpoint$"))""");
      break;
    case ServiceConfiguration::LOCATION_DEPENDENT_COMPAT:
      CcPrint(R"""(      absl::StrCat(location, )"""
              R"""(location.empty() ? "" : "-", "$service_endpoint$"))""");
      break;
    default:
      CcPrint(R"""(      "$service_endpoint$")""");
      break;
  }
  CcPrint({  // clang-format off
   {");\n"
    "  options = google::cloud::internal::PopulateGrpcOptions(\n"
    "      std::move(options), \"$emulator_endpoint_env_var$\");\n"},
   {"  if (!options.has<$product_namespace$::$retry_policy_name$Option>()) {\n"
    "    options.set<$product_namespace$::$retry_policy_name$Option>(\n"
    "        $product_namespace$::$limited_time_retry_policy_name$(\n"
    "            std::chrono::minutes(30)).clone());\n"
    "  }\n"
    "  if (!options.has<$product_namespace$::$service_name$BackoffPolicyOption>()) {\n"
    "    options.set<$product_namespace$::$service_name$BackoffPolicyOption>(\n"
    "        ExponentialBackoffPolicy(std::chrono::seconds(0), std::chrono::seconds(1),\n"
    "            std::chrono::minutes(5), kBackoffScaling, kBackoffScaling).clone());\n"
    "  }\n"},
   {[this]{return HasLongrunningMethod();},
    "  if (!options.has<$product_namespace$::$service_name$PollingPolicyOption>()) {\n"
    "    options.set<$product_namespace$::$service_name$PollingPolicyOption>(\n"
    "        GenericPollingPolicy<\n"
    "            $product_namespace$::$retry_policy_name$Option::Type,\n"
    "            $product_namespace$::$service_name$BackoffPolicyOption::Type>(\n"
    "            options.get<$product_namespace$::$retry_policy_name$Option>()->clone(),\n"
    "            ExponentialBackoffPolicy(std::chrono::seconds(1),\n"
    "            std::chrono::minutes(5), kBackoffScaling).clone()).clone());\n"
    "  }\n", ""},
   {"  if (!options.has<$product_namespace$::$idempotency_class_name$Option>()) {\n"
    "    options.set<$product_namespace$::$idempotency_class_name$Option>(\n"
    "        $product_namespace$::MakeDefault$idempotency_class_name$());\n"
    "  }\n"
    "\n"
    "  return options;\n"
    "}\n"}});
            // clang-format on

  CcCloseNamespaces();
  // Restore any pushed preprocessor definitions.
  CcPopPortabilityMacros();
  return {};
}

}  // namespace generator_internal
}  // namespace cloud
}  // namespace google
