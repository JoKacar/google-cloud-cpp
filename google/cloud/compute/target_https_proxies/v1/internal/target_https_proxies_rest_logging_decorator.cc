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
// source: google/cloud/compute/target_https_proxies/v1/target_https_proxies.proto

#include "google/cloud/compute/target_https_proxies/v1/internal/target_https_proxies_rest_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_target_https_proxies_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

TargetHttpsProxiesRestLogging::TargetHttpsProxiesRestLogging(
    std::shared_ptr<TargetHttpsProxiesRestStub> child,
    TracingOptions tracing_options,
    std::set<std::string> components)
    : child_(std::move(child)), tracing_options_(std::move(tracing_options)),
      components_(std::move(components)) {}

StatusOr<google::cloud::cpp::compute::v1::TargetHttpsProxyAggregatedList>
TargetHttpsProxiesRestLogging::AggregatedListTargetHttpsProxies(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::target_https_proxies::v1::AggregatedListTargetHttpsProxiesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context,
             google::cloud::cpp::compute::target_https_proxies::v1::AggregatedListTargetHttpsProxiesRequest const& request) {
        return child_->AggregatedListTargetHttpsProxies(rest_context, request);
      },
      rest_context, request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetHttpsProxiesRestLogging::AsyncDeleteTargetHttpsProxies(
      CompletionQueue& cq,
      std::unique_ptr<rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::target_https_proxies::v1::DeleteTargetHttpsProxiesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::cpp::compute::target_https_proxies::v1::DeleteTargetHttpsProxiesRequest const& request) {
        return child_->AsyncDeleteTargetHttpsProxies(cq, std::move(rest_context), request);
      },
      cq, std::move(rest_context), request, __func__, tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::TargetHttpsProxy>
TargetHttpsProxiesRestLogging::GetTargetHttpsProxies(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::target_https_proxies::v1::GetTargetHttpsProxiesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context,
             google::cloud::cpp::compute::target_https_proxies::v1::GetTargetHttpsProxiesRequest const& request) {
        return child_->GetTargetHttpsProxies(rest_context, request);
      },
      rest_context, request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetHttpsProxiesRestLogging::AsyncInsertTargetHttpsProxies(
      CompletionQueue& cq,
      std::unique_ptr<rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::target_https_proxies::v1::InsertTargetHttpsProxiesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::cpp::compute::target_https_proxies::v1::InsertTargetHttpsProxiesRequest const& request) {
        return child_->AsyncInsertTargetHttpsProxies(cq, std::move(rest_context), request);
      },
      cq, std::move(rest_context), request, __func__, tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::TargetHttpsProxyList>
TargetHttpsProxiesRestLogging::ListTargetHttpsProxies(
    rest_internal::RestContext& rest_context,
    google::cloud::cpp::compute::target_https_proxies::v1::ListTargetHttpsProxiesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context,
             google::cloud::cpp::compute::target_https_proxies::v1::ListTargetHttpsProxiesRequest const& request) {
        return child_->ListTargetHttpsProxies(rest_context, request);
      },
      rest_context, request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetHttpsProxiesRestLogging::AsyncPatchTargetHttpsProxies(
      CompletionQueue& cq,
      std::unique_ptr<rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::target_https_proxies::v1::PatchTargetHttpsProxiesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::cpp::compute::target_https_proxies::v1::PatchTargetHttpsProxiesRequest const& request) {
        return child_->AsyncPatchTargetHttpsProxies(cq, std::move(rest_context), request);
      },
      cq, std::move(rest_context), request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetHttpsProxiesRestLogging::AsyncSetCertificateMap(
      CompletionQueue& cq,
      std::unique_ptr<rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::target_https_proxies::v1::SetCertificateMapRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::cpp::compute::target_https_proxies::v1::SetCertificateMapRequest const& request) {
        return child_->AsyncSetCertificateMap(cq, std::move(rest_context), request);
      },
      cq, std::move(rest_context), request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetHttpsProxiesRestLogging::AsyncSetQuicOverride(
      CompletionQueue& cq,
      std::unique_ptr<rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::target_https_proxies::v1::SetQuicOverrideRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::cpp::compute::target_https_proxies::v1::SetQuicOverrideRequest const& request) {
        return child_->AsyncSetQuicOverride(cq, std::move(rest_context), request);
      },
      cq, std::move(rest_context), request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetHttpsProxiesRestLogging::AsyncSetSslCertificates(
      CompletionQueue& cq,
      std::unique_ptr<rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::target_https_proxies::v1::SetSslCertificatesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::cpp::compute::target_https_proxies::v1::SetSslCertificatesRequest const& request) {
        return child_->AsyncSetSslCertificates(cq, std::move(rest_context), request);
      },
      cq, std::move(rest_context), request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetHttpsProxiesRestLogging::AsyncSetSslPolicy(
      CompletionQueue& cq,
      std::unique_ptr<rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::target_https_proxies::v1::SetSslPolicyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::cpp::compute::target_https_proxies::v1::SetSslPolicyRequest const& request) {
        return child_->AsyncSetSslPolicy(cq, std::move(rest_context), request);
      },
      cq, std::move(rest_context), request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetHttpsProxiesRestLogging::AsyncSetUrlMap(
      CompletionQueue& cq,
      std::unique_ptr<rest_internal::RestContext> rest_context,
      google::cloud::cpp::compute::target_https_proxies::v1::SetUrlMapRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::cpp::compute::target_https_proxies::v1::SetUrlMapRequest const& request) {
        return child_->AsyncSetUrlMap(cq, std::move(rest_context), request);
      },
      cq, std::move(rest_context), request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
TargetHttpsProxiesRestLogging::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::global_operations::v1::GetGlobalOperationsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::cpp::compute::global_operations::v1::GetGlobalOperationsRequest const& request) {
        return child_->AsyncGetOperation(cq, std::move(rest_context), request);
      },
      cq, std::move(rest_context), request, __func__, tracing_options_);
}

future<Status>
TargetHttpsProxiesRestLogging::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::cpp::compute::global_operations::v1::DeleteGlobalOperationsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::cpp::compute::global_operations::v1::DeleteGlobalOperationsRequest const& request) {
        return child_->AsyncCancelOperation(cq, std::move(rest_context), request);
      },
      cq, std::move(rest_context), request, __func__, tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_target_https_proxies_v1_internal
}  // namespace cloud
}  // namespace google
