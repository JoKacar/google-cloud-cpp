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
// source: google/cloud/retail/v2/catalog_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RETAIL_CATALOG_OPTIONS_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RETAIL_CATALOG_OPTIONS_H

#include "google/cloud/retail/catalog_connection.h"
#include "google/cloud/retail/catalog_connection_idempotency_policy.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace retail {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/// Option to use with `google::cloud::Options`.
struct CatalogServiceRetryPolicyOption {
  using Type = std::shared_ptr<CatalogServiceRetryPolicy>;
};

/// Option to use with `google::cloud::Options`.
struct CatalogServiceBackoffPolicyOption {
  using Type = std::shared_ptr<BackoffPolicy>;
};

/// Option to use with `google::cloud::Options`.
struct CatalogServiceConnectionIdempotencyPolicyOption {
  using Type = std::shared_ptr<CatalogServiceConnectionIdempotencyPolicy>;
};

using CatalogServicePolicyOptionList =
    OptionList<CatalogServiceRetryPolicyOption,
               CatalogServiceBackoffPolicyOption,
               CatalogServiceConnectionIdempotencyPolicyOption>;

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace retail
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RETAIL_CATALOG_OPTIONS_H
