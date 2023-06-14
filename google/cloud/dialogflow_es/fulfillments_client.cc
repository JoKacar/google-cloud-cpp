// Copyright 2022 Google LLC
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
// source: google/cloud/dialogflow/v2/fulfillment.proto

#include "google/cloud/dialogflow_es/fulfillments_client.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace dialogflow_es {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

FulfillmentsClient::FulfillmentsClient(
    std::shared_ptr<FulfillmentsConnection> connection, Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
FulfillmentsClient::~FulfillmentsClient() = default;

StatusOr<google::cloud::dialogflow::v2::Fulfillment>
FulfillmentsClient::GetFulfillment(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::dialogflow::v2::GetFulfillmentRequest request;
  request.set_name(name);
  return connection_->GetFulfillment(request);
}

StatusOr<google::cloud::dialogflow::v2::Fulfillment>
FulfillmentsClient::GetFulfillment(
    google::cloud::dialogflow::v2::GetFulfillmentRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetFulfillment(request);
}

StatusOr<google::cloud::dialogflow::v2::Fulfillment>
FulfillmentsClient::UpdateFulfillment(
    google::cloud::dialogflow::v2::Fulfillment const& fulfillment,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::dialogflow::v2::UpdateFulfillmentRequest request;
  *request.mutable_fulfillment() = fulfillment;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateFulfillment(request);
}

StatusOr<google::cloud::dialogflow::v2::Fulfillment>
FulfillmentsClient::UpdateFulfillment(
    google::cloud::dialogflow::v2::UpdateFulfillmentRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateFulfillment(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
