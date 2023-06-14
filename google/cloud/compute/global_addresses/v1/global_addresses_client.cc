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
// source: google/cloud/compute/global_addresses/v1/global_addresses.proto

#include "google/cloud/compute/global_addresses/v1/global_addresses_client.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace compute_global_addresses_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

GlobalAddressesClient::GlobalAddressesClient(
    ExperimentalTag, std::shared_ptr<GlobalAddressesConnection> connection,
    Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
GlobalAddressesClient::~GlobalAddressesClient() = default;

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
GlobalAddressesClient::DeleteGlobalAddresses(std::string const& project,
                                             std::string const& address,
                                             Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::global_addresses::v1::
      DeleteGlobalAddressesRequest request;
  request.set_project(project);
  request.set_address(address);
  return connection_->DeleteGlobalAddresses(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
GlobalAddressesClient::DeleteGlobalAddresses(
    google::cloud::cpp::compute::global_addresses::v1::
        DeleteGlobalAddressesRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteGlobalAddresses(request);
}

StatusOr<google::cloud::cpp::compute::v1::Address>
GlobalAddressesClient::GetGlobalAddresses(std::string const& project,
                                          std::string const& address,
                                          Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::global_addresses::v1::GetGlobalAddressesRequest
      request;
  request.set_project(project);
  request.set_address(address);
  return connection_->GetGlobalAddresses(request);
}

StatusOr<google::cloud::cpp::compute::v1::Address>
GlobalAddressesClient::GetGlobalAddresses(
    google::cloud::cpp::compute::global_addresses::v1::
        GetGlobalAddressesRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetGlobalAddresses(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
GlobalAddressesClient::InsertGlobalAddresses(
    std::string const& project,
    google::cloud::cpp::compute::v1::Address const& address_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::global_addresses::v1::
      InsertGlobalAddressesRequest request;
  request.set_project(project);
  *request.mutable_address_resource() = address_resource;
  return connection_->InsertGlobalAddresses(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
GlobalAddressesClient::InsertGlobalAddresses(
    google::cloud::cpp::compute::global_addresses::v1::
        InsertGlobalAddressesRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->InsertGlobalAddresses(request);
}

StreamRange<google::cloud::cpp::compute::v1::Address>
GlobalAddressesClient::ListGlobalAddresses(std::string const& project,
                                           Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::global_addresses::v1::ListGlobalAddressesRequest
      request;
  request.set_project(project);
  return connection_->ListGlobalAddresses(request);
}

StreamRange<google::cloud::cpp::compute::v1::Address>
GlobalAddressesClient::ListGlobalAddresses(
    google::cloud::cpp::compute::global_addresses::v1::
        ListGlobalAddressesRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListGlobalAddresses(std::move(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
GlobalAddressesClient::SetLabels(
    std::string const& project, std::string const& resource,
    google::cloud::cpp::compute::v1::GlobalSetLabelsRequest const&
        global_set_labels_request_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::global_addresses::v1::SetLabelsRequest request;
  request.set_project(project);
  request.set_resource(resource);
  *request.mutable_global_set_labels_request_resource() =
      global_set_labels_request_resource;
  return connection_->SetLabels(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
GlobalAddressesClient::SetLabels(
    google::cloud::cpp::compute::global_addresses::v1::SetLabelsRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->SetLabels(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_global_addresses_v1
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
