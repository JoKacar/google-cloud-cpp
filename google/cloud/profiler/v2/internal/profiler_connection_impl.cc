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
// source: google/devtools/cloudprofiler/v2/profiler.proto

#include "google/cloud/profiler/v2/internal/profiler_connection_impl.h"
#include "google/cloud/profiler/v2/internal/profiler_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace profiler_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ProfilerServiceConnectionImpl::ProfilerServiceConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<profiler_v2_internal::ProfilerServiceStub> stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(std::move(options),
                                      ProfilerServiceConnection::options())) {}

StatusOr<google::devtools::cloudprofiler::v2::Profile>
ProfilerServiceConnectionImpl::CreateProfile(
    google::devtools::cloudprofiler::v2::CreateProfileRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->CreateProfile(request),
      [this](grpc::ClientContext& context,
             google::devtools::cloudprofiler::v2::CreateProfileRequest const&
                 request) { return stub_->CreateProfile(context, request); },
      request, __func__);
}

StatusOr<google::devtools::cloudprofiler::v2::Profile>
ProfilerServiceConnectionImpl::CreateOfflineProfile(
    google::devtools::cloudprofiler::v2::CreateOfflineProfileRequest const&
        request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->CreateOfflineProfile(request),
      [this](grpc::ClientContext& context,
             google::devtools::cloudprofiler::v2::
                 CreateOfflineProfileRequest const& request) {
        return stub_->CreateOfflineProfile(context, request);
      },
      request, __func__);
}

StatusOr<google::devtools::cloudprofiler::v2::Profile>
ProfilerServiceConnectionImpl::UpdateProfile(
    google::devtools::cloudprofiler::v2::UpdateProfileRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->UpdateProfile(request),
      [this](grpc::ClientContext& context,
             google::devtools::cloudprofiler::v2::UpdateProfileRequest const&
                 request) { return stub_->UpdateProfile(context, request); },
      request, __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace profiler_v2_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
