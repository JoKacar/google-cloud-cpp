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
// source: google/cloud/dialogflow/cx/v3/experiment.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_INTERNAL_EXPERIMENTS_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_INTERNAL_EXPERIMENTS_STUB_H

#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/cloud/dialogflow/cx/v3/experiment.grpc.pb.h>
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace dialogflow_cx_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class ExperimentsStub {
 public:
  virtual ~ExperimentsStub() = 0;

  virtual StatusOr<google::cloud::dialogflow::cx::v3::ListExperimentsResponse>
  ListExperiments(
      grpc::ClientContext& context,
      google::cloud::dialogflow::cx::v3::ListExperimentsRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::dialogflow::cx::v3::Experiment> GetExperiment(
      grpc::ClientContext& context,
      google::cloud::dialogflow::cx::v3::GetExperimentRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::dialogflow::cx::v3::Experiment>
  CreateExperiment(
      grpc::ClientContext& context,
      google::cloud::dialogflow::cx::v3::CreateExperimentRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::dialogflow::cx::v3::Experiment>
  UpdateExperiment(
      grpc::ClientContext& context,
      google::cloud::dialogflow::cx::v3::UpdateExperimentRequest const&
          request) = 0;

  virtual Status DeleteExperiment(
      grpc::ClientContext& context,
      google::cloud::dialogflow::cx::v3::DeleteExperimentRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::dialogflow::cx::v3::Experiment>
  StartExperiment(
      grpc::ClientContext& context,
      google::cloud::dialogflow::cx::v3::StartExperimentRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::dialogflow::cx::v3::Experiment>
  StopExperiment(grpc::ClientContext& context,
                 google::cloud::dialogflow::cx::v3::StopExperimentRequest const&
                     request) = 0;
};

class DefaultExperimentsStub : public ExperimentsStub {
 public:
  explicit DefaultExperimentsStub(
      std::unique_ptr<
          google::cloud::dialogflow::cx::v3::Experiments::StubInterface>
          grpc_stub)
      : grpc_stub_(std::move(grpc_stub)) {}

  StatusOr<google::cloud::dialogflow::cx::v3::ListExperimentsResponse>
  ListExperiments(
      grpc::ClientContext& client_context,
      google::cloud::dialogflow::cx::v3::ListExperimentsRequest const& request)
      override;

  StatusOr<google::cloud::dialogflow::cx::v3::Experiment> GetExperiment(
      grpc::ClientContext& client_context,
      google::cloud::dialogflow::cx::v3::GetExperimentRequest const& request)
      override;

  StatusOr<google::cloud::dialogflow::cx::v3::Experiment> CreateExperiment(
      grpc::ClientContext& client_context,
      google::cloud::dialogflow::cx::v3::CreateExperimentRequest const& request)
      override;

  StatusOr<google::cloud::dialogflow::cx::v3::Experiment> UpdateExperiment(
      grpc::ClientContext& client_context,
      google::cloud::dialogflow::cx::v3::UpdateExperimentRequest const& request)
      override;

  Status DeleteExperiment(
      grpc::ClientContext& client_context,
      google::cloud::dialogflow::cx::v3::DeleteExperimentRequest const& request)
      override;

  StatusOr<google::cloud::dialogflow::cx::v3::Experiment> StartExperiment(
      grpc::ClientContext& client_context,
      google::cloud::dialogflow::cx::v3::StartExperimentRequest const& request)
      override;

  StatusOr<google::cloud::dialogflow::cx::v3::Experiment> StopExperiment(
      grpc::ClientContext& client_context,
      google::cloud::dialogflow::cx::v3::StopExperimentRequest const& request)
      override;

 private:
  std::unique_ptr<google::cloud::dialogflow::cx::v3::Experiments::StubInterface>
      grpc_stub_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_cx_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_INTERNAL_EXPERIMENTS_STUB_H
