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
// source: google/cloud/kms/v1/service.proto

#include "google/cloud/kms/internal/key_management_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/status_or.h"
#include <google/cloud/kms/v1/service.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace kms_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

KeyManagementServiceMetadata::KeyManagementServiceMetadata(
    std::shared_ptr<KeyManagementServiceStub> child)
    : child_(std::move(child)),
      api_client_header_(
          google::cloud::internal::ApiClientHeader("generator")) {}

StatusOr<google::cloud::kms::v1::ListKeyRingsResponse>
KeyManagementServiceMetadata::ListKeyRings(
    grpc::ClientContext& context,
    google::cloud::kms::v1::ListKeyRingsRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListKeyRings(context, request);
}

StatusOr<google::cloud::kms::v1::ListCryptoKeysResponse>
KeyManagementServiceMetadata::ListCryptoKeys(
    grpc::ClientContext& context,
    google::cloud::kms::v1::ListCryptoKeysRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListCryptoKeys(context, request);
}

StatusOr<google::cloud::kms::v1::ListCryptoKeyVersionsResponse>
KeyManagementServiceMetadata::ListCryptoKeyVersions(
    grpc::ClientContext& context,
    google::cloud::kms::v1::ListCryptoKeyVersionsRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListCryptoKeyVersions(context, request);
}

StatusOr<google::cloud::kms::v1::ListImportJobsResponse>
KeyManagementServiceMetadata::ListImportJobs(
    grpc::ClientContext& context,
    google::cloud::kms::v1::ListImportJobsRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListImportJobs(context, request);
}

StatusOr<google::cloud::kms::v1::KeyRing>
KeyManagementServiceMetadata::GetKeyRing(
    grpc::ClientContext& context,
    google::cloud::kms::v1::GetKeyRingRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetKeyRing(context, request);
}

StatusOr<google::cloud::kms::v1::CryptoKey>
KeyManagementServiceMetadata::GetCryptoKey(
    grpc::ClientContext& context,
    google::cloud::kms::v1::GetCryptoKeyRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetCryptoKey(context, request);
}

StatusOr<google::cloud::kms::v1::CryptoKeyVersion>
KeyManagementServiceMetadata::GetCryptoKeyVersion(
    grpc::ClientContext& context,
    google::cloud::kms::v1::GetCryptoKeyVersionRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetCryptoKeyVersion(context, request);
}

StatusOr<google::cloud::kms::v1::PublicKey>
KeyManagementServiceMetadata::GetPublicKey(
    grpc::ClientContext& context,
    google::cloud::kms::v1::GetPublicKeyRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetPublicKey(context, request);
}

StatusOr<google::cloud::kms::v1::ImportJob>
KeyManagementServiceMetadata::GetImportJob(
    grpc::ClientContext& context,
    google::cloud::kms::v1::GetImportJobRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetImportJob(context, request);
}

StatusOr<google::cloud::kms::v1::KeyRing>
KeyManagementServiceMetadata::CreateKeyRing(
    grpc::ClientContext& context,
    google::cloud::kms::v1::CreateKeyRingRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->CreateKeyRing(context, request);
}

StatusOr<google::cloud::kms::v1::CryptoKey>
KeyManagementServiceMetadata::CreateCryptoKey(
    grpc::ClientContext& context,
    google::cloud::kms::v1::CreateCryptoKeyRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->CreateCryptoKey(context, request);
}

StatusOr<google::cloud::kms::v1::CryptoKeyVersion>
KeyManagementServiceMetadata::CreateCryptoKeyVersion(
    grpc::ClientContext& context,
    google::cloud::kms::v1::CreateCryptoKeyVersionRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->CreateCryptoKeyVersion(context, request);
}

StatusOr<google::cloud::kms::v1::CryptoKeyVersion>
KeyManagementServiceMetadata::ImportCryptoKeyVersion(
    grpc::ClientContext& context,
    google::cloud::kms::v1::ImportCryptoKeyVersionRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ImportCryptoKeyVersion(context, request);
}

StatusOr<google::cloud::kms::v1::ImportJob>
KeyManagementServiceMetadata::CreateImportJob(
    grpc::ClientContext& context,
    google::cloud::kms::v1::CreateImportJobRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->CreateImportJob(context, request);
}

