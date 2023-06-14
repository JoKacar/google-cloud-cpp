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
// source: google/cloud/confidentialcomputing/v1/service.proto

#include "google/cloud/confidentialcomputing/v1/confidential_computing_connection.h"
#include "google/cloud/confidentialcomputing/v1/confidential_computing_options.h"
#include "google/cloud/confidentialcomputing/v1/internal/confidential_computing_connection_impl.h"
#include "google/cloud/confidentialcomputing/v1/internal/confidential_computing_option_defaults.h"
#include "google/cloud/confidentialcomputing/v1/internal/confidential_computing_stub_factory.h"
#include "google/cloud/confidentialcomputing/v1/internal/confidential_computing_tracing_connection.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace confidentialcomputing_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ConfidentialComputingConnection::~ConfidentialComputingConnection() = default;

StatusOr<google::cloud::confidentialcomputing::v1::Challenge>
ConfidentialComputingConnection::CreateChallenge(
    google::cloud::confidentialcomputing::v1::CreateChallengeRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::confidentialcomputing::v1::VerifyAttestationResponse>
ConfidentialComputingConnection::VerifyAttestation(
    google::cloud::confidentialcomputing::v1::VerifyAttestationRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

std::shared_ptr<ConfidentialComputingConnection>
MakeConfidentialComputingConnection(Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 UnifiedCredentialsOptionList,
                                 ConfidentialComputingPolicyOptionList>(
      options, __func__);
  options =
      confidentialcomputing_v1_internal::ConfidentialComputingDefaultOptions(
          std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto stub =
      confidentialcomputing_v1_internal::CreateDefaultConfidentialComputingStub(
          background->cq(), options);
  return confidentialcomputing_v1_internal::
      MakeConfidentialComputingTracingConnection(
          std::make_shared<confidentialcomputing_v1_internal::
                               ConfidentialComputingConnectionImpl>(
              std::move(background), std::move(stub), std::move(options)));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace confidentialcomputing_v1
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
