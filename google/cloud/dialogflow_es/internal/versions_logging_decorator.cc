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
// source: google/cloud/dialogflow/v2/version.proto

#include "google/cloud/dialogflow_es/internal/versions_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <google/cloud/dialogflow/v2/version.grpc.pb.h>
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace dialogflow_es_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

VersionsLogging::VersionsLogging(std::shared_ptr<VersionsStub> child,
                                 TracingOptions tracing_options,
                                 std::set<std::string> components)
    : child_(std::move(child)),
      tracing_options_(std::move(tracing_options)),
      components_(std::move(components)) {}

StatusOr<google::cloud::dialogflow::v2::ListVersionsResponse>
VersionsLogging::ListVersions(
    grpc::ClientContext& context,
    google::cloud::dialogflow::v2::ListVersionsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context,
          google::cloud::dialogflow::v2::ListVersionsRequest const& request) {
        return child_->ListVersions(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::dialogflow::v2::Version> VersionsLogging::GetVersion(
    grpc::ClientContext& context,
    google::cloud::dialogflow::v2::GetVersionRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::dialogflow::v2::GetVersionRequest const& request) {
        return child_->GetVersion(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::dialogflow::v2::Version> VersionsLogging::CreateVersion(
    grpc::ClientContext& context,
    google::cloud::dialogflow::v2::CreateVersionRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context,
          google::cloud::dialogflow::v2::CreateVersionRequest const& request) {
        return child_->CreateVersion(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::dialogflow::v2::Version> VersionsLogging::UpdateVersion(
    grpc::ClientContext& context,
    google::cloud::dialogflow::v2::UpdateVersionRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context,
          google::cloud::dialogflow::v2::UpdateVersionRequest const& request) {
        return child_->UpdateVersion(context, request);
      },
      context, request, __func__, tracing_options_);
}

Status VersionsLogging::DeleteVersion(
    grpc::ClientContext& context,
    google::cloud::dialogflow::v2::DeleteVersionRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context,
          google::cloud::dialogflow::v2::DeleteVersionRequest const& request) {
        return child_->DeleteVersion(context, request);
      },
      context, request, __func__, tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
