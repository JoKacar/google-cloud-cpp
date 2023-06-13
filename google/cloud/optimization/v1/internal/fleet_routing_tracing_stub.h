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
// source: google/cloud/optimization/v1/fleet_routing.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_OPTIMIZATION_V1_INTERNAL_FLEET_ROUTING_TRACING_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_OPTIMIZATION_V1_INTERNAL_FLEET_ROUTING_TRACING_STUB_H

#include "google/cloud/optimization/v1/internal/fleet_routing_stub.h"
#include "google/cloud/options.h"
#include "google/cloud/version.h"

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace optimization_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class FleetRoutingTracingStub : public FleetRoutingStub {
 public:
  ~FleetRoutingTracingStub() override = default;

  explicit FleetRoutingTracingStub(std::shared_ptr<FleetRoutingStub> child);

  StatusOr<google::cloud::optimization::v1::OptimizeToursResponse>
  OptimizeTours(grpc::ClientContext& context,
                google::cloud::optimization::v1::OptimizeToursRequest const&
                    request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncBatchOptimizeTours(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::optimization::v1::BatchOptimizeToursRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::shared_ptr<FleetRoutingStub> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Applies the tracing decorator to the given stub.
 *
 * The stub is only decorated if the library has been compiled with
 * OpenTelemetry.
 */
std::shared_ptr<FleetRoutingStub> MakeFleetRoutingTracingStub(
    std::shared_ptr<FleetRoutingStub> stub);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace optimization_v1_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_OPTIMIZATION_V1_INTERNAL_FLEET_ROUTING_TRACING_STUB_H
