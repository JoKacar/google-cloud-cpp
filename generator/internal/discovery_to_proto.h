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

#ifndef GOOGLE_CLOUD_CPP_GENERATOR_INTERNAL_DISCOVERY_TO_PROTO_H
#define GOOGLE_CLOUD_CPP_GENERATOR_INTERNAL_DISCOVERY_TO_PROTO_H

#include "generator/internal/discovery_file.h"
#include "generator/internal/discovery_resource.h"
#include "generator/internal/discovery_type_vertex.h"
#include "google/cloud/status_or.h"
#include <nlohmann/json.hpp>
#include <map>
#include <string>

namespace google {
namespace cloud {
namespace generator_internal {

// Creates a DiscoveryTypeVertex for every schema object defined in the
// Discovery Document.
StatusOr<std::map<std::string, DiscoveryTypeVertex>> ExtractTypesFromSchema(
    nlohmann::json const& discovery_doc);

// Creates a DiscoveryResource for every resource defined in the Discovery
// Document.
std::map<std::string, DiscoveryResource> ExtractResources(
    nlohmann::json const& discovery_doc, std::string const& default_hostname,
    std::string const& base_path);

// Determines the name of the response type for each method and verifies it
// exists in the collection of DiscoveryTypeVertex objects.
StatusOr<std::string> DetermineAndVerifyResponseTypeName(
    nlohmann::json const& method_json, DiscoveryResource& resource,
    std::map<std::string, DiscoveryTypeVertex>& types);

// Creates a type from the method parameters to represent the request.
StatusOr<DiscoveryTypeVertex> SynthesizeRequestType(
    nlohmann::json const& method_json, DiscoveryResource const& resource,
    std::string const& response_type_name, std::string method_name);

// Iterate through all the methods in all the resources and invoke
// DetermineAndVerifyResponseTypeName and SynthesizeRequestType as needed.
Status ProcessMethodRequestsAndResponses(
    std::map<std::string, DiscoveryResource>& resources,
    std::map<std::string, DiscoveryTypeVertex>& types);

// Creates a DiscoveryFile object for each DiscoveryResource in resources.
std::vector<DiscoveryFile> CreateFilesFromResources(
    std::map<std::string, DiscoveryResource> const& resources,
    std::string const& product_name, std::string const& version,
    std::string const& output_path);

Status GenerateProtosFromDiscoveryDoc(std::string const& url,
                                      std::string const& protobuf_proto_path,
                                      std::string const& googleapis_proto_path,
                                      std::string const& output_path);

}  // namespace generator_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GENERATOR_INTERNAL_DISCOVERY_TO_PROTO_H
