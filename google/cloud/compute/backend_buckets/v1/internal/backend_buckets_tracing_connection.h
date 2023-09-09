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
// source: google/cloud/compute/backend_buckets/v1/backend_buckets.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_BACKEND_BUCKETS_V1_INTERNAL_BACKEND_BUCKETS_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_BACKEND_BUCKETS_V1_INTERNAL_BACKEND_BUCKETS_TRACING_CONNECTION_H

#include "google/cloud/compute/backend_buckets/v1/backend_buckets_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_backend_buckets_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class BackendBucketsTracingConnection
    : public compute_backend_buckets_v1::BackendBucketsConnection {
 public:
  ~BackendBucketsTracingConnection() override = default;

  explicit BackendBucketsTracingConnection(
      std::shared_ptr<compute_backend_buckets_v1::BackendBucketsConnection>
          child);

  Options options() override { return child_->options(); }

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>> AddSignedUrlKey(
      google::cloud::cpp::compute::backend_buckets::v1::
          AddSignedUrlKeyRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteBackendBucket(google::cloud::cpp::compute::backend_buckets::v1::
                          DeleteBackendBucketRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteSignedUrlKey(google::cloud::cpp::compute::backend_buckets::v1::
                         DeleteSignedUrlKeyRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::BackendBucket> GetBackendBucket(
      google::cloud::cpp::compute::backend_buckets::v1::
          GetBackendBucketRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertBackendBucket(google::cloud::cpp::compute::backend_buckets::v1::
                          InsertBackendBucketRequest const& request) override;

  StreamRange<google::cloud::cpp::compute::v1::BackendBucket>
  ListBackendBuckets(google::cloud::cpp::compute::backend_buckets::v1::
                         ListBackendBucketsRequest request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  PatchBackendBucket(google::cloud::cpp::compute::backend_buckets::v1::
                         PatchBackendBucketRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  SetEdgeSecurityPolicy(
      google::cloud::cpp::compute::backend_buckets::v1::
          SetEdgeSecurityPolicyRequest const& request) override;

  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  UpdateBackendBucket(google::cloud::cpp::compute::backend_buckets::v1::
                          UpdateBackendBucketRequest const& request) override;

 private:
  std::shared_ptr<compute_backend_buckets_v1::BackendBucketsConnection> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Conditionally applies the tracing decorator to the given connection.
 *
 * The connection is only decorated if tracing is enabled (as determined by the
 * connection's options).
 */
std::shared_ptr<compute_backend_buckets_v1::BackendBucketsConnection>
MakeBackendBucketsTracingConnection(
    std::shared_ptr<compute_backend_buckets_v1::BackendBucketsConnection> conn);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_backend_buckets_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_BACKEND_BUCKETS_V1_INTERNAL_BACKEND_BUCKETS_TRACING_CONNECTION_H
