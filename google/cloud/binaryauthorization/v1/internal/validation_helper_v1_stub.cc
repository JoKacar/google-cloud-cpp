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
// source: google/cloud/binaryauthorization/v1/service.proto

#include "google/cloud/binaryauthorization/v1/internal/validation_helper_v1_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/cloud/binaryauthorization/v1/service.grpc.pb.h>
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace binaryauthorization_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ValidationHelperV1Stub::~ValidationHelperV1Stub() = default;

StatusOr<google::cloud::binaryauthorization::v1::
             ValidateAttestationOccurrenceResponse>
DefaultValidationHelperV1Stub::ValidateAttestationOccurrence(
    grpc::ClientContext& client_context,
    google::cloud::binaryauthorization::v1::
        ValidateAttestationOccurrenceRequest const& request) {
  google::cloud::binaryauthorization::v1::ValidateAttestationOccurrenceResponse
      response;
  auto status = grpc_stub_->ValidateAttestationOccurrence(&client_context,
                                                          request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace binaryauthorization_v1_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
