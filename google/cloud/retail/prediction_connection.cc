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

#include "google/cloud/retail/prediction_connection.h"
#include "google/cloud/retail/internal/prediction_option_defaults.h"
#include "google/cloud/retail/internal/prediction_stub_factory.h"
#include "google/cloud/retail/prediction_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>

namespace google {
namespace cloud {
namespace retail {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

PredictionServiceConnection::~PredictionServiceConnection() = default;

StatusOr<google::cloud::retail::v2::PredictResponse>
PredictionServiceConnection::Predict(
    google::cloud::retail::v2::PredictRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

namespace {
class PredictionServiceConnectionImpl : public PredictionServiceConnection {
 public:
  PredictionServiceConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<retail_internal::PredictionServiceStub> stub,
      Options const& options)
      : background_(std::move(background)),
        stub_(std::move(stub)),
        retry_policy_prototype_(
            options.get<PredictionServiceRetryPolicyOption>()->clone()),
        backoff_policy_prototype_(
            options.get<PredictionServiceBackoffPolicyOption>()->clone()),
        idempotency_policy_(
            options.get<PredictionServiceConnectionIdempotencyPolicyOption>()
                ->clone()) {}

  ~PredictionServiceConnectionImpl() override = default;

  StatusOr<google::cloud::retail::v2::PredictResponse> Predict(
      google::cloud::retail::v2::PredictRequest const& request) override {
    return google::cloud::internal::RetryLoop(
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->Predict(request),
        [this](grpc::ClientContext& context,
               google::cloud::retail::v2::PredictRequest const& request) {
          return stub_->Predict(context, request);
        },
        request, __func__);
  }

 private:
  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<retail_internal::PredictionServiceStub> stub_;
  std::unique_ptr<PredictionServiceRetryPolicy const> retry_policy_prototype_;
  std::unique_ptr<BackoffPolicy const> backoff_policy_prototype_;
  std::unique_ptr<PredictionServiceConnectionIdempotencyPolicy>
      idempotency_policy_;
};
}  // namespace

std::shared_ptr<PredictionServiceConnection> MakePredictionServiceConnection(
    Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 PredictionServicePolicyOptionList>(options,
                                                                    __func__);
  options =
      retail_internal::PredictionServiceDefaultOptions(std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto stub = retail_internal::CreateDefaultPredictionServiceStub(
      background->cq(), options);
  return std::make_shared<PredictionServiceConnectionImpl>(
      std::move(background), std::move(stub), options);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace retail
}  // namespace cloud
}  // namespace google

namespace google {
namespace cloud {
namespace retail_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

std::shared_ptr<retail::PredictionServiceConnection>
MakePredictionServiceConnection(std::shared_ptr<PredictionServiceStub> stub,
                                Options options) {
  options = PredictionServiceDefaultOptions(std::move(options));
  return std::make_shared<retail::PredictionServiceConnectionImpl>(
      internal::MakeBackgroundThreadsFactory(options)(), std::move(stub),
      std::move(options));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace retail_internal
}  // namespace cloud
}  // namespace google
