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
// source: google/cloud/retail/v2/control_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RETAIL_V2_INTERNAL_CONTROL_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RETAIL_V2_INTERNAL_CONTROL_TRACING_CONNECTION_H

#include "google/cloud/retail/v2/control_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace retail_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class ControlServiceTracingConnection
    : public retail_v2::ControlServiceConnection {
 public:
  ~ControlServiceTracingConnection() override = default;

  explicit ControlServiceTracingConnection(
      std::shared_ptr<retail_v2::ControlServiceConnection> child);

  Options options() override { return child_->options(); }

  StatusOr<google::cloud::retail::v2::Control> CreateControl(
      google::cloud::retail::v2::CreateControlRequest const& request) override;

  Status DeleteControl(
      google::cloud::retail::v2::DeleteControlRequest const& request) override;

  StatusOr<google::cloud::retail::v2::Control> UpdateControl(
      google::cloud::retail::v2::UpdateControlRequest const& request) override;

  StatusOr<google::cloud::retail::v2::Control> GetControl(
      google::cloud::retail::v2::GetControlRequest const& request) override;

  StreamRange<google::cloud::retail::v2::Control> ListControls(
      google::cloud::retail::v2::ListControlsRequest request) override;

 private:
  std::shared_ptr<retail_v2::ControlServiceConnection> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Conditionally applies the tracing decorator to the given connection.
 *
 * The connection is only decorated if tracing is enabled (as determined by the
 * connection's options).
 */
std::shared_ptr<retail_v2::ControlServiceConnection>
MakeControlServiceTracingConnection(
    std::shared_ptr<retail_v2::ControlServiceConnection> conn);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace retail_v2_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RETAIL_V2_INTERNAL_CONTROL_TRACING_CONNECTION_H
