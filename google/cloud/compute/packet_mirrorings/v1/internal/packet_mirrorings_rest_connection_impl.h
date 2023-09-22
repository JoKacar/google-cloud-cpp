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
// source: google/cloud/compute/packet_mirrorings/v1/packet_mirrorings.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_PACKET_MIRRORINGS_V1_INTERNAL_PACKET_MIRRORINGS_REST_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_PACKET_MIRRORINGS_V1_INTERNAL_PACKET_MIRRORINGS_REST_CONNECTION_IMPL_H

#include "google/cloud/compute/packet_mirrorings/v1/internal/packet_mirrorings_rest_stub.h"
#include "google/cloud/compute/packet_mirrorings/v1/internal/packet_mirrorings_retry_traits.h"
#include "google/cloud/compute/packet_mirrorings/v1/packet_mirrorings_connection.h"
#include "google/cloud/compute/packet_mirrorings/v1/packet_mirrorings_connection_idempotency_policy.h"
#include "google/cloud/compute/packet_mirrorings/v1/packet_mirrorings_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/region_operations/v1/region_operations.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace compute_packet_mirrorings_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class PacketMirroringsRestConnectionImpl
    : public compute_packet_mirrorings_v1::PacketMirroringsConnection {
 public:
  ~PacketMirroringsRestConnectionImpl() override = default;

  PacketMirroringsRestConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<
          compute_packet_mirrorings_v1_internal::PacketMirroringsRestStub>
          stub,
      Options options);

  Options options() override { return options_; }

  StreamRange<std::pair<
      std::string, google::cloud::cpp::compute::v1::PacketMirroringsScopedList>>
  AggregatedListPacketMirrorings(
      google::cloud::cpp::compute::packet_mirrorings::v1::
          AggregatedListPacketMirroringsRequest request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeletePacketMirroring(
      google::cloud::cpp::compute::packet_mirrorings::v1::
          DeletePacketMirroringRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::PacketMirroring> GetPacketMirroring(
      google::cloud::cpp::compute::packet_mirrorings::v1::
          GetPacketMirroringRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertPacketMirroring(
      google::cloud::cpp::compute::packet_mirrorings::v1::
          InsertPacketMirroringRequest const& request) override;

  StreamRange<google::cloud::cpp::compute::v1::PacketMirroring>
  ListPacketMirrorings(google::cloud::cpp::compute::packet_mirrorings::v1::
                           ListPacketMirroringsRequest request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  PatchPacketMirroring(google::cloud::cpp::compute::packet_mirrorings::v1::
                           PatchPacketMirroringRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
  TestIamPermissions(google::cloud::cpp::compute::packet_mirrorings::v1::
                         TestIamPermissionsRequest const& request) override;

 private:
  static std::unique_ptr<
      compute_packet_mirrorings_v1::PacketMirroringsRetryPolicy>
  retry_policy(Options const& options) {
    return options
        .get<compute_packet_mirrorings_v1::PacketMirroringsRetryPolicyOption>()
        ->clone();
  }

  static std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
    return options
        .get<
            compute_packet_mirrorings_v1::PacketMirroringsBackoffPolicyOption>()
        ->clone();
  }

  static std::unique_ptr<
      compute_packet_mirrorings_v1::PacketMirroringsConnectionIdempotencyPolicy>
  idempotency_policy(Options const& options) {
    return options
        .get<compute_packet_mirrorings_v1::
                 PacketMirroringsConnectionIdempotencyPolicyOption>()
        ->clone();
  }

  static std::unique_ptr<PollingPolicy> polling_policy(Options const& options) {
    return options
        .get<
            compute_packet_mirrorings_v1::PacketMirroringsPollingPolicyOption>()
        ->clone();
  }

  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<
      compute_packet_mirrorings_v1_internal::PacketMirroringsRestStub>
      stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_packet_mirrorings_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_PACKET_MIRRORINGS_V1_INTERNAL_PACKET_MIRRORINGS_REST_CONNECTION_IMPL_H
