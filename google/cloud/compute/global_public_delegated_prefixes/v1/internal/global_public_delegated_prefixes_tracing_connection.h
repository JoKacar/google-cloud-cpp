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
// source:
// google/cloud/compute/global_public_delegated_prefixes/v1/global_public_delegated_prefixes.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_GLOBAL_PUBLIC_DELEGATED_PREFIXES_V1_INTERNAL_GLOBAL_PUBLIC_DELEGATED_PREFIXES_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_GLOBAL_PUBLIC_DELEGATED_PREFIXES_V1_INTERNAL_GLOBAL_PUBLIC_DELEGATED_PREFIXES_TRACING_CONNECTION_H

#include "google/cloud/compute/global_public_delegated_prefixes/v1/global_public_delegated_prefixes_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_global_public_delegated_prefixes_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class GlobalPublicDelegatedPrefixesTracingConnection
    : public compute_global_public_delegated_prefixes_v1::
          GlobalPublicDelegatedPrefixesConnection {
 public:
  ~GlobalPublicDelegatedPrefixesTracingConnection() override = default;

  explicit GlobalPublicDelegatedPrefixesTracingConnection(
      std::shared_ptr<compute_global_public_delegated_prefixes_v1::
                          GlobalPublicDelegatedPrefixesConnection>
          child);

  Options options() override { return child_->options(); }

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeletePublicDelegatedPrefix(
      google::cloud::cpp::compute::global_public_delegated_prefixes::v1::
          DeletePublicDelegatedPrefixRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::PublicDelegatedPrefix>
  GetPublicDelegatedPrefix(
      google::cloud::cpp::compute::global_public_delegated_prefixes::v1::
          GetPublicDelegatedPrefixRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertPublicDelegatedPrefix(
      google::cloud::cpp::compute::global_public_delegated_prefixes::v1::
          InsertPublicDelegatedPrefixRequest const& request) override;

  StreamRange<google::cloud::cpp::compute::v1::PublicDelegatedPrefix>
  ListGlobalPublicDelegatedPrefixes(
      google::cloud::cpp::compute::global_public_delegated_prefixes::v1::
          ListGlobalPublicDelegatedPrefixesRequest request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  PatchPublicDelegatedPrefix(
      google::cloud::cpp::compute::global_public_delegated_prefixes::v1::
          PatchPublicDelegatedPrefixRequest const& request) override;

 private:
  std::shared_ptr<compute_global_public_delegated_prefixes_v1::
                      GlobalPublicDelegatedPrefixesConnection>
      child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Conditionally applies the tracing decorator to the given connection.
 *
 * The connection is only decorated if tracing is enabled (as determined by the
 * connection's options).
 */
std::shared_ptr<compute_global_public_delegated_prefixes_v1::
                    GlobalPublicDelegatedPrefixesConnection>
MakeGlobalPublicDelegatedPrefixesTracingConnection(
    std::shared_ptr<compute_global_public_delegated_prefixes_v1::
                        GlobalPublicDelegatedPrefixesConnection>
        conn);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_global_public_delegated_prefixes_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_GLOBAL_PUBLIC_DELEGATED_PREFIXES_V1_INTERNAL_GLOBAL_PUBLIC_DELEGATED_PREFIXES_TRACING_CONNECTION_H
