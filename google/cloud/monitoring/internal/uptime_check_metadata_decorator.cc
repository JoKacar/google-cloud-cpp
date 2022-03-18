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
// source: google/monitoring/v3/uptime_service.proto

#include "google/cloud/monitoring/internal/uptime_check_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/status_or.h"
#include <google/monitoring/v3/uptime_service.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace monitoring_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

UptimeCheckServiceMetadata::UptimeCheckServiceMetadata(
    std::shared_ptr<UptimeCheckServiceStub> child)
    : child_(std::move(child)),
      api_client_header_(
          google::cloud::internal::ApiClientHeader("generator")) {}

StatusOr<google::monitoring::v3::ListUptimeCheckConfigsResponse>
UptimeCheckServiceMetadata::ListUptimeCheckConfigs(
    grpc::ClientContext& context,
    google::monitoring::v3::ListUptimeCheckConfigsRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListUptimeCheckConfigs(context, request);
}

StatusOr<google::monitoring::v3::UptimeCheckConfig>
UptimeCheckServiceMetadata::GetUptimeCheckConfig(
    grpc::ClientContext& context,
    google::monitoring::v3::GetUptimeCheckConfigRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetUptimeCheckConfig(context, request);
}

StatusOr<google::monitoring::v3::UptimeCheckConfig>
UptimeCheckServiceMetadata::CreateUptimeCheckConfig(
    grpc::ClientContext& context,
    google::monitoring::v3::CreateUptimeCheckConfigRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->CreateUptimeCheckConfig(context, request);
}

StatusOr<google::monitoring::v3::UptimeCheckConfig>
UptimeCheckServiceMetadata::UpdateUptimeCheckConfig(
    grpc::ClientContext& context,
    google::monitoring::v3::UpdateUptimeCheckConfigRequest const& request) {
  SetMetadata(context, "uptime_check_config.name=" +
                           request.uptime_check_config().name());
  return child_->UpdateUptimeCheckConfig(context, request);
}

Status UptimeCheckServiceMetadata::DeleteUptimeCheckConfig(
    grpc::ClientContext& context,
    google::monitoring::v3::DeleteUptimeCheckConfigRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->DeleteUptimeCheckConfig(context, request);
}

StatusOr<google::monitoring::v3::ListUptimeCheckIpsResponse>
UptimeCheckServiceMetadata::ListUptimeCheckIps(
    grpc::ClientContext& context,
    google::monitoring::v3::ListUptimeCheckIpsRequest const& request) {
  SetMetadata(context, {});
  return child_->ListUptimeCheckIps(context, request);
}

void UptimeCheckServiceMetadata::SetMetadata(
    grpc::ClientContext& context, std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context);
}

void UptimeCheckServiceMetadata::SetMetadata(grpc::ClientContext& context) {
  context.AddMetadata("x-goog-api-client", api_client_header_);
  auto const& options = internal::CurrentOptions();
  if (options.has<UserProjectOption>()) {
    context.AddMetadata("x-goog-user-project",
                        options.get<UserProjectOption>());
  }
  auto const& authority = options.get<AuthorityOption>();
  if (!authority.empty()) context.set_authority(authority);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace monitoring_internal
}  // namespace cloud
}  // namespace google
