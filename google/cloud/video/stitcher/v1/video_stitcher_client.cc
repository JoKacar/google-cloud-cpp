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
// source: google/cloud/video/stitcher/v1/video_stitcher_service.proto

#include "google/cloud/video/stitcher/v1/video_stitcher_client.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace video_stitcher_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

VideoStitcherServiceClient::VideoStitcherServiceClient(
    std::shared_ptr<VideoStitcherServiceConnection> connection, Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
VideoStitcherServiceClient::~VideoStitcherServiceClient() = default;

future<StatusOr<google::cloud::video::stitcher::v1::CdnKey>>
VideoStitcherServiceClient::CreateCdnKey(
    std::string const& parent,
    google::cloud::video::stitcher::v1::CdnKey const& cdn_key,
    std::string const& cdn_key_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::video::stitcher::v1::CreateCdnKeyRequest request;
  request.set_parent(parent);
  *request.mutable_cdn_key() = cdn_key;
  request.set_cdn_key_id(cdn_key_id);
  return connection_->CreateCdnKey(request);
}

future<StatusOr<google::cloud::video::stitcher::v1::CdnKey>>
VideoStitcherServiceClient::CreateCdnKey(
    google::cloud::video::stitcher::v1::CreateCdnKeyRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateCdnKey(request);
}

StreamRange<google::cloud::video::stitcher::v1::CdnKey>
VideoStitcherServiceClient::ListCdnKeys(std::string const& parent,
                                        Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::video::stitcher::v1::ListCdnKeysRequest request;
  request.set_parent(parent);
  return connection_->ListCdnKeys(request);
}

StreamRange<google::cloud::video::stitcher::v1::CdnKey>
VideoStitcherServiceClient::ListCdnKeys(
    google::cloud::video::stitcher::v1::ListCdnKeysRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListCdnKeys(std::move(request));
}

StatusOr<google::cloud::video::stitcher::v1::CdnKey>
VideoStitcherServiceClient::GetCdnKey(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::video::stitcher::v1::GetCdnKeyRequest request;
  request.set_name(name);
  return connection_->GetCdnKey(request);
}

StatusOr<google::cloud::video::stitcher::v1::CdnKey>
VideoStitcherServiceClient::GetCdnKey(
    google::cloud::video::stitcher::v1::GetCdnKeyRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetCdnKey(request);
}

future<StatusOr<google::cloud::video::stitcher::v1::OperationMetadata>>
VideoStitcherServiceClient::DeleteCdnKey(std::string const& name,
                                         Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::video::stitcher::v1::DeleteCdnKeyRequest request;
  request.set_name(name);
  return connection_->DeleteCdnKey(request);
}

future<StatusOr<google::cloud::video::stitcher::v1::OperationMetadata>>
VideoStitcherServiceClient::DeleteCdnKey(
    google::cloud::video::stitcher::v1::DeleteCdnKeyRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteCdnKey(request);
}

future<StatusOr<google::cloud::video::stitcher::v1::CdnKey>>
VideoStitcherServiceClient::UpdateCdnKey(
    google::cloud::video::stitcher::v1::CdnKey const& cdn_key,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::video::stitcher::v1::UpdateCdnKeyRequest request;
  *request.mutable_cdn_key() = cdn_key;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateCdnKey(request);
}

future<StatusOr<google::cloud::video::stitcher::v1::CdnKey>>
VideoStitcherServiceClient::UpdateCdnKey(
    google::cloud::video::stitcher::v1::UpdateCdnKeyRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateCdnKey(request);
}

StatusOr<google::cloud::video::stitcher::v1::VodSession>
VideoStitcherServiceClient::CreateVodSession(
    std::string const& parent,
    google::cloud::video::stitcher::v1::VodSession const& vod_session,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::video::stitcher::v1::CreateVodSessionRequest request;
  request.set_parent(parent);
  *request.mutable_vod_session() = vod_session;
  return connection_->CreateVodSession(request);
}

StatusOr<google::cloud::video::stitcher::v1::VodSession>
VideoStitcherServiceClient::CreateVodSession(
    google::cloud::video::stitcher::v1::CreateVodSessionRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateVodSession(request);
}

StatusOr<google::cloud::video::stitcher::v1::VodSession>
VideoStitcherServiceClient::GetVodSession(std::string const& name,
                                          Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::video::stitcher::v1::GetVodSessionRequest request;
  request.set_name(name);
  return connection_->GetVodSession(request);
}

StatusOr<google::cloud::video::stitcher::v1::VodSession>
VideoStitcherServiceClient::GetVodSession(
    google::cloud::video::stitcher::v1::GetVodSessionRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetVodSession(request);
}

StreamRange<google::cloud::video::stitcher::v1::VodStitchDetail>
VideoStitcherServiceClient::ListVodStitchDetails(std::string const& parent,
                                                 Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::video::stitcher::v1::ListVodStitchDetailsRequest request;
  request.set_parent(parent);
  return connection_->ListVodStitchDetails(request);
}

StreamRange<google::cloud::video::stitcher::v1::VodStitchDetail>
VideoStitcherServiceClient::ListVodStitchDetails(
    google::cloud::video::stitcher::v1::ListVodStitchDetailsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListVodStitchDetails(std::move(request));
}

StatusOr<google::cloud::video::stitcher::v1::VodStitchDetail>
VideoStitcherServiceClient::GetVodStitchDetail(std::string const& name,
                                               Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::video::stitcher::v1::GetVodStitchDetailRequest request;
  request.set_name(name);
  return connection_->GetVodStitchDetail(request);
}

StatusOr<google::cloud::video::stitcher::v1::VodStitchDetail>
VideoStitcherServiceClient::GetVodStitchDetail(
    google::cloud::video::stitcher::v1::GetVodStitchDetailRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetVodStitchDetail(request);
}

StreamRange<google::cloud::video::stitcher::v1::VodAdTagDetail>
VideoStitcherServiceClient::ListVodAdTagDetails(std::string const& parent,
                                                Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::video::stitcher::v1::ListVodAdTagDetailsRequest request;
  request.set_parent(parent);
  return connection_->ListVodAdTagDetails(request);
}

StreamRange<google::cloud::video::stitcher::v1::VodAdTagDetail>
VideoStitcherServiceClient::ListVodAdTagDetails(
    google::cloud::video::stitcher::v1::ListVodAdTagDetailsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListVodAdTagDetails(std::move(request));
}

StatusOr<google::cloud::video::stitcher::v1::VodAdTagDetail>
VideoStitcherServiceClient::GetVodAdTagDetail(std::string const& name,
                                              Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::video::stitcher::v1::GetVodAdTagDetailRequest request;
  request.set_name(name);
  return connection_->GetVodAdTagDetail(request);
}

StatusOr<google::cloud::video::stitcher::v1::VodAdTagDetail>
VideoStitcherServiceClient::GetVodAdTagDetail(
    google::cloud::video::stitcher::v1::GetVodAdTagDetailRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetVodAdTagDetail(request);
}

StreamRange<google::cloud::video::stitcher::v1::LiveAdTagDetail>
VideoStitcherServiceClient::ListLiveAdTagDetails(std::string const& parent,
                                                 Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::video::stitcher::v1::ListLiveAdTagDetailsRequest request;
  request.set_parent(parent);
  return connection_->ListLiveAdTagDetails(request);
}

StreamRange<google::cloud::video::stitcher::v1::LiveAdTagDetail>
VideoStitcherServiceClient::ListLiveAdTagDetails(
    google::cloud::video::stitcher::v1::ListLiveAdTagDetailsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListLiveAdTagDetails(std::move(request));
}

StatusOr<google::cloud::video::stitcher::v1::LiveAdTagDetail>
VideoStitcherServiceClient::GetLiveAdTagDetail(std::string const& name,
                                               Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::video::stitcher::v1::GetLiveAdTagDetailRequest request;
  request.set_name(name);
  return connection_->GetLiveAdTagDetail(request);
}

StatusOr<google::cloud::video::stitcher::v1::LiveAdTagDetail>
VideoStitcherServiceClient::GetLiveAdTagDetail(
    google::cloud::video::stitcher::v1::GetLiveAdTagDetailRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetLiveAdTagDetail(request);
}

future<StatusOr<google::cloud::video::stitcher::v1::Slate>>
VideoStitcherServiceClient::CreateSlate(
    std::string const& parent,
    google::cloud::video::stitcher::v1::Slate const& slate,
    std::string const& slate_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::video::stitcher::v1::CreateSlateRequest request;
  request.set_parent(parent);
  *request.mutable_slate() = slate;
  request.set_slate_id(slate_id);
  return connection_->CreateSlate(request);
}

future<StatusOr<google::cloud::video::stitcher::v1::Slate>>
VideoStitcherServiceClient::CreateSlate(
    google::cloud::video::stitcher::v1::CreateSlateRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateSlate(request);
}

StreamRange<google::cloud::video::stitcher::v1::Slate>
VideoStitcherServiceClient::ListSlates(std::string const& parent,
                                       Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::video::stitcher::v1::ListSlatesRequest request;
  request.set_parent(parent);
  return connection_->ListSlates(request);
}

StreamRange<google::cloud::video::stitcher::v1::Slate>
VideoStitcherServiceClient::ListSlates(
    google::cloud::video::stitcher::v1::ListSlatesRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListSlates(std::move(request));
}

StatusOr<google::cloud::video::stitcher::v1::Slate>
VideoStitcherServiceClient::GetSlate(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::video::stitcher::v1::GetSlateRequest request;
  request.set_name(name);
  return connection_->GetSlate(request);
}

StatusOr<google::cloud::video::stitcher::v1::Slate>
VideoStitcherServiceClient::GetSlate(
    google::cloud::video::stitcher::v1::GetSlateRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetSlate(request);
}

future<StatusOr<google::cloud::video::stitcher::v1::Slate>>
VideoStitcherServiceClient::UpdateSlate(
    google::cloud::video::stitcher::v1::Slate const& slate,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::video::stitcher::v1::UpdateSlateRequest request;
  *request.mutable_slate() = slate;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateSlate(request);
}

future<StatusOr<google::cloud::video::stitcher::v1::Slate>>
VideoStitcherServiceClient::UpdateSlate(
    google::cloud::video::stitcher::v1::UpdateSlateRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateSlate(request);
}

future<StatusOr<google::cloud::video::stitcher::v1::OperationMetadata>>
VideoStitcherServiceClient::DeleteSlate(std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::video::stitcher::v1::DeleteSlateRequest request;
  request.set_name(name);
  return connection_->DeleteSlate(request);
}

future<StatusOr<google::cloud::video::stitcher::v1::OperationMetadata>>
VideoStitcherServiceClient::DeleteSlate(
    google::cloud::video::stitcher::v1::DeleteSlateRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteSlate(request);
}

StatusOr<google::cloud::video::stitcher::v1::LiveSession>
VideoStitcherServiceClient::CreateLiveSession(
    std::string const& parent,
    google::cloud::video::stitcher::v1::LiveSession const& live_session,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::video::stitcher::v1::CreateLiveSessionRequest request;
  request.set_parent(parent);
  *request.mutable_live_session() = live_session;
  return connection_->CreateLiveSession(request);
}

StatusOr<google::cloud::video::stitcher::v1::LiveSession>
VideoStitcherServiceClient::CreateLiveSession(
    google::cloud::video::stitcher::v1::CreateLiveSessionRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateLiveSession(request);
}

StatusOr<google::cloud::video::stitcher::v1::LiveSession>
VideoStitcherServiceClient::GetLiveSession(std::string const& name,
                                           Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::video::stitcher::v1::GetLiveSessionRequest request;
  request.set_name(name);
  return connection_->GetLiveSession(request);
}

StatusOr<google::cloud::video::stitcher::v1::LiveSession>
VideoStitcherServiceClient::GetLiveSession(
    google::cloud::video::stitcher::v1::GetLiveSessionRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetLiveSession(request);
}

future<StatusOr<google::cloud::video::stitcher::v1::LiveConfig>>
VideoStitcherServiceClient::CreateLiveConfig(
    std::string const& parent,
    google::cloud::video::stitcher::v1::LiveConfig const& live_config,
    std::string const& live_config_id, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::video::stitcher::v1::CreateLiveConfigRequest request;
  request.set_parent(parent);
  *request.mutable_live_config() = live_config;
  request.set_live_config_id(live_config_id);
  return connection_->CreateLiveConfig(request);
}

future<StatusOr<google::cloud::video::stitcher::v1::LiveConfig>>
VideoStitcherServiceClient::CreateLiveConfig(
    google::cloud::video::stitcher::v1::CreateLiveConfigRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateLiveConfig(request);
}

StreamRange<google::cloud::video::stitcher::v1::LiveConfig>
VideoStitcherServiceClient::ListLiveConfigs(std::string const& parent,
                                            Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::video::stitcher::v1::ListLiveConfigsRequest request;
  request.set_parent(parent);
  return connection_->ListLiveConfigs(request);
}

StreamRange<google::cloud::video::stitcher::v1::LiveConfig>
VideoStitcherServiceClient::ListLiveConfigs(
    google::cloud::video::stitcher::v1::ListLiveConfigsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListLiveConfigs(std::move(request));
}

StatusOr<google::cloud::video::stitcher::v1::LiveConfig>
VideoStitcherServiceClient::GetLiveConfig(std::string const& name,
                                          Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::video::stitcher::v1::GetLiveConfigRequest request;
  request.set_name(name);
  return connection_->GetLiveConfig(request);
}

StatusOr<google::cloud::video::stitcher::v1::LiveConfig>
VideoStitcherServiceClient::GetLiveConfig(
    google::cloud::video::stitcher::v1::GetLiveConfigRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetLiveConfig(request);
}

future<StatusOr<google::cloud::video::stitcher::v1::OperationMetadata>>
VideoStitcherServiceClient::DeleteLiveConfig(std::string const& name,
                                             Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::video::stitcher::v1::DeleteLiveConfigRequest request;
  request.set_name(name);
  return connection_->DeleteLiveConfig(request);
}

future<StatusOr<google::cloud::video::stitcher::v1::OperationMetadata>>
VideoStitcherServiceClient::DeleteLiveConfig(
    google::cloud::video::stitcher::v1::DeleteLiveConfigRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteLiveConfig(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace video_stitcher_v1
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
