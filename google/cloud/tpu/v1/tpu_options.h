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
// source: google/cloud/tpu/v1/cloud_tpu.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TPU_V1_TPU_OPTIONS_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TPU_V1_TPU_OPTIONS_H

#include "google/cloud/tpu/v1/tpu_connection.h"
#include "google/cloud/tpu/v1/tpu_connection_idempotency_policy.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/version.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace tpu_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * Use with `google::cloud::Options` to configure the retry policy.
 *
 * @ingroup google-cloud-tpu-options
 */
struct TpuRetryPolicyOption {
  using Type = std::shared_ptr<TpuRetryPolicy>;
};

/**
 * Use with `google::cloud::Options` to configure the backoff policy.
 *
 * @ingroup google-cloud-tpu-options
 */
struct TpuBackoffPolicyOption {
  using Type = std::shared_ptr<BackoffPolicy>;
};

/**
 * Use with `google::cloud::Options` to configure which operations are retried.
 *
 * @ingroup google-cloud-tpu-options
 */
struct TpuConnectionIdempotencyPolicyOption {
  using Type = std::shared_ptr<TpuConnectionIdempotencyPolicy>;
};

/**
 * Use with `google::cloud::Options` to configure the long-running operations
 * polling policy.
 *
 * @ingroup google-cloud-tpu-options
 */
struct TpuPollingPolicyOption {
  using Type = std::shared_ptr<PollingPolicy>;
};

/**
 * The options applicable to Tpu.
 *
 * @ingroup google-cloud-tpu-options
 */
using TpuPolicyOptionList =
    OptionList<TpuRetryPolicyOption, TpuBackoffPolicyOption,
               TpuPollingPolicyOption, TpuConnectionIdempotencyPolicyOption>;

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace tpu_v1
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TPU_V1_TPU_OPTIONS_H
