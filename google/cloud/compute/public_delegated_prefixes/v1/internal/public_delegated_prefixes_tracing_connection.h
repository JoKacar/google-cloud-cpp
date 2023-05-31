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
// source: google/cloud/compute/public_delegated_prefixes/v1/public_delegated_prefixes.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_PUBLIC_DELEGATED_PREFIXES_V1_INTERNAL_PUBLIC_DELEGATED_PREFIXES_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_PUBLIC_DELEGATED_PREFIXES_V1_INTERNAL_PUBLIC_DELEGATED_PREFIXES_TRACING_CONNECTION_H

#include "google/cloud/compute/public_delegated_prefixes/v1/public_delegated_prefixes_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_public_delegated_prefixes_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class PublicDelegatedPrefixesTracingConnection
    : public compute_public_delegated_prefixes_v1::PublicDelegatedPrefixesConnection {
 public:
  ~PublicDelegatedPrefixesTracingConnection() override = default;

  explicit PublicDelegatedPrefixesTracingConnection(
    std::shared_ptr<compute_public_delegated_prefixes_v1::PublicDelegatedPrefixesConnection> child);

  Options options() override { return child_->options(); }

  StatusOr<google::cloud::cpp::compute::v1::PublicDelegatedPrefixAggregatedList>
  AggregatedListPublicDelegatedPrefixes(google::cloud::cpp::compute::public_delegated_prefixes::v1::AggregatedListPublicDelegatedPrefixesRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeletePublicDelegatedPrefixes(google::cloud::cpp::compute::public_delegated_prefixes::v1::DeletePublicDelegatedPrefixesRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::PublicDelegatedPrefix>
  GetPublicDelegatedPrefixes(google::cloud::cpp::compute::public_delegated_prefixes::v1::GetPublicDelegatedPrefixesRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertPublicDelegatedPrefixes(google::cloud::cpp::compute::public_delegated_prefixes::v1::InsertPublicDelegatedPrefixesRequest const& request) override;

  StreamRange<google::cloud::cpp::compute::v1::PublicDelegatedPrefix>
  ListPublicDelegatedPrefixes(google::cloud::cpp::compute::public_delegated_prefixes::v1::ListPublicDelegatedPrefixesRequest request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  PatchPublicDelegatedPrefixes(google::cloud::cpp::compute::public_delegated_prefixes::v1::PatchPublicDelegatedPrefixesRequest const& request) override;

 private:
  std::shared_ptr<compute_public_delegated_prefixes_v1::PublicDelegatedPrefixesConnection> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Conditionally applies the tracing decorator to the given connection.
 *
 * The connection is only decorated if tracing is enabled (as determined by the
 * connection's options).
 */
std::shared_ptr<compute_public_delegated_prefixes_v1::PublicDelegatedPrefixesConnection>
MakePublicDelegatedPrefixesTracingConnection(
    std::shared_ptr<compute_public_delegated_prefixes_v1::PublicDelegatedPrefixesConnection> conn);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_public_delegated_prefixes_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_PUBLIC_DELEGATED_PREFIXES_V1_INTERNAL_PUBLIC_DELEGATED_PREFIXES_TRACING_CONNECTION_H
