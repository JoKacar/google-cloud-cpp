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

#include "google/cloud/compute/addresses/v1/internal/addresses_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_addresses_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

AddressesTracingConnection::AddressesTracingConnection(
    std::shared_ptr<compute_addresses_v1::AddressesConnection> child)
    : child_(std::move(child)) {}

StatusOr<google::cloud::cpp::compute::v1::AddressAggregatedList>
AddressesTracingConnection::AggregatedListAddresses(
    google::cloud::cpp::compute::addresses::v1::
        AggregatedListAddressesRequest const& request) {
  auto span = internal::MakeSpan(
      "compute_addresses_v1::AddressesConnection::AggregatedListAddresses");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->AggregatedListAddresses(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
AddressesTracingConnection::DeleteAddress(
    google::cloud::cpp::compute::addresses::v1::DeleteAddressRequest const&
        request) {
  auto span = internal::MakeSpan(
      "compute_addresses_v1::AddressesConnection::DeleteAddress");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->DeleteAddress(request));
}

StatusOr<google::cloud::cpp::compute::v1::Address>
AddressesTracingConnection::GetAddress(
    google::cloud::cpp::compute::addresses::v1::GetAddressRequest const&
        request) {
  auto span = internal::MakeSpan(
      "compute_addresses_v1::AddressesConnection::GetAddress");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetAddress(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
AddressesTracingConnection::InsertAddress(
    google::cloud::cpp::compute::addresses::v1::InsertAddressRequest const&
        request) {
  auto span = internal::MakeSpan(
      "compute_addresses_v1::AddressesConnection::InsertAddress");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->InsertAddress(request));
}

StreamRange<google::cloud::cpp::compute::v1::Address>
AddressesTracingConnection::ListAddresses(
    google::cloud::cpp::compute::addresses::v1::ListAddressesRequest request) {
  auto span = internal::MakeSpan(
      "compute_addresses_v1::AddressesConnection::ListAddresses");
  auto scope = opentelemetry::trace::Scope(span);
  auto sr = child_->ListAddresses(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::cpp::compute::v1::Address>(std::move(span), std::move(sr));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
AddressesTracingConnection::Move(
    google::cloud::cpp::compute::addresses::v1::MoveRequest const& request) {
  auto span =
      internal::MakeSpan("compute_addresses_v1::AddressesConnection::Move");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->Move(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
AddressesTracingConnection::SetLabels(
    google::cloud::cpp::compute::addresses::v1::SetLabelsRequest const&
        request) {
  auto span = internal::MakeSpan(
      "compute_addresses_v1::AddressesConnection::SetLabels");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->SetLabels(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<compute_addresses_v1::AddressesConnection>
MakeAddressesTracingConnection(
    std::shared_ptr<compute_addresses_v1::AddressesConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<AddressesTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_addresses_v1_internal
}  // namespace cloud
}  // namespace google
