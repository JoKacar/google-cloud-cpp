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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BINARYAUTHORIZATION_V1_INTERNAL_VALIDATION_HELPER_V1_LOGGING_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BINARYAUTHORIZATION_V1_INTERNAL_VALIDATION_HELPER_V1_LOGGING_DECORATOR_H

#include "google/cloud/binaryauthorization/v1/internal/validation_helper_v1_stub.h"
#include "google/cloud/tracing_options.h"
#include "google/cloud/version.h"
#include <memory>
#include <set>
#include <string>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace binaryauthorization_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class ValidationHelperV1Logging : public ValidationHelperV1Stub {
 public:
  ~ValidationHelperV1Logging() override = default;
  ValidationHelperV1Logging(std::shared_ptr<ValidationHelperV1Stub> child,
                            TracingOptions tracing_options,
                            std::set<std::string> components);

  StatusOr<google::cloud::binaryauthorization::v1::
               ValidateAttestationOccurrenceResponse>
  ValidateAttestationOccurrence(
      grpc::ClientContext& context,
      google::cloud::binaryauthorization::v1::
          ValidateAttestationOccurrenceRequest const& request) override;

 private:
  std::shared_ptr<ValidationHelperV1Stub> child_;
  TracingOptions tracing_options_;
  std::set<std::string> components_;
};  // ValidationHelperV1Logging

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace binaryauthorization_v1_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BINARYAUTHORIZATION_V1_INTERNAL_VALIDATION_HELPER_V1_LOGGING_DECORATOR_H
