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
// google/cloud/compute/public_delegated_prefixes/v1/public_delegated_prefixes.proto

#include "google/cloud/compute/public_delegated_prefixes/v1/public_delegated_prefixes_connection.h"
#include "google/cloud/compute/public_delegated_prefixes/v1/internal/public_delegated_prefixes_option_defaults.h"
#include "google/cloud/compute/public_delegated_prefixes/v1/internal/public_delegated_prefixes_tracing_connection.h"
#include "google/cloud/compute/public_delegated_prefixes/v1/public_delegated_prefixes_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_public_delegated_prefixes_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

PublicDelegatedPrefixesConnection::~PublicDelegatedPrefixesConnection() =
    default;

StreamRange<std::pair<std::string, google::cloud::cpp::compute::v1::
                                       PublicDelegatedPrefixesScopedList>>
PublicDelegatedPrefixesConnection::AggregatedListPublicDelegatedPrefixes(
    google::cloud::cpp::compute::public_delegated_prefixes::v1::
        AggregatedListPublicDelegatedPrefixesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<StreamRange<
      std::pair<std::string, google::cloud::cpp::compute::v1::
                                 PublicDelegatedPrefixesScopedList>>>();
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
PublicDelegatedPrefixesConnection::Announce(
    google::cloud::cpp::compute::public_delegated_prefixes::v1::
        AnnounceRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
PublicDelegatedPrefixesConnection::DeletePublicDelegatedPrefix(
    google::cloud::cpp::compute::public_delegated_prefixes::v1::
        DeletePublicDelegatedPrefixRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::cpp::compute::v1::PublicDelegatedPrefix>
PublicDelegatedPrefixesConnection::GetPublicDelegatedPrefix(
    google::cloud::cpp::compute::public_delegated_prefixes::v1::
        GetPublicDelegatedPrefixRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
PublicDelegatedPrefixesConnection::InsertPublicDelegatedPrefix(
    google::cloud::cpp::compute::public_delegated_prefixes::v1::
        InsertPublicDelegatedPrefixRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::cloud::cpp::compute::v1::PublicDelegatedPrefix>
PublicDelegatedPrefixesConnection::ListPublicDelegatedPrefixes(
    google::cloud::cpp::compute::public_delegated_prefixes::v1::
        ListPublicDelegatedPrefixesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::cpp::compute::v1::PublicDelegatedPrefix>>();
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
PublicDelegatedPrefixesConnection::PatchPublicDelegatedPrefix(
    google::cloud::cpp::compute::public_delegated_prefixes::v1::
        PatchPublicDelegatedPrefixRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
PublicDelegatedPrefixesConnection::Withdraw(
    google::cloud::cpp::compute::public_delegated_prefixes::v1::
        WithdrawRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::cpp::compute::v1::Operation>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_public_delegated_prefixes_v1
}  // namespace cloud
}  // namespace google
