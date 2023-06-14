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
// source: google/cloud/contentwarehouse/v1/document_link_service.proto

#include "google/cloud/contentwarehouse/v1/internal/document_link_option_defaults.h"
#include "google/cloud/contentwarehouse/v1/document_link_connection.h"
#include "google/cloud/contentwarehouse/v1/document_link_options.h"
#include "google/cloud/internal/populate_common_options.h"
#include "google/cloud/internal/populate_grpc_options.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace contentwarehouse_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

namespace {
auto constexpr kBackoffScaling = 2.0;
}  // namespace

Options DocumentLinkServiceDefaultOptions(Options options) {
  options = google::cloud::internal::PopulateCommonOptions(
      std::move(options), "GOOGLE_CLOUD_CPP_DOCUMENT_LINK_SERVICE_ENDPOINT", "",
      "GOOGLE_CLOUD_CPP_DOCUMENT_LINK_SERVICE_AUTHORITY",
      "contentwarehouse.googleapis.com");
  options =
      google::cloud::internal::PopulateGrpcOptions(std::move(options), "");
  if (!options
           .has<contentwarehouse_v1::DocumentLinkServiceRetryPolicyOption>()) {
    options.set<contentwarehouse_v1::DocumentLinkServiceRetryPolicyOption>(
        contentwarehouse_v1::DocumentLinkServiceLimitedTimeRetryPolicy(
            std::chrono::minutes(30))
            .clone());
  }
  if (!options.has<
          contentwarehouse_v1::DocumentLinkServiceBackoffPolicyOption>()) {
    options.set<contentwarehouse_v1::DocumentLinkServiceBackoffPolicyOption>(
        ExponentialBackoffPolicy(
            std::chrono::seconds(0), std::chrono::seconds(1),
            std::chrono::minutes(5), kBackoffScaling, kBackoffScaling)
            .clone());
  }
  if (!options
           .has<contentwarehouse_v1::
                    DocumentLinkServiceConnectionIdempotencyPolicyOption>()) {
    options.set<contentwarehouse_v1::
                    DocumentLinkServiceConnectionIdempotencyPolicyOption>(
        contentwarehouse_v1::
            MakeDefaultDocumentLinkServiceConnectionIdempotencyPolicy());
  }

  return options;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace contentwarehouse_v1_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
