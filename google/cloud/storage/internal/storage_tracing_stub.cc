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
// source: google/storage/v2/storage.proto

#include "google/cloud/storage/internal/storage_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"

namespace google {
namespace cloud {
namespace storage_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

StorageTracingStub::StorageTracingStub(std::shared_ptr<StorageStub> child)
    : child_(std::move(child)) {}

Status StorageTracingStub::DeleteBucket(
    grpc::ClientContext& context,
    google::storage::v2::DeleteBucketRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.storage.v2.Storage", "DeleteBucket");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->DeleteBucket(context, request));
}

StatusOr<google::storage::v2::Bucket> StorageTracingStub::GetBucket(
    grpc::ClientContext& context,
    google::storage::v2::GetBucketRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.storage.v2.Storage", "GetBucket");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span, child_->GetBucket(context, request));
}

StatusOr<google::storage::v2::Bucket> StorageTracingStub::CreateBucket(
    grpc::ClientContext& context,
    google::storage::v2::CreateBucketRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.storage.v2.Storage", "CreateBucket");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->CreateBucket(context, request));
}

StatusOr<google::storage::v2::ListBucketsResponse>
StorageTracingStub::ListBuckets(
    grpc::ClientContext& context,
    google::storage::v2::ListBucketsRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.storage.v2.Storage", "ListBuckets");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->ListBuckets(context, request));
}

StatusOr<google::storage::v2::Bucket>
StorageTracingStub::LockBucketRetentionPolicy(
    grpc::ClientContext& context,
    google::storage::v2::LockBucketRetentionPolicyRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.storage.v2.Storage",
                                     "LockBucketRetentionPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->LockBucketRetentionPolicy(context, request));
}

StatusOr<google::iam::v1::Policy> StorageTracingStub::GetIamPolicy(
    grpc::ClientContext& context,
    google::iam::v1::GetIamPolicyRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.storage.v2.Storage", "GetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->GetIamPolicy(context, request));
}

StatusOr<google::iam::v1::Policy> StorageTracingStub::SetIamPolicy(
    grpc::ClientContext& context,
    google::iam::v1::SetIamPolicyRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.storage.v2.Storage", "SetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->SetIamPolicy(context, request));
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
StorageTracingStub::TestIamPermissions(
    grpc::ClientContext& context,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.storage.v2.Storage", "TestIamPermissions");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->TestIamPermissions(context, request));
}

StatusOr<google::storage::v2::Bucket> StorageTracingStub::UpdateBucket(
    grpc::ClientContext& context,
    google::storage::v2::UpdateBucketRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.storage.v2.Storage", "UpdateBucket");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->UpdateBucket(context, request));
}

Status StorageTracingStub::DeleteNotificationConfig(
    grpc::ClientContext& context,
    google::storage::v2::DeleteNotificationConfigRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.storage.v2.Storage",
                                     "DeleteNotificationConfig");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->DeleteNotificationConfig(context, request));
}

StatusOr<google::storage::v2::NotificationConfig>
StorageTracingStub::GetNotificationConfig(
    grpc::ClientContext& context,
    google::storage::v2::GetNotificationConfigRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.storage.v2.Storage",
                                     "GetNotificationConfig");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->GetNotificationConfig(context, request));
}

StatusOr<google::storage::v2::NotificationConfig>
StorageTracingStub::CreateNotificationConfig(
    grpc::ClientContext& context,
    google::storage::v2::CreateNotificationConfigRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.storage.v2.Storage",
                                     "CreateNotificationConfig");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->CreateNotificationConfig(context, request));
}

StatusOr<google::storage::v2::ListNotificationConfigsResponse>
StorageTracingStub::ListNotificationConfigs(
    grpc::ClientContext& context,
    google::storage::v2::ListNotificationConfigsRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.storage.v2.Storage",
                                     "ListNotificationConfigs");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->ListNotificationConfigs(context, request));
}

StatusOr<google::storage::v2::Object> StorageTracingStub::ComposeObject(
    grpc::ClientContext& context,
    google::storage::v2::ComposeObjectRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.storage.v2.Storage", "ComposeObject");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->ComposeObject(context, request));
}

Status StorageTracingStub::DeleteObject(
    grpc::ClientContext& context,
    google::storage::v2::DeleteObjectRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.storage.v2.Storage", "DeleteObject");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->DeleteObject(context, request));
}

StatusOr<google::storage::v2::CancelResumableWriteResponse>
StorageTracingStub::CancelResumableWrite(
    grpc::ClientContext& context,
    google::storage::v2::CancelResumableWriteRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.storage.v2.Storage",
                                     "CancelResumableWrite");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->CancelResumableWrite(context, request));
}

StatusOr<google::storage::v2::Object> StorageTracingStub::GetObject(
    grpc::ClientContext& context,
    google::storage::v2::GetObjectRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.storage.v2.Storage", "GetObject");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span, child_->GetObject(context, request));
}

std::unique_ptr<google::cloud::internal::StreamingReadRpc<
    google::storage::v2::ReadObjectResponse>>
StorageTracingStub::ReadObject(
    std::shared_ptr<grpc::ClientContext> context,
    google::storage::v2::ReadObjectRequest const& request) {
  return child_->ReadObject(std::move(context), request);
}

