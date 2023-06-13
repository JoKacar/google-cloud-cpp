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
// source: google/cloud/orchestration/airflow/service/v1/image_versions.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPOSER_V1_INTERNAL_IMAGE_VERSIONS_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPOSER_V1_INTERNAL_IMAGE_VERSIONS_TRACING_CONNECTION_H

#include "google/cloud/composer/v1/image_versions_connection.h"
#include "google/cloud/version.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace composer_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class ImageVersionsTracingConnection
    : public composer_v1::ImageVersionsConnection {
 public:
  ~ImageVersionsTracingConnection() override = default;

  explicit ImageVersionsTracingConnection(
      std::shared_ptr<composer_v1::ImageVersionsConnection> child);

  Options options() override { return child_->options(); }

  StreamRange<google::cloud::orchestration::airflow::service::v1::ImageVersion>
  ListImageVersions(google::cloud::orchestration::airflow::service::v1::
                        ListImageVersionsRequest request) override;

 private:
  std::shared_ptr<composer_v1::ImageVersionsConnection> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Conditionally applies the tracing decorator to the given connection.
 *
 * The connection is only decorated if tracing is enabled (as determined by the
 * connection's options).
 */
std::shared_ptr<composer_v1::ImageVersionsConnection>
MakeImageVersionsTracingConnection(
    std::shared_ptr<composer_v1::ImageVersionsConnection> conn);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace composer_v1_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPOSER_V1_INTERNAL_IMAGE_VERSIONS_TRACING_CONNECTION_H
