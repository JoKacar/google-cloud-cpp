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
// source: google/cloud/compute/autoscalers/v1/autoscalers.proto

#include "google/cloud/compute/autoscalers/v1/autoscalers_client.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace compute_autoscalers_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

AutoscalersClient::AutoscalersClient(
    ExperimentalTag, std::shared_ptr<AutoscalersConnection> connection,
    Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
AutoscalersClient::~AutoscalersClient() = default;

StatusOr<google::cloud::cpp::compute::v1::AutoscalerAggregatedList>
AutoscalersClient::AggregatedListAutoscalers(std::string const& project,
                                             Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::autoscalers::v1::AggregatedListAutoscalersRequest
      request;
  request.set_project(project);
  return connection_->AggregatedListAutoscalers(request);
}

StatusOr<google::cloud::cpp::compute::v1::AutoscalerAggregatedList>
AutoscalersClient::AggregatedListAutoscalers(
    google::cloud::cpp::compute::autoscalers::v1::
        AggregatedListAutoscalersRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->AggregatedListAutoscalers(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
AutoscalersClient::DeleteAutoscalers(std::string const& project,
                                     std::string const& zone,
                                     std::string const& autoscaler,
                                     Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::autoscalers::v1::DeleteAutoscalersRequest
      request;
  request.set_project(project);
  request.set_zone(zone);
  request.set_autoscaler(autoscaler);
  return connection_->DeleteAutoscalers(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
AutoscalersClient::DeleteAutoscalers(
    google::cloud::cpp::compute::autoscalers::v1::
        DeleteAutoscalersRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteAutoscalers(request);
}

StatusOr<google::cloud::cpp::compute::v1::Autoscaler>
AutoscalersClient::GetAutoscalers(std::string const& project,
                                  std::string const& zone,
                                  std::string const& autoscaler, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::autoscalers::v1::GetAutoscalersRequest request;
  request.set_project(project);
  request.set_zone(zone);
  request.set_autoscaler(autoscaler);
  return connection_->GetAutoscalers(request);
}

StatusOr<google::cloud::cpp::compute::v1::Autoscaler>
AutoscalersClient::GetAutoscalers(
    google::cloud::cpp::compute::autoscalers::v1::GetAutoscalersRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetAutoscalers(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
AutoscalersClient::InsertAutoscalers(
    std::string const& project, std::string const& zone,
    google::cloud::cpp::compute::v1::Autoscaler const& autoscaler_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::autoscalers::v1::InsertAutoscalersRequest
      request;
  request.set_project(project);
  request.set_zone(zone);
  *request.mutable_autoscaler_resource() = autoscaler_resource;
  return connection_->InsertAutoscalers(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
AutoscalersClient::InsertAutoscalers(
    google::cloud::cpp::compute::autoscalers::v1::
        InsertAutoscalersRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->InsertAutoscalers(request);
}

StreamRange<google::cloud::cpp::compute::v1::Autoscaler>
AutoscalersClient::ListAutoscalers(std::string const& project,
                                   std::string const& zone, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::autoscalers::v1::ListAutoscalersRequest request;
  request.set_project(project);
  request.set_zone(zone);
  return connection_->ListAutoscalers(request);
}

StreamRange<google::cloud::cpp::compute::v1::Autoscaler>
AutoscalersClient::ListAutoscalers(
    google::cloud::cpp::compute::autoscalers::v1::ListAutoscalersRequest
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListAutoscalers(std::move(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
AutoscalersClient::PatchAutoscalers(
    std::string const& project, std::string const& zone,
    google::cloud::cpp::compute::v1::Autoscaler const& autoscaler_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::autoscalers::v1::PatchAutoscalersRequest request;
  request.set_project(project);
  request.set_zone(zone);
  *request.mutable_autoscaler_resource() = autoscaler_resource;
  return connection_->PatchAutoscalers(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
AutoscalersClient::PatchAutoscalers(
    google::cloud::cpp::compute::autoscalers::v1::PatchAutoscalersRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->PatchAutoscalers(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
AutoscalersClient::UpdateAutoscalers(
    std::string const& project, std::string const& zone,
    google::cloud::cpp::compute::v1::Autoscaler const& autoscaler_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::autoscalers::v1::UpdateAutoscalersRequest
      request;
  request.set_project(project);
  request.set_zone(zone);
  *request.mutable_autoscaler_resource() = autoscaler_resource;
  return connection_->UpdateAutoscalers(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
AutoscalersClient::UpdateAutoscalers(
    google::cloud::cpp::compute::autoscalers::v1::
        UpdateAutoscalersRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateAutoscalers(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_autoscalers_v1
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
