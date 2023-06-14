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
// source: google/cloud/dialogflow/cx/v3/intent.proto

#include "google/cloud/dialogflow_cx/internal/intents_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace dialogflow_cx_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

IntentsTracingConnection::IntentsTracingConnection(
    std::shared_ptr<dialogflow_cx::IntentsConnection> child)
    : child_(std::move(child)) {}

StreamRange<google::cloud::dialogflow::cx::v3::Intent>
IntentsTracingConnection::ListIntents(
    google::cloud::dialogflow::cx::v3::ListIntentsRequest request) {
  auto span =
      internal::MakeSpan("dialogflow_cx::IntentsConnection::ListIntents");
  auto scope = opentelemetry::trace::Scope(span);
  auto sr = child_->ListIntents(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::dialogflow::cx::v3::Intent>(std::move(span),
                                                 std::move(sr));
}

StatusOr<google::cloud::dialogflow::cx::v3::Intent>
IntentsTracingConnection::GetIntent(
    google::cloud::dialogflow::cx::v3::GetIntentRequest const& request) {
  auto span = internal::MakeSpan("dialogflow_cx::IntentsConnection::GetIntent");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetIntent(request));
}

StatusOr<google::cloud::dialogflow::cx::v3::Intent>
IntentsTracingConnection::CreateIntent(
    google::cloud::dialogflow::cx::v3::CreateIntentRequest const& request) {
  auto span =
      internal::MakeSpan("dialogflow_cx::IntentsConnection::CreateIntent");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CreateIntent(request));
}

StatusOr<google::cloud::dialogflow::cx::v3::Intent>
IntentsTracingConnection::UpdateIntent(
    google::cloud::dialogflow::cx::v3::UpdateIntentRequest const& request) {
  auto span =
      internal::MakeSpan("dialogflow_cx::IntentsConnection::UpdateIntent");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->UpdateIntent(request));
}

Status IntentsTracingConnection::DeleteIntent(
    google::cloud::dialogflow::cx::v3::DeleteIntentRequest const& request) {
  auto span =
      internal::MakeSpan("dialogflow_cx::IntentsConnection::DeleteIntent");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->DeleteIntent(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<dialogflow_cx::IntentsConnection> MakeIntentsTracingConnection(
    std::shared_ptr<dialogflow_cx::IntentsConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<IntentsTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_cx_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
