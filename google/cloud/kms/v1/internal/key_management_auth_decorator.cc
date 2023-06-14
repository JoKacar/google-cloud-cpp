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

#include "google/cloud/kms/v1/internal/key_management_auth_decorator.h"
#include <google/cloud/kms/v1/service.grpc.pb.h>
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace kms_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

KeyManagementServiceAuth::KeyManagementServiceAuth(
    std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
    std::shared_ptr<KeyManagementServiceStub> child)
    : auth_(std::move(auth)), child_(std::move(child)) {}

StatusOr<google::cloud::kms::v1::ListKeyRingsResponse>
KeyManagementServiceAuth::ListKeyRings(
    grpc::ClientContext& context,
    google::cloud::kms::v1::ListKeyRingsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListKeyRings(context, request);
}

StatusOr<google::cloud::kms::v1::ListCryptoKeysResponse>
KeyManagementServiceAuth::ListCryptoKeys(
    grpc::ClientContext& context,
    google::cloud::kms::v1::ListCryptoKeysRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListCryptoKeys(context, request);
}

StatusOr<google::cloud::kms::v1::ListCryptoKeyVersionsResponse>
KeyManagementServiceAuth::ListCryptoKeyVersions(
    grpc::ClientContext& context,
    google::cloud::kms::v1::ListCryptoKeyVersionsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListCryptoKeyVersions(context, request);
}

StatusOr<google::cloud::kms::v1::ListImportJobsResponse>
KeyManagementServiceAuth::ListImportJobs(
    grpc::ClientContext& context,
    google::cloud::kms::v1::ListImportJobsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListImportJobs(context, request);
}

StatusOr<google::cloud::kms::v1::KeyRing> KeyManagementServiceAuth::GetKeyRing(
    grpc::ClientContext& context,
    google::cloud::kms::v1::GetKeyRingRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetKeyRing(context, request);
}

StatusOr<google::cloud::kms::v1::CryptoKey>
KeyManagementServiceAuth::GetCryptoKey(
    grpc::ClientContext& context,
    google::cloud::kms::v1::GetCryptoKeyRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetCryptoKey(context, request);
}

StatusOr<google::cloud::kms::v1::CryptoKeyVersion>
KeyManagementServiceAuth::GetCryptoKeyVersion(
    grpc::ClientContext& context,
    google::cloud::kms::v1::GetCryptoKeyVersionRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetCryptoKeyVersion(context, request);
}

StatusOr<google::cloud::kms::v1::PublicKey>
KeyManagementServiceAuth::GetPublicKey(
    grpc::ClientContext& context,
    google::cloud::kms::v1::GetPublicKeyRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetPublicKey(context, request);
}

StatusOr<google::cloud::kms::v1::ImportJob>
KeyManagementServiceAuth::GetImportJob(
    grpc::ClientContext& context,
    google::cloud::kms::v1::GetImportJobRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetImportJob(context, request);
}

StatusOr<google::cloud::kms::v1::KeyRing>
KeyManagementServiceAuth::CreateKeyRing(
    grpc::ClientContext& context,
    google::cloud::kms::v1::CreateKeyRingRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateKeyRing(context, request);
}

StatusOr<google::cloud::kms::v1::CryptoKey>
KeyManagementServiceAuth::CreateCryptoKey(
    grpc::ClientContext& context,
    google::cloud::kms::v1::CreateCryptoKeyRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateCryptoKey(context, request);
}

StatusOr<google::cloud::kms::v1::CryptoKeyVersion>
KeyManagementServiceAuth::CreateCryptoKeyVersion(
    grpc::ClientContext& context,
    google::cloud::kms::v1::CreateCryptoKeyVersionRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateCryptoKeyVersion(context, request);
}

StatusOr<google::cloud::kms::v1::CryptoKeyVersion>
KeyManagementServiceAuth::ImportCryptoKeyVersion(
    grpc::ClientContext& context,
    google::cloud::kms::v1::ImportCryptoKeyVersionRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ImportCryptoKeyVersion(context, request);
}

StatusOr<google::cloud::kms::v1::ImportJob>
KeyManagementServiceAuth::CreateImportJob(
    grpc::ClientContext& context,
    google::cloud::kms::v1::CreateImportJobRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateImportJob(context, request);
}

StatusOr<google::cloud::kms::v1::CryptoKey>
KeyManagementServiceAuth::UpdateCryptoKey(
    grpc::ClientContext& context,
    google::cloud::kms::v1::UpdateCryptoKeyRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateCryptoKey(context, request);
}

StatusOr<google::cloud::kms::v1::CryptoKeyVersion>
KeyManagementServiceAuth::UpdateCryptoKeyVersion(
    grpc::ClientContext& context,
    google::cloud::kms::v1::UpdateCryptoKeyVersionRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateCryptoKeyVersion(context, request);
}

StatusOr<google::cloud::kms::v1::CryptoKey>
KeyManagementServiceAuth::UpdateCryptoKeyPrimaryVersion(
    grpc::ClientContext& context,
    google::cloud::kms::v1::UpdateCryptoKeyPrimaryVersionRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateCryptoKeyPrimaryVersion(context, request);
}

StatusOr<google::cloud::kms::v1::CryptoKeyVersion>
KeyManagementServiceAuth::DestroyCryptoKeyVersion(
    grpc::ClientContext& context,
    google::cloud::kms::v1::DestroyCryptoKeyVersionRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DestroyCryptoKeyVersion(context, request);
}

StatusOr<google::cloud::kms::v1::CryptoKeyVersion>
KeyManagementServiceAuth::RestoreCryptoKeyVersion(
    grpc::ClientContext& context,
    google::cloud::kms::v1::RestoreCryptoKeyVersionRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->RestoreCryptoKeyVersion(context, request);
}

StatusOr<google::cloud::kms::v1::EncryptResponse>
KeyManagementServiceAuth::Encrypt(
    grpc::ClientContext& context,
    google::cloud::kms::v1::EncryptRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->Encrypt(context, request);
}

StatusOr<google::cloud::kms::v1::DecryptResponse>
KeyManagementServiceAuth::Decrypt(
    grpc::ClientContext& context,
    google::cloud::kms::v1::DecryptRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->Decrypt(context, request);
}

StatusOr<google::cloud::kms::v1::AsymmetricSignResponse>
KeyManagementServiceAuth::AsymmetricSign(
    grpc::ClientContext& context,
    google::cloud::kms::v1::AsymmetricSignRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->AsymmetricSign(context, request);
}

StatusOr<google::cloud::kms::v1::AsymmetricDecryptResponse>
KeyManagementServiceAuth::AsymmetricDecrypt(
    grpc::ClientContext& context,
    google::cloud::kms::v1::AsymmetricDecryptRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->AsymmetricDecrypt(context, request);
}

StatusOr<google::cloud::kms::v1::MacSignResponse>
KeyManagementServiceAuth::MacSign(
    grpc::ClientContext& context,
    google::cloud::kms::v1::MacSignRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->MacSign(context, request);
}

StatusOr<google::cloud::kms::v1::MacVerifyResponse>
KeyManagementServiceAuth::MacVerify(
    grpc::ClientContext& context,
    google::cloud::kms::v1::MacVerifyRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->MacVerify(context, request);
}

StatusOr<google::cloud::kms::v1::GenerateRandomBytesResponse>
KeyManagementServiceAuth::GenerateRandomBytes(
    grpc::ClientContext& context,
    google::cloud::kms::v1::GenerateRandomBytesRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GenerateRandomBytes(context, request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace kms_v1_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
