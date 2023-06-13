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
// source: google/cloud/aiplatform/v1/model_garden_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_INTERNAL_MODEL_GARDEN_TRACING_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_INTERNAL_MODEL_GARDEN_TRACING_STUB_H

#include "google/cloud/aiplatform/v1/internal/model_garden_stub.h"
#include "google/cloud/options.h"
#include "google/cloud/version.h"

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace aiplatform_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class ModelGardenServiceTracingStub : public ModelGardenServiceStub {
 public:
  ~ModelGardenServiceTracingStub() override = default;

  explicit ModelGardenServiceTracingStub(
      std::shared_ptr<ModelGardenServiceStub> child);

  StatusOr<google::cloud::aiplatform::v1::PublisherModel> GetPublisherModel(
      grpc::ClientContext& context,
      google::cloud::aiplatform::v1::GetPublisherModelRequest const& request)
      override;

 private:
  std::shared_ptr<ModelGardenServiceStub> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Applies the tracing decorator to the given stub.
 *
 * The stub is only decorated if the library has been compiled with
 * OpenTelemetry.
 */
std::shared_ptr<ModelGardenServiceStub> MakeModelGardenServiceTracingStub(
    std::shared_ptr<ModelGardenServiceStub> stub);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_INTERNAL_MODEL_GARDEN_TRACING_STUB_H
