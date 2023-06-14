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
// source: google/cloud/video/livestream/v1/service.proto

#include "google/cloud/video/livestream/v1/internal/livestream_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace video_livestream_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

LivestreamServiceTracingConnection::LivestreamServiceTracingConnection(
    std::shared_ptr<video_livestream_v1::LivestreamServiceConnection> child)
    : child_(std::move(child)) {}

future<StatusOr<google::cloud::video::livestream::v1::Channel>>
LivestreamServiceTracingConnection::CreateChannel(
    google::cloud::video::livestream::v1::CreateChannelRequest const& request) {
  auto span = internal::MakeSpan(
      "video_livestream_v1::LivestreamServiceConnection::CreateChannel");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->CreateChannel(request));
}

StreamRange<google::cloud::video::livestream::v1::Channel>
LivestreamServiceTracingConnection::ListChannels(
    google::cloud::video::livestream::v1::ListChannelsRequest request) {
  auto span = internal::MakeSpan(
      "video_livestream_v1::LivestreamServiceConnection::ListChannels");
  auto scope = opentelemetry::trace::Scope(span);
  auto sr = child_->ListChannels(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::video::livestream::v1::Channel>(std::move(span),
                                                     std::move(sr));
}

StatusOr<google::cloud::video::livestream::v1::Channel>
LivestreamServiceTracingConnection::GetChannel(
    google::cloud::video::livestream::v1::GetChannelRequest const& request) {
  auto span = internal::MakeSpan(
      "video_livestream_v1::LivestreamServiceConnection::GetChannel");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetChannel(request));
}

future<StatusOr<google::cloud::video::livestream::v1::OperationMetadata>>
LivestreamServiceTracingConnection::DeleteChannel(
    google::cloud::video::livestream::v1::DeleteChannelRequest const& request) {
  auto span = internal::MakeSpan(
      "video_livestream_v1::LivestreamServiceConnection::DeleteChannel");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->DeleteChannel(request));
}

future<StatusOr<google::cloud::video::livestream::v1::Channel>>
LivestreamServiceTracingConnection::UpdateChannel(
    google::cloud::video::livestream::v1::UpdateChannelRequest const& request) {
  auto span = internal::MakeSpan(
      "video_livestream_v1::LivestreamServiceConnection::UpdateChannel");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->UpdateChannel(request));
}

future<StatusOr<google::cloud::video::livestream::v1::ChannelOperationResponse>>
LivestreamServiceTracingConnection::StartChannel(
    google::cloud::video::livestream::v1::StartChannelRequest const& request) {
  auto span = internal::MakeSpan(
      "video_livestream_v1::LivestreamServiceConnection::StartChannel");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->StartChannel(request));
}

future<StatusOr<google::cloud::video::livestream::v1::ChannelOperationResponse>>
LivestreamServiceTracingConnection::StopChannel(
    google::cloud::video::livestream::v1::StopChannelRequest const& request) {
  auto span = internal::MakeSpan(
      "video_livestream_v1::LivestreamServiceConnection::StopChannel");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->StopChannel(request));
}

future<StatusOr<google::cloud::video::livestream::v1::Input>>
LivestreamServiceTracingConnection::CreateInput(
    google::cloud::video::livestream::v1::CreateInputRequest const& request) {
  auto span = internal::MakeSpan(
      "video_livestream_v1::LivestreamServiceConnection::CreateInput");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->CreateInput(request));
}

StreamRange<google::cloud::video::livestream::v1::Input>
LivestreamServiceTracingConnection::ListInputs(
    google::cloud::video::livestream::v1::ListInputsRequest request) {
  auto span = internal::MakeSpan(
      "video_livestream_v1::LivestreamServiceConnection::ListInputs");
  auto scope = opentelemetry::trace::Scope(span);
  auto sr = child_->ListInputs(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::video::livestream::v1::Input>(std::move(span),
                                                   std::move(sr));
}

StatusOr<google::cloud::video::livestream::v1::Input>
LivestreamServiceTracingConnection::GetInput(
    google::cloud::video::livestream::v1::GetInputRequest const& request) {
  auto span = internal::MakeSpan(
      "video_livestream_v1::LivestreamServiceConnection::GetInput");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetInput(request));
}

future<StatusOr<google::cloud::video::livestream::v1::OperationMetadata>>
LivestreamServiceTracingConnection::DeleteInput(
    google::cloud::video::livestream::v1::DeleteInputRequest const& request) {
  auto span = internal::MakeSpan(
      "video_livestream_v1::LivestreamServiceConnection::DeleteInput");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->DeleteInput(request));
}

future<StatusOr<google::cloud::video::livestream::v1::Input>>
LivestreamServiceTracingConnection::UpdateInput(
    google::cloud::video::livestream::v1::UpdateInputRequest const& request) {
  auto span = internal::MakeSpan(
      "video_livestream_v1::LivestreamServiceConnection::UpdateInput");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(std::move(span), child_->UpdateInput(request));
}

StatusOr<google::cloud::video::livestream::v1::Event>
LivestreamServiceTracingConnection::CreateEvent(
    google::cloud::video::livestream::v1::CreateEventRequest const& request) {
  auto span = internal::MakeSpan(
      "video_livestream_v1::LivestreamServiceConnection::CreateEvent");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CreateEvent(request));
}

StreamRange<google::cloud::video::livestream::v1::Event>
LivestreamServiceTracingConnection::ListEvents(
    google::cloud::video::livestream::v1::ListEventsRequest request) {
  auto span = internal::MakeSpan(
      "video_livestream_v1::LivestreamServiceConnection::ListEvents");
  auto scope = opentelemetry::trace::Scope(span);
  auto sr = child_->ListEvents(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::video::livestream::v1::Event>(std::move(span),
                                                   std::move(sr));
}

StatusOr<google::cloud::video::livestream::v1::Event>
LivestreamServiceTracingConnection::GetEvent(
    google::cloud::video::livestream::v1::GetEventRequest const& request) {
  auto span = internal::MakeSpan(
      "video_livestream_v1::LivestreamServiceConnection::GetEvent");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetEvent(request));
}

Status LivestreamServiceTracingConnection::DeleteEvent(
    google::cloud::video::livestream::v1::DeleteEventRequest const& request) {
  auto span = internal::MakeSpan(
      "video_livestream_v1::LivestreamServiceConnection::DeleteEvent");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->DeleteEvent(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<video_livestream_v1::LivestreamServiceConnection>
MakeLivestreamServiceTracingConnection(
    std::shared_ptr<video_livestream_v1::LivestreamServiceConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn =
        std::make_shared<LivestreamServiceTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace video_livestream_v1_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
