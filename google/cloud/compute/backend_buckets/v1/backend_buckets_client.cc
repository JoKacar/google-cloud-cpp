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

#include "google/cloud/compute/backend_buckets/v1/backend_buckets_client.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_backend_buckets_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

BackendBucketsClient::BackendBucketsClient(
    ExperimentalTag, std::shared_ptr<BackendBucketsConnection> connection,
    Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
BackendBucketsClient::~BackendBucketsClient() = default;

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
BackendBucketsClient::AddSignedUrlKey(
    std::string const& project, std::string const& backend_bucket,
    google::cloud::cpp::compute::v1::SignedUrlKey const&
        signed_url_key_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::backend_buckets::v1::AddSignedUrlKeyRequest
      request;
  request.set_project(project);
  request.set_backend_bucket(backend_bucket);
  *request.mutable_signed_url_key_resource() = signed_url_key_resource;
  return connection_->AddSignedUrlKey(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
BackendBucketsClient::AddSignedUrlKey(
    google::cloud::cpp::compute::backend_buckets::v1::
        AddSignedUrlKeyRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->AddSignedUrlKey(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
BackendBucketsClient::DeleteBackendBuckets(std::string const& project,
                                           std::string const& backend_bucket,
                                           Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::backend_buckets::v1::DeleteBackendBucketsRequest
      request;
  request.set_project(project);
  request.set_backend_bucket(backend_bucket);
  return connection_->DeleteBackendBuckets(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
BackendBucketsClient::DeleteBackendBuckets(
    google::cloud::cpp::compute::backend_buckets::v1::
        DeleteBackendBucketsRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteBackendBuckets(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
BackendBucketsClient::DeleteSignedUrlKey(std::string const& project,
                                         std::string const& backend_bucket,
                                         std::string const& key_name,
                                         Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::backend_buckets::v1::DeleteSignedUrlKeyRequest
      request;
  request.set_project(project);
  request.set_backend_bucket(backend_bucket);
  request.set_key_name(key_name);
  return connection_->DeleteSignedUrlKey(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
BackendBucketsClient::DeleteSignedUrlKey(
    google::cloud::cpp::compute::backend_buckets::v1::
        DeleteSignedUrlKeyRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteSignedUrlKey(request);
}

StatusOr<google::cloud::cpp::compute::v1::BackendBucket>
BackendBucketsClient::GetBackendBuckets(std::string const& project,
                                        std::string const& backend_bucket,
                                        Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::backend_buckets::v1::GetBackendBucketsRequest
      request;
  request.set_project(project);
  request.set_backend_bucket(backend_bucket);
  return connection_->GetBackendBuckets(request);
}

StatusOr<google::cloud::cpp::compute::v1::BackendBucket>
BackendBucketsClient::GetBackendBuckets(
    google::cloud::cpp::compute::backend_buckets::v1::
        GetBackendBucketsRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetBackendBuckets(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
BackendBucketsClient::InsertBackendBuckets(
    std::string const& project,
    google::cloud::cpp::compute::v1::BackendBucket const&
        backend_bucket_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::backend_buckets::v1::InsertBackendBucketsRequest
      request;
  request.set_project(project);
  *request.mutable_backend_bucket_resource() = backend_bucket_resource;
  return connection_->InsertBackendBuckets(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
BackendBucketsClient::InsertBackendBuckets(
    google::cloud::cpp::compute::backend_buckets::v1::
        InsertBackendBucketsRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->InsertBackendBuckets(request);
}

StreamRange<google::cloud::cpp::compute::v1::BackendBucket>
BackendBucketsClient::ListBackendBuckets(std::string const& project,
                                         Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::backend_buckets::v1::ListBackendBucketsRequest
      request;
  request.set_project(project);
  return connection_->ListBackendBuckets(request);
}

StreamRange<google::cloud::cpp::compute::v1::BackendBucket>
BackendBucketsClient::ListBackendBuckets(
    google::cloud::cpp::compute::backend_buckets::v1::ListBackendBucketsRequest
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListBackendBuckets(std::move(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
BackendBucketsClient::PatchBackendBuckets(
    std::string const& project, std::string const& backend_bucket,
    google::cloud::cpp::compute::v1::BackendBucket const&
        backend_bucket_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::backend_buckets::v1::PatchBackendBucketsRequest
      request;
  request.set_project(project);
  request.set_backend_bucket(backend_bucket);
  *request.mutable_backend_bucket_resource() = backend_bucket_resource;
  return connection_->PatchBackendBuckets(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
BackendBucketsClient::PatchBackendBuckets(
    google::cloud::cpp::compute::backend_buckets::v1::
        PatchBackendBucketsRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->PatchBackendBuckets(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
BackendBucketsClient::SetEdgeSecurityPolicy(
    std::string const& project, std::string const& backend_bucket,
    google::cloud::cpp::compute::v1::SecurityPolicyReference const&
        security_policy_reference_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::backend_buckets::v1::SetEdgeSecurityPolicyRequest
      request;
  request.set_project(project);
  request.set_backend_bucket(backend_bucket);
  *request.mutable_security_policy_reference_resource() =
      security_policy_reference_resource;
  return connection_->SetEdgeSecurityPolicy(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
BackendBucketsClient::SetEdgeSecurityPolicy(
    google::cloud::cpp::compute::backend_buckets::v1::
        SetEdgeSecurityPolicyRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->SetEdgeSecurityPolicy(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
BackendBucketsClient::UpdateBackendBuckets(
    std::string const& project, std::string const& backend_bucket,
    google::cloud::cpp::compute::v1::BackendBucket const&
        backend_bucket_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::backend_buckets::v1::UpdateBackendBucketsRequest
      request;
  request.set_project(project);
  request.set_backend_bucket(backend_bucket);
  *request.mutable_backend_bucket_resource() = backend_bucket_resource;
  return connection_->UpdateBackendBuckets(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
BackendBucketsClient::UpdateBackendBuckets(
    google::cloud::cpp::compute::backend_buckets::v1::
        UpdateBackendBucketsRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateBackendBuckets(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_backend_buckets_v1
}  // namespace cloud
}  // namespace google
