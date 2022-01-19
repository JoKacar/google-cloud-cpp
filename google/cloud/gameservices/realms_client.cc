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
// source: google/cloud/gaming/v1/realms_service.proto

#include "google/cloud/gameservices/realms_client.h"
#include "google/cloud/gameservices/internal/realms_option_defaults.h"
#include <memory>

namespace google {
namespace cloud {
namespace gameservices {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

RealmsServiceClient::RealmsServiceClient(std::shared_ptr<RealmsServiceConnection> connection, Options options) : connection_(std::move(connection)), options_(gameservices_internal::RealmsServiceDefaultOptions(std::move(options))) {}
RealmsServiceClient::~RealmsServiceClient() = default;

StreamRange<google::cloud::gaming::v1::Realm>
RealmsServiceClient::ListRealms(std::string const& parent, Options options) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(options), options_));
  google::cloud::gaming::v1::ListRealmsRequest request;
  request.set_parent(parent);
  return connection_->ListRealms(request);
}

StreamRange<google::cloud::gaming::v1::Realm>
RealmsServiceClient::ListRealms(google::cloud::gaming::v1::ListRealmsRequest request, Options options) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(options), options_));
  return connection_->ListRealms(std::move(request));
}

StatusOr<google::cloud::gaming::v1::Realm>
RealmsServiceClient::GetRealm(std::string const& name, Options options) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(options), options_));
  google::cloud::gaming::v1::GetRealmRequest request;
  request.set_name(name);
  return connection_->GetRealm(request);
}

StatusOr<google::cloud::gaming::v1::Realm>
RealmsServiceClient::GetRealm(google::cloud::gaming::v1::GetRealmRequest const& request, Options options) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(options), options_));
  return connection_->GetRealm(request);
}

future<StatusOr<google::cloud::gaming::v1::Realm>>
RealmsServiceClient::CreateRealm(std::string const& parent, google::cloud::gaming::v1::Realm const& realm, std::string const& realm_id, Options options) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(options), options_));
  google::cloud::gaming::v1::CreateRealmRequest request;
  request.set_parent(parent);
  *request.mutable_realm() = realm;
  request.set_realm_id(realm_id);
  return connection_->CreateRealm(request);
}

future<StatusOr<google::cloud::gaming::v1::Realm>>
RealmsServiceClient::CreateRealm(google::cloud::gaming::v1::CreateRealmRequest const& request, Options options) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(options), options_));
  return connection_->CreateRealm(request);
}

future<StatusOr<google::cloud::gaming::v1::OperationMetadata>>
RealmsServiceClient::DeleteRealm(std::string const& name, Options options) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(options), options_));
  google::cloud::gaming::v1::DeleteRealmRequest request;
  request.set_name(name);
  return connection_->DeleteRealm(request);
}

future<StatusOr<google::cloud::gaming::v1::OperationMetadata>>
RealmsServiceClient::DeleteRealm(google::cloud::gaming::v1::DeleteRealmRequest const& request, Options options) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(options), options_));
  return connection_->DeleteRealm(request);
}

future<StatusOr<google::cloud::gaming::v1::Realm>>
RealmsServiceClient::UpdateRealm(google::cloud::gaming::v1::Realm const& realm, google::protobuf::FieldMask const& update_mask, Options options) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(options), options_));
  google::cloud::gaming::v1::UpdateRealmRequest request;
  *request.mutable_realm() = realm;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateRealm(request);
}

future<StatusOr<google::cloud::gaming::v1::Realm>>
RealmsServiceClient::UpdateRealm(google::cloud::gaming::v1::UpdateRealmRequest const& request, Options options) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(options), options_));
  return connection_->UpdateRealm(request);
}

StatusOr<google::cloud::gaming::v1::PreviewRealmUpdateResponse>
RealmsServiceClient::PreviewRealmUpdate(google::cloud::gaming::v1::PreviewRealmUpdateRequest const& request, Options options) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(options), options_));
  return connection_->PreviewRealmUpdate(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace gameservices
}  // namespace cloud
}  // namespace google
