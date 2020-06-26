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

#include "generator/generator.h"
#include "absl/strings/str_cat.h"
#include "absl/strings/str_replace.h"
#include "absl/strings/string_view.h"
#include "generator/internal/codegen_utils.h"
#include "generator/internal/connection_cc_generator.h"
#include "generator/internal/connection_header_generator.h"
#include "generator/internal/data_model.h"
#include "generator/internal/logging_cc_generator.h"
#include "generator/internal/logging_header_generator.h"
#include "generator/internal/metadata_cc_generator.h"
#include "generator/internal/metadata_header_generator.h"
#include "generator/internal/printer.h"
#include "generator/internal/stub_cc_generator.h"
#include "generator/internal/stub_header_generator.h"
#include "google/api/client.pb.h"
#include <map>
#include <string>
#include <vector>

namespace pb = google::protobuf;

namespace google {
namespace codegen {

bool Generator::Generate(pb::FileDescriptor const* file,
                         std::string const& parameter,
                         pb::compiler::GeneratorContext* generator_context,
                         std::string* error) const {
  if (file->options().cc_generic_services()) {
    *error =
        "cpp codegen proto compiler plugin does not work with generic "
        "services. To generate cpp codegen APIs, please set \""
        "cc_generic_service = false\".";
    return false;
  }

  std::vector<std::pair<std::string, std::string>> parameters;
  google::protobuf::compiler::ParseGeneratorParameter(parameter, &parameters);

  std::cerr << "Parameters:\n";
  for (auto const& p : parameters) {
    std::cerr << p.first << ", " << p.second << "\n";
  }
  std::cerr << std::endl;

  for (int i = 0; i < file->service_count(); i++) {
    pb::ServiceDescriptor const* service = file->service(i);

    // TODO(michaelbausor): initialize Vars with cross-file-descriptor
    // configuration, e.g. metadata annotation.
    // TODO(sdhart): vars and the DataModel methods should probably be a class
    std::map<std::string, std::string> vars;
    internal::DataModel::SetServiceVars(service, vars);

    std::string service_file_path =
        internal::ServiceNameToFilePath(service->name());

    std::string header_stub_file_path = absl::StrCat(
        service_file_path, "_stub", internal::GeneratedFileSuffix(), ".h");
    internal::Printer header_stub_printer(generator_context,
                                          header_stub_file_path);
    if (!internal::GenerateClientStubHeader(service, vars, header_stub_printer,
                                            error)) {
      return false;
    }
    std::string cc_stub_file_path = absl::StrCat(
        service_file_path, "_stub", internal::GeneratedFileSuffix(), ".cc");
    internal::Printer cc_stub_printer(generator_context, cc_stub_file_path);
    if (!internal::GenerateClientStubCC(service, vars, cc_stub_printer,
                                        error)) {
      return false;
    }

    std::string header_metadata_file_path = absl::StrCat(
        service_file_path, "_metadata", internal::GeneratedFileSuffix(), ".h");
    internal::Printer header_metadata_printer(generator_context,
                                              header_metadata_file_path);
    if (!internal::GenerateClientMetadataHeader(
            service, vars, header_metadata_printer, error)) {
      return false;
    }
    std::string cc_metadata_file_path = absl::StrCat(
        service_file_path, "_metadata", internal::GeneratedFileSuffix(), ".cc");
    internal::Printer cc_metadata_printer(generator_context,
                                          cc_metadata_file_path);
    if (!internal::GenerateClientMetadataCC(service, vars, cc_metadata_printer,
                                            error)) {
      return false;
    }

    std::string header_logging_file_path = absl::StrCat(
        service_file_path, "_logging", internal::GeneratedFileSuffix(), ".h");
    internal::Printer header_logging_printer(generator_context,
                                             header_logging_file_path);
    if (!internal::GenerateClientLoggingHeader(service, vars,
                                               header_logging_printer, error)) {
      return false;
    }
    std::string cc_logging_file_path = absl::StrCat(
        service_file_path, "_logging", internal::GeneratedFileSuffix(), ".cc");
    internal::Printer cc_logging_printer(generator_context,
                                         cc_logging_file_path);
    if (!internal::GenerateClientLoggingCC(service, vars, cc_logging_printer,
                                           error)) {
      return false;
    }

    std::string header_connection_file_path =
        absl::StrCat(service_file_path, "_connection",
                     internal::GeneratedFileSuffix(), ".h");
    internal::Printer header_printer(generator_context,
                                     header_connection_file_path);
    if (!internal::GenerateClientConnectionHeader(service, vars, header_printer,
                                                  error)) {
      return false;
    }
    std::string cc_connection_file_path =
        absl::StrCat(service_file_path, "_connection",
                     internal::GeneratedFileSuffix(), ".cc");
    internal::Printer cc_printer(generator_context, cc_connection_file_path);
    if (!internal::GenerateClientConnectionCC(service, vars, cc_printer,
                                              error)) {
      return false;
    }
  }
  return true;
}

}  // namespace codegen
}  // namespace google
