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
// source: google/cloud/compute/snapshot_settings/v1/snapshot_settings.proto

#include "google/cloud/compute/snapshot_settings/v1/internal/snapshot_settings_rest_connection_impl.h"
#include "google/cloud/common_options.h"
#include "google/cloud/compute/snapshot_settings/v1/internal/snapshot_settings_rest_stub_factory.h"
#include "google/cloud/credentials.h"
#include "google/cloud/internal/async_rest_long_running_operation.h"
#include "google/cloud/internal/extract_long_running_result.h"
#include "google/cloud/internal/rest_retry_loop.h"
#include "google/cloud/rest_options.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_snapshot_settings_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

SnapshotSettingsRestConnectionImpl::SnapshotSettingsRestConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<compute_snapshot_settings_v1_internal::SnapshotSettingsRestStub> stub,
    Options options)
  : background_(std::move(background)), stub_(std::move(stub)),
    options_(internal::MergeOptions(
        std::move(options),
        SnapshotSettingsConnection::options())) {}

StatusOr<google::cloud::cpp::compute::v1::SnapshotSettings>
SnapshotSettingsRestConnectionImpl::GetSnapshotSettings(google::cloud::cpp::compute::snapshot_settings::v1::GetSnapshotSettingsRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::rest_internal::RestRetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetSnapshotSettings(request),
      [this](rest_internal::RestContext& rest_context,
             google::cloud::cpp::compute::snapshot_settings::v1::GetSnapshotSettingsRequest const& request) {
        return stub_->GetSnapshotSettings(rest_context, request);
      },
      request, __func__);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
SnapshotSettingsRestConnectionImpl::PatchSnapshotSettings(google::cloud::cpp::compute::snapshot_settings::v1::PatchSnapshotSettingsRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return rest_internal::AsyncRestLongRunningOperation<
    google::cloud::cpp::compute::v1::Operation,
    google::cloud::cpp::compute::v1::Operation,
    google::cloud::cpp::compute::global_operations::v1::GetOperationRequest,
    google::cloud::cpp::compute::global_operations::v1::DeleteOperationRequest>(
    background_->cq(), request,
    [stub = stub_](CompletionQueue& cq,
                   std::unique_ptr<rest_internal::RestContext> context,
                   google::cloud::cpp::compute::snapshot_settings::v1::PatchSnapshotSettingsRequest const& request) {
     return stub->AsyncPatchSnapshotSettings(cq, std::move(context), request);
    },
    [stub = stub_](CompletionQueue& cq,
                   std::unique_ptr<rest_internal::RestContext> context,
                   google::cloud::cpp::compute::global_operations::v1::GetOperationRequest const& request) {
     return stub->AsyncGetOperation(cq, std::move(context), request);
    },
    [stub = stub_](CompletionQueue& cq,
                   std::unique_ptr<rest_internal::RestContext> context,
                   google::cloud::cpp::compute::global_operations::v1::DeleteOperationRequest const& request) {
     return stub->AsyncCancelOperation(cq, std::move(context), request);
    },
    [](StatusOr<google::cloud::cpp::compute::v1::Operation> op, std::string const&) {
        return op;
    },
    retry_policy(*current), backoff_policy(*current),
    idempotency_policy(*current)->PatchSnapshotSettings(request),
    polling_policy(*current), __func__,
    [](google::cloud::cpp::compute::v1::Operation const& op) {
        return op.status() == "DONE";
    },
    [request](std::string const& op, google::cloud::cpp::compute::global_operations::v1::GetOperationRequest& r) {

      r.set_project(request.project());
      r.set_operation(op);

    },
    [request](std::string const& op, google::cloud::cpp::compute::global_operations::v1::DeleteOperationRequest& r) {

      r.set_project(request.project());
      r.set_operation(op);

    });

}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_snapshot_settings_v1_internal
}  // namespace cloud
}  // namespace google
