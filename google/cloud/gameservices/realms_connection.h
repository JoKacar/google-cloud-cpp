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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GAMESERVICES_REALMS_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GAMESERVICES_REALMS_CONNECTION_H

#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/gameservices/internal/realms_retry_traits.h"
#include "google/cloud/gameservices/internal/realms_stub.h"
#include "google/cloud/gameservices/realms_connection_idempotency_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace gameservices {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using RealmsServiceRetryPolicy = ::google::cloud::internal::TraitBasedRetryPolicy<
    gameservices_internal::RealmsServiceRetryTraits>;

using RealmsServiceLimitedTimeRetryPolicy = ::google::cloud::internal::LimitedTimeRetryPolicy<
    gameservices_internal::RealmsServiceRetryTraits>;

using RealmsServiceLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        gameservices_internal::RealmsServiceRetryTraits>;

class RealmsServiceConnection {
 public:
  virtual ~RealmsServiceConnection() = 0;

  virtual StreamRange<google::cloud::gaming::v1::Realm>
  ListRealms(google::cloud::gaming::v1::ListRealmsRequest request);

  virtual StatusOr<google::cloud::gaming::v1::Realm>
  GetRealm(google::cloud::gaming::v1::GetRealmRequest const& request);

  virtual future<StatusOr<google::cloud::gaming::v1::Realm>>
  CreateRealm(google::cloud::gaming::v1::CreateRealmRequest const& request);

  virtual future<StatusOr<google::cloud::gaming::v1::OperationMetadata>>
  DeleteRealm(google::cloud::gaming::v1::DeleteRealmRequest const& request);

  virtual future<StatusOr<google::cloud::gaming::v1::Realm>>
  UpdateRealm(google::cloud::gaming::v1::UpdateRealmRequest const& request);

  virtual StatusOr<google::cloud::gaming::v1::PreviewRealmUpdateResponse>
  PreviewRealmUpdate(google::cloud::gaming::v1::PreviewRealmUpdateRequest const& request);
};

std::shared_ptr<RealmsServiceConnection> MakeRealmsServiceConnection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace gameservices
}  // namespace cloud
}  // namespace google

namespace google {
namespace cloud {
namespace gameservices_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

std::shared_ptr<gameservices::RealmsServiceConnection>
MakeRealmsServiceConnection(
    std::shared_ptr<RealmsServiceStub> stub,
    Options options);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace gameservices_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GAMESERVICES_REALMS_CONNECTION_H