StatusOr<google::storage::v2::Object> StorageTracingStub::UpdateObject(
    grpc::ClientContext& context,
    google::storage::v2::UpdateObjectRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.storage.v2.Storage", "UpdateObject");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->UpdateObject(context, request));
}

std::unique_ptr<::google::cloud::internal::StreamingWriteRpc<
    google::storage::v2::WriteObjectRequest,
    google::storage::v2::WriteObjectResponse>>
StorageTracingStub::WriteObject(std::shared_ptr<grpc::ClientContext> context) {
  return child_->WriteObject(std::move(context));
}

StatusOr<google::storage::v2::ListObjectsResponse>
StorageTracingStub::ListObjects(
    grpc::ClientContext& context,
    google::storage::v2::ListObjectsRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.storage.v2.Storage", "ListObjects");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->ListObjects(context, request));
}

StatusOr<google::storage::v2::RewriteResponse>
StorageTracingStub::RewriteObject(
    grpc::ClientContext& context,
    google::storage::v2::RewriteObjectRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.storage.v2.Storage", "RewriteObject");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->RewriteObject(context, request));
}

StatusOr<google::storage::v2::StartResumableWriteResponse>
StorageTracingStub::StartResumableWrite(
    grpc::ClientContext& context,
    google::storage::v2::StartResumableWriteRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.storage.v2.Storage",
                                     "StartResumableWrite");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->StartResumableWrite(context, request));
}

StatusOr<google::storage::v2::QueryWriteStatusResponse>
StorageTracingStub::QueryWriteStatus(
    grpc::ClientContext& context,
    google::storage::v2::QueryWriteStatusRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.storage.v2.Storage", "QueryWriteStatus");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->QueryWriteStatus(context, request));
}

StatusOr<google::storage::v2::ServiceAccount>
StorageTracingStub::GetServiceAccount(
    grpc::ClientContext& context,
    google::storage::v2::GetServiceAccountRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.storage.v2.Storage", "GetServiceAccount");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->GetServiceAccount(context, request));
}

StatusOr<google::storage::v2::CreateHmacKeyResponse>
StorageTracingStub::CreateHmacKey(
    grpc::ClientContext& context,
    google::storage::v2::CreateHmacKeyRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.storage.v2.Storage", "CreateHmacKey");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->CreateHmacKey(context, request));
}

Status StorageTracingStub::DeleteHmacKey(
    grpc::ClientContext& context,
    google::storage::v2::DeleteHmacKeyRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.storage.v2.Storage", "DeleteHmacKey");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->DeleteHmacKey(context, request));
}

StatusOr<google::storage::v2::HmacKeyMetadata> StorageTracingStub::GetHmacKey(
    grpc::ClientContext& context,
    google::storage::v2::GetHmacKeyRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.storage.v2.Storage", "GetHmacKey");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->GetHmacKey(context, request));
}

StatusOr<google::storage::v2::ListHmacKeysResponse>
StorageTracingStub::ListHmacKeys(
    grpc::ClientContext& context,
    google::storage::v2::ListHmacKeysRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.storage.v2.Storage", "ListHmacKeys");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->ListHmacKeys(context, request));
}

StatusOr<google::storage::v2::HmacKeyMetadata>
StorageTracingStub::UpdateHmacKey(
    grpc::ClientContext& context,
    google::storage::v2::UpdateHmacKeyRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.storage.v2.Storage", "UpdateHmacKey");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->UpdateHmacKey(context, request));
}

future<Status> StorageTracingStub::AsyncDeleteObject(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::storage::v2::DeleteObjectRequest const& request) {
  return child_->AsyncDeleteObject(cq, std::move(context), request);
}

std::unique_ptr<::google::cloud::internal::AsyncStreamingReadRpc<
    google::storage::v2::ReadObjectResponse>>
StorageTracingStub::AsyncReadObject(
    google::cloud::CompletionQueue const& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::storage::v2::ReadObjectRequest const& request) {
  return child_->AsyncReadObject(cq, std::move(context), request);
}

std::unique_ptr<::google::cloud::internal::AsyncStreamingWriteRpc<
    google::storage::v2::WriteObjectRequest,
    google::storage::v2::WriteObjectResponse>>
StorageTracingStub::AsyncWriteObject(
    google::cloud::CompletionQueue const& cq,
    std::shared_ptr<grpc::ClientContext> context) {
  return child_->AsyncWriteObject(cq, std::move(context));
}

future<StatusOr<google::storage::v2::StartResumableWriteResponse>>
StorageTracingStub::AsyncStartResumableWrite(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::storage::v2::StartResumableWriteRequest const& request) {
  return child_->AsyncStartResumableWrite(cq, std::move(context), request);
}

future<StatusOr<google::storage::v2::QueryWriteStatusResponse>>
StorageTracingStub::AsyncQueryWriteStatus(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::storage::v2::QueryWriteStatusRequest const& request) {
  return child_->AsyncQueryWriteStatus(cq, std::move(context), request);
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<StorageStub> MakeStorageTracingStub(
    std::shared_ptr<StorageStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<StorageTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace storage_internal
}  // namespace cloud
}  // namespace google
