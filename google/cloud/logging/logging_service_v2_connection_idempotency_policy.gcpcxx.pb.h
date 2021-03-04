// Copyright 2021 Google LLC
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
// source: google/logging/v2/logging.proto
#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_LOGGING_LOGGING_SERVICE_V2_CONNECTION_IDEMPOTENCY_POLICY_GCPCXX_PB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_LOGGING_LOGGING_SERVICE_V2_CONNECTION_IDEMPOTENCY_POLICY_GCPCXX_PB_H

#include "google/cloud/internal/retry_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/logging/v2/logging.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace logging {
inline namespace GOOGLE_CLOUD_CPP_NS {

class LoggingServiceV2ConnectionIdempotencyPolicy {
 public:
  virtual ~LoggingServiceV2ConnectionIdempotencyPolicy() = 0;

  /// Create a new copy of this object.
  virtual std::unique_ptr<LoggingServiceV2ConnectionIdempotencyPolicy> clone()
      const = 0;

  virtual google::cloud::internal::Idempotency DeleteLog(
      ::google::logging::v2::DeleteLogRequest const& request) = 0;

  virtual google::cloud::internal::Idempotency WriteLogEntries(
      ::google::logging::v2::WriteLogEntriesRequest const& request) = 0;

  virtual google::cloud::internal::Idempotency ListLogEntries(
      ::google::logging::v2::ListLogEntriesRequest request) = 0;

  virtual google::cloud::internal::Idempotency ListMonitoredResourceDescriptors(
      ::google::logging::v2::ListMonitoredResourceDescriptorsRequest
          request) = 0;

  virtual google::cloud::internal::Idempotency ListLogs(
      ::google::logging::v2::ListLogsRequest request) = 0;
};

std::unique_ptr<LoggingServiceV2ConnectionIdempotencyPolicy>
MakeDefaultLoggingServiceV2ConnectionIdempotencyPolicy();

}  // namespace GOOGLE_CLOUD_CPP_NS
}  // namespace logging
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_LOGGING_LOGGING_SERVICE_V2_CONNECTION_IDEMPOTENCY_POLICY_GCPCXX_PB_H