StatusOr<google::cloud::kms::v1::CryptoKey>
KeyManagementServiceMetadata::UpdateCryptoKey(
    grpc::ClientContext& context,
    google::cloud::kms::v1::UpdateCryptoKeyRequest const& request) {
  SetMetadata(context, "crypto_key.name=" + request.crypto_key().name());
  return child_->UpdateCryptoKey(context, request);
}

StatusOr<google::cloud::kms::v1::CryptoKeyVersion>
KeyManagementServiceMetadata::UpdateCryptoKeyVersion(
    grpc::ClientContext& context,
    google::cloud::kms::v1::UpdateCryptoKeyVersionRequest const& request) {
  SetMetadata(context,
              "crypto_key_version.name=" + request.crypto_key_version().name());
  return child_->UpdateCryptoKeyVersion(context, request);
}

StatusOr<google::cloud::kms::v1::CryptoKey>
KeyManagementServiceMetadata::UpdateCryptoKeyPrimaryVersion(
    grpc::ClientContext& context,
    google::cloud::kms::v1::UpdateCryptoKeyPrimaryVersionRequest const&
        request) {
  SetMetadata(context, "name=" + request.name());
  return child_->UpdateCryptoKeyPrimaryVersion(context, request);
}

StatusOr<google::cloud::kms::v1::CryptoKeyVersion>
KeyManagementServiceMetadata::DestroyCryptoKeyVersion(
    grpc::ClientContext& context,
    google::cloud::kms::v1::DestroyCryptoKeyVersionRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->DestroyCryptoKeyVersion(context, request);
}

StatusOr<google::cloud::kms::v1::CryptoKeyVersion>
KeyManagementServiceMetadata::RestoreCryptoKeyVersion(
    grpc::ClientContext& context,
    google::cloud::kms::v1::RestoreCryptoKeyVersionRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->RestoreCryptoKeyVersion(context, request);
}

StatusOr<google::cloud::kms::v1::EncryptResponse>
KeyManagementServiceMetadata::Encrypt(
    grpc::ClientContext& context,
    google::cloud::kms::v1::EncryptRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->Encrypt(context, request);
}

StatusOr<google::cloud::kms::v1::DecryptResponse>
KeyManagementServiceMetadata::Decrypt(
    grpc::ClientContext& context,
    google::cloud::kms::v1::DecryptRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->Decrypt(context, request);
}

StatusOr<google::cloud::kms::v1::AsymmetricSignResponse>
KeyManagementServiceMetadata::AsymmetricSign(
    grpc::ClientContext& context,
    google::cloud::kms::v1::AsymmetricSignRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->AsymmetricSign(context, request);
}

StatusOr<google::cloud::kms::v1::AsymmetricDecryptResponse>
KeyManagementServiceMetadata::AsymmetricDecrypt(
    grpc::ClientContext& context,
    google::cloud::kms::v1::AsymmetricDecryptRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->AsymmetricDecrypt(context, request);
}

StatusOr<google::cloud::kms::v1::MacSignResponse>
KeyManagementServiceMetadata::MacSign(
    grpc::ClientContext& context,
    google::cloud::kms::v1::MacSignRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->MacSign(context, request);
}

StatusOr<google::cloud::kms::v1::MacVerifyResponse>
KeyManagementServiceMetadata::MacVerify(
    grpc::ClientContext& context,
    google::cloud::kms::v1::MacVerifyRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->MacVerify(context, request);
}

StatusOr<google::cloud::kms::v1::GenerateRandomBytesResponse>
KeyManagementServiceMetadata::GenerateRandomBytes(
    grpc::ClientContext& context,
    google::cloud::kms::v1::GenerateRandomBytesRequest const& request) {
  SetMetadata(context, "location=" + request.location());
  return child_->GenerateRandomBytes(context, request);
}

void KeyManagementServiceMetadata::SetMetadata(
    grpc::ClientContext& context, std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context);
}

void KeyManagementServiceMetadata::SetMetadata(grpc::ClientContext& context) {
  context.AddMetadata("x-goog-api-client", api_client_header_);
  auto const& options = internal::CurrentOptions();
  if (options.has<UserProjectOption>()) {
    context.AddMetadata("x-goog-user-project",
                        options.get<UserProjectOption>());
  }
  auto const& authority = options.get<AuthorityOption>();
  if (!authority.empty()) context.set_authority(authority);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace kms_internal
}  // namespace cloud
}  // namespace google
