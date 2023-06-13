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
// source: google/cloud/compute/addresses/v1/addresses.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_ADDRESSES_V1_INTERNAL_ADDRESSES_REST_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_ADDRESSES_V1_INTERNAL_ADDRESSES_REST_CONNECTION_IMPL_H

#include "google/cloud/compute/addresses/v1/addresses_connection.h"
#include "google/cloud/compute/addresses/v1/addresses_connection_idempotency_policy.h"
#include "google/cloud/compute/addresses/v1/addresses_options.h"
#include "google/cloud/compute/addresses/v1/internal/addresses_rest_stub.h"
#include "google/cloud/compute/addresses/v1/internal/addresses_retry_traits.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.pb.h>
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace compute_addresses_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class AddressesRestConnectionImpl
    : public compute_addresses_v1::AddressesConnection {
 public:
  ~AddressesRestConnectionImpl() override = default;

  AddressesRestConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<compute_addresses_v1_internal::AddressesRestStub> stub,
      Options options);

  Options options() override { return options_; }

  StatusOr<google::cloud::cpp::compute::v1::AddressAggregatedList>
  AggregatedListAddresses(
      google::cloud::cpp::compute::addresses::v1::
          AggregatedListAddressesRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> DeleteAddresses(
      google::cloud::cpp::compute::addresses::v1::DeleteAddressesRequest const&
          request) override;

  StatusOr<google::cloud::cpp::compute::v1::Address> GetAddresses(
      google::cloud::cpp::compute::addresses::v1::GetAddressesRequest const&
          request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> InsertAddresses(
      google::cloud::cpp::compute::addresses::v1::InsertAddressesRequest const&
          request) override;

  StreamRange<google::cloud::cpp::compute::v1::Address> ListAddresses(
      google::cloud::cpp::compute::addresses::v1::ListAddressesRequest request)
      override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> SetLabels(
      google::cloud::cpp::compute::addresses::v1::SetLabelsRequest const&
          request) override;

 private:
  std::unique_ptr<compute_addresses_v1::AddressesRetryPolicy> retry_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<compute_addresses_v1::AddressesRetryPolicyOption>()) {
      return options.get<compute_addresses_v1::AddressesRetryPolicyOption>()
          ->clone();
    }
    return options_.get<compute_addresses_v1::AddressesRetryPolicyOption>()
        ->clone();
  }

  std::unique_ptr<BackoffPolicy> backoff_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<compute_addresses_v1::AddressesBackoffPolicyOption>()) {
      return options.get<compute_addresses_v1::AddressesBackoffPolicyOption>()
          ->clone();
    }
    return options_.get<compute_addresses_v1::AddressesBackoffPolicyOption>()
        ->clone();
  }

  std::unique_ptr<compute_addresses_v1::AddressesConnectionIdempotencyPolicy>
  idempotency_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<compute_addresses_v1::
                        AddressesConnectionIdempotencyPolicyOption>()) {
      return options
          .get<compute_addresses_v1::
                   AddressesConnectionIdempotencyPolicyOption>()
          ->clone();
    }
    return options_
        .get<compute_addresses_v1::AddressesConnectionIdempotencyPolicyOption>()
        ->clone();
  }

  std::unique_ptr<PollingPolicy> polling_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<compute_addresses_v1::AddressesPollingPolicyOption>()) {
      return options.get<compute_addresses_v1::AddressesPollingPolicyOption>()
          ->clone();
    }
    return options_.get<compute_addresses_v1::AddressesPollingPolicyOption>()
        ->clone();
  }

  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<compute_addresses_v1_internal::AddressesRestStub> stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_addresses_v1_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_ADDRESSES_V1_INTERNAL_ADDRESSES_REST_CONNECTION_IMPL_H
