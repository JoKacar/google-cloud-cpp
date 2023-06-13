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

// Generated by the Codegen C++ plugin.
// If you make any local changes, they will be lost.
// source: google/cloud/compute/instances/v1/instances.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_INSTANCES_V1_INSTANCES_REST_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_INSTANCES_V1_INSTANCES_REST_CONNECTION_H

#include "google/cloud/compute/instances/v1/instances_connection.h"
#include "google/cloud/options.h"
#include "google/cloud/version.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace compute_instances_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A factory function to construct an object of type `InstancesConnection`
 * that uses REST over HTTP as transport in lieu of gRPC. REST transport should
 * only be used for services that do not support gRPC or if the existing network
 * configuration precludes using gRPC.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of InstancesClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `InstancesConnection`. Expected options are any of the types in
 * the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::RestOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::compute_instances_v1::InstancesPolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param options (optional) Configure the `InstancesConnection` created by
 * this function.
 */
std::shared_ptr<InstancesConnection> MakeInstancesConnectionRest(
    ExperimentalTag, Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_instances_v1
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_INSTANCES_V1_INSTANCES_REST_CONNECTION_H
