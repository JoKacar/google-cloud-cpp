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
// source: google/cloud/retail/v2/prediction_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RETAIL_V2_INTERNAL_PREDICTION_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RETAIL_V2_INTERNAL_PREDICTION_STUB_H

#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/cloud/retail/v2/prediction_service.grpc.pb.h>
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace retail_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class PredictionServiceStub {
 public:
  virtual ~PredictionServiceStub() = 0;

  virtual StatusOr<google::cloud::retail::v2::PredictResponse> Predict(
      grpc::ClientContext& context,
      google::cloud::retail::v2::PredictRequest const& request) = 0;
};

class DefaultPredictionServiceStub : public PredictionServiceStub {
 public:
  explicit DefaultPredictionServiceStub(
      std::unique_ptr<
          google::cloud::retail::v2::PredictionService::StubInterface>
          grpc_stub)
      : grpc_stub_(std::move(grpc_stub)) {}

  StatusOr<google::cloud::retail::v2::PredictResponse> Predict(
      grpc::ClientContext& client_context,
      google::cloud::retail::v2::PredictRequest const& request) override;

 private:
  std::unique_ptr<google::cloud::retail::v2::PredictionService::StubInterface>
      grpc_stub_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace retail_v2_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RETAIL_V2_INTERNAL_PREDICTION_STUB_H
