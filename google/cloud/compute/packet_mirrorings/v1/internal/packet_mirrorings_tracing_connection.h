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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_PACKET_MIRRORINGS_V1_INTERNAL_PACKET_MIRRORINGS_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_PACKET_MIRRORINGS_V1_INTERNAL_PACKET_MIRRORINGS_TRACING_CONNECTION_H

#include "google/cloud/compute/packet_mirrorings/v1/packet_mirrorings_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_packet_mirrorings_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class PacketMirroringsTracingConnection
    : public compute_packet_mirrorings_v1::PacketMirroringsConnection {
 public:
  ~PacketMirroringsTracingConnection() override = default;

  explicit PacketMirroringsTracingConnection(
    std::shared_ptr<compute_packet_mirrorings_v1::PacketMirroringsConnection> child);

  Options options() override { return child_->options(); }

  StatusOr<google::cloud::cpp::compute::v1::PacketMirroringAggregatedList>
  AggregatedListPacketMirrorings(google::cloud::cpp::compute::packet_mirrorings::v1::AggregatedListPacketMirroringsRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeletePacketMirrorings(google::cloud::cpp::compute::packet_mirrorings::v1::DeletePacketMirroringsRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::PacketMirroring>
  GetPacketMirrorings(google::cloud::cpp::compute::packet_mirrorings::v1::GetPacketMirroringsRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertPacketMirrorings(google::cloud::cpp::compute::packet_mirrorings::v1::InsertPacketMirroringsRequest const& request) override;

  StreamRange<google::cloud::cpp::compute::v1::PacketMirroring>
  ListPacketMirrorings(google::cloud::cpp::compute::packet_mirrorings::v1::ListPacketMirroringsRequest request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  PatchPacketMirrorings(google::cloud::cpp::compute::packet_mirrorings::v1::PatchPacketMirroringsRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
  TestIamPermissions(google::cloud::cpp::compute::packet_mirrorings::v1::TestIamPermissionsRequest const& request) override;

 private:
  std::shared_ptr<compute_packet_mirrorings_v1::PacketMirroringsConnection> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Conditionally applies the tracing decorator to the given connection.
 *
 * The connection is only decorated if tracing is enabled (as determined by the
 * connection's options).
 */
std::shared_ptr<compute_packet_mirrorings_v1::PacketMirroringsConnection>
MakePacketMirroringsTracingConnection(
    std::shared_ptr<compute_packet_mirrorings_v1::PacketMirroringsConnection> conn);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_packet_mirrorings_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_PACKET_MIRRORINGS_V1_INTERNAL_PACKET_MIRRORINGS_TRACING_CONNECTION_H
