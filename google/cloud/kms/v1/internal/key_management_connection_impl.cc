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

#include "google/cloud/kms/v1/internal/key_management_connection_impl.h"
#include "google/cloud/kms/v1/internal/key_management_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace kms_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

KeyManagementServiceConnectionImpl::KeyManagementServiceConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<kms_v1_internal::KeyManagementServiceStub> stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(
          std::move(options), KeyManagementServiceConnection::options())) {}

StreamRange<google::cloud::kms::v1::KeyRing>
KeyManagementServiceConnectionImpl::ListKeyRings(
    google::cloud::kms::v1::ListKeyRingsRequest request) {
  request.clear_page_token();
  auto& stub = stub_;
  auto retry = std::shared_ptr<kms_v1::KeyManagementServiceRetryPolicy const>(
      retry_policy());
  auto backoff = std::shared_ptr<BackoffPolicy const>(backoff_policy());
  auto idempotency = idempotency_policy()->ListKeyRings(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::kms::v1::KeyRing>>(
      std::move(request),
      [stub, retry, backoff, idempotency,
       function_name](google::cloud::kms::v1::ListKeyRingsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::cloud::kms::v1::ListKeyRingsRequest const& request) {
              return stub->ListKeyRings(context, request);
            },
            r, function_name);
      },
      [](google::cloud::kms::v1::ListKeyRingsResponse r) {
        std::vector<google::cloud::kms::v1::KeyRing> result(
            r.key_rings().size());
        auto& messages = *r.mutable_key_rings();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StreamRange<google::cloud::kms::v1::CryptoKey>
KeyManagementServiceConnectionImpl::ListCryptoKeys(
    google::cloud::kms::v1::ListCryptoKeysRequest request) {
  request.clear_page_token();
  auto& stub = stub_;
  auto retry = std::shared_ptr<kms_v1::KeyManagementServiceRetryPolicy const>(
      retry_policy());
  auto backoff = std::shared_ptr<BackoffPolicy const>(backoff_policy());
  auto idempotency = idempotency_policy()->ListCryptoKeys(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::kms::v1::CryptoKey>>(
      std::move(request),
      [stub, retry, backoff, idempotency,
       function_name](google::cloud::kms::v1::ListCryptoKeysRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](
                grpc::ClientContext& context,
                google::cloud::kms::v1::ListCryptoKeysRequest const& request) {
              return stub->ListCryptoKeys(context, request);
            },
            r, function_name);
      },
      [](google::cloud::kms::v1::ListCryptoKeysResponse r) {
        std::vector<google::cloud::kms::v1::CryptoKey> result(
            r.crypto_keys().size());
        auto& messages = *r.mutable_crypto_keys();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StreamRange<google::cloud::kms::v1::CryptoKeyVersion>
KeyManagementServiceConnectionImpl::ListCryptoKeyVersions(
    google::cloud::kms::v1::ListCryptoKeyVersionsRequest request) {
  request.clear_page_token();
  auto& stub = stub_;
  auto retry = std::shared_ptr<kms_v1::KeyManagementServiceRetryPolicy const>(
      retry_policy());
  auto backoff = std::shared_ptr<BackoffPolicy const>(backoff_policy());
  auto idempotency = idempotency_policy()->ListCryptoKeyVersions(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::kms::v1::CryptoKeyVersion>>(
      std::move(request),
      [stub, retry, backoff, idempotency, function_name](
          google::cloud::kms::v1::ListCryptoKeyVersionsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::cloud::kms::v1::ListCryptoKeyVersionsRequest const&
                       request) {
              return stub->ListCryptoKeyVersions(context, request);
            },
            r, function_name);
      },
      [](google::cloud::kms::v1::ListCryptoKeyVersionsResponse r) {
        std::vector<google::cloud::kms::v1::CryptoKeyVersion> result(
            r.crypto_key_versions().size());
        auto& messages = *r.mutable_crypto_key_versions();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StreamRange<google::cloud::kms::v1::ImportJob>
KeyManagementServiceConnectionImpl::ListImportJobs(
    google::cloud::kms::v1::ListImportJobsRequest request) {
  request.clear_page_token();
  auto& stub = stub_;
  auto retry = std::shared_ptr<kms_v1::KeyManagementServiceRetryPolicy const>(
      retry_policy());
  auto backoff = std::shared_ptr<BackoffPolicy const>(backoff_policy());
  auto idempotency = idempotency_policy()->ListImportJobs(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::kms::v1::ImportJob>>(
      std::move(request),
      [stub, retry, backoff, idempotency,
       function_name](google::cloud::kms::v1::ListImportJobsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](
                grpc::ClientContext& context,
                google::cloud::kms::v1::ListImportJobsRequest const& request) {
              return stub->ListImportJobs(context, request);
            },
            r, function_name);
      },
      [](google::cloud::kms::v1::ListImportJobsResponse r) {
        std::vector<google::cloud::kms::v1::ImportJob> result(
            r.import_jobs().size());
        auto& messages = *r.mutable_import_jobs();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::kms::v1::KeyRing>
KeyManagementServiceConnectionImpl::GetKeyRing(
    google::cloud::kms::v1::GetKeyRingRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->GetKeyRing(request),
      [this](grpc::ClientContext& context,
             google::cloud::kms::v1::GetKeyRingRequest const& request) {
        return stub_->GetKeyRing(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::kms::v1::CryptoKey>
KeyManagementServiceConnectionImpl::GetCryptoKey(
    google::cloud::kms::v1::GetCryptoKeyRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->GetCryptoKey(request),
      [this](grpc::ClientContext& context,
             google::cloud::kms::v1::GetCryptoKeyRequest const& request) {
        return stub_->GetCryptoKey(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::kms::v1::CryptoKeyVersion>
KeyManagementServiceConnectionImpl::GetCryptoKeyVersion(
    google::cloud::kms::v1::GetCryptoKeyVersionRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->GetCryptoKeyVersion(request),
      [this](
          grpc::ClientContext& context,
          google::cloud::kms::v1::GetCryptoKeyVersionRequest const& request) {
        return stub_->GetCryptoKeyVersion(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::kms::v1::PublicKey>
KeyManagementServiceConnectionImpl::GetPublicKey(
    google::cloud::kms::v1::GetPublicKeyRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->GetPublicKey(request),
      [this](grpc::ClientContext& context,
             google::cloud::kms::v1::GetPublicKeyRequest const& request) {
        return stub_->GetPublicKey(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::kms::v1::ImportJob>
KeyManagementServiceConnectionImpl::GetImportJob(
    google::cloud::kms::v1::GetImportJobRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->GetImportJob(request),
      [this](grpc::ClientContext& context,
             google::cloud::kms::v1::GetImportJobRequest const& request) {
        return stub_->GetImportJob(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::kms::v1::KeyRing>
KeyManagementServiceConnectionImpl::CreateKeyRing(
    google::cloud::kms::v1::CreateKeyRingRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->CreateKeyRing(request),
      [this](grpc::ClientContext& context,
             google::cloud::kms::v1::CreateKeyRingRequest const& request) {
        return stub_->CreateKeyRing(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::kms::v1::CryptoKey>
KeyManagementServiceConnectionImpl::CreateCryptoKey(
    google::cloud::kms::v1::CreateCryptoKeyRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->CreateCryptoKey(request),
      [this](grpc::ClientContext& context,
             google::cloud::kms::v1::CreateCryptoKeyRequest const& request) {
        return stub_->CreateCryptoKey(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::kms::v1::CryptoKeyVersion>
KeyManagementServiceConnectionImpl::CreateCryptoKeyVersion(
    google::cloud::kms::v1::CreateCryptoKeyVersionRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->CreateCryptoKeyVersion(request),
      [this](grpc::ClientContext& context,
             google::cloud::kms::v1::CreateCryptoKeyVersionRequest const&
                 request) {
        return stub_->CreateCryptoKeyVersion(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::kms::v1::CryptoKeyVersion>
KeyManagementServiceConnectionImpl::ImportCryptoKeyVersion(
    google::cloud::kms::v1::ImportCryptoKeyVersionRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->ImportCryptoKeyVersion(request),
      [this](grpc::ClientContext& context,
             google::cloud::kms::v1::ImportCryptoKeyVersionRequest const&
                 request) {
        return stub_->ImportCryptoKeyVersion(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::kms::v1::ImportJob>
KeyManagementServiceConnectionImpl::CreateImportJob(
    google::cloud::kms::v1::CreateImportJobRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->CreateImportJob(request),
      [this](grpc::ClientContext& context,
             google::cloud::kms::v1::CreateImportJobRequest const& request) {
        return stub_->CreateImportJob(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::kms::v1::CryptoKey>
KeyManagementServiceConnectionImpl::UpdateCryptoKey(
    google::cloud::kms::v1::UpdateCryptoKeyRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->UpdateCryptoKey(request),
      [this](grpc::ClientContext& context,
             google::cloud::kms::v1::UpdateCryptoKeyRequest const& request) {
        return stub_->UpdateCryptoKey(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::kms::v1::CryptoKeyVersion>
KeyManagementServiceConnectionImpl::UpdateCryptoKeyVersion(
    google::cloud::kms::v1::UpdateCryptoKeyVersionRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->UpdateCryptoKeyVersion(request),
      [this](grpc::ClientContext& context,
             google::cloud::kms::v1::UpdateCryptoKeyVersionRequest const&
                 request) {
        return stub_->UpdateCryptoKeyVersion(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::kms::v1::CryptoKey>
KeyManagementServiceConnectionImpl::UpdateCryptoKeyPrimaryVersion(
    google::cloud::kms::v1::UpdateCryptoKeyPrimaryVersionRequest const&
        request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->UpdateCryptoKeyPrimaryVersion(request),
      [this](grpc::ClientContext& context,
             google::cloud::kms::v1::UpdateCryptoKeyPrimaryVersionRequest const&
                 request) {
        return stub_->UpdateCryptoKeyPrimaryVersion(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::kms::v1::CryptoKeyVersion>
KeyManagementServiceConnectionImpl::DestroyCryptoKeyVersion(
    google::cloud::kms::v1::DestroyCryptoKeyVersionRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->DestroyCryptoKeyVersion(request),
      [this](grpc::ClientContext& context,
             google::cloud::kms::v1::DestroyCryptoKeyVersionRequest const&
                 request) {
        return stub_->DestroyCryptoKeyVersion(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::kms::v1::CryptoKeyVersion>
KeyManagementServiceConnectionImpl::RestoreCryptoKeyVersion(
    google::cloud::kms::v1::RestoreCryptoKeyVersionRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->RestoreCryptoKeyVersion(request),
      [this](grpc::ClientContext& context,
             google::cloud::kms::v1::RestoreCryptoKeyVersionRequest const&
                 request) {
        return stub_->RestoreCryptoKeyVersion(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::kms::v1::EncryptResponse>
KeyManagementServiceConnectionImpl::Encrypt(
    google::cloud::kms::v1::EncryptRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(), idempotency_policy()->Encrypt(request),
      [this](grpc::ClientContext& context,
             google::cloud::kms::v1::EncryptRequest const& request) {
        return stub_->Encrypt(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::kms::v1::DecryptResponse>
KeyManagementServiceConnectionImpl::Decrypt(
    google::cloud::kms::v1::DecryptRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(), idempotency_policy()->Decrypt(request),
      [this](grpc::ClientContext& context,
             google::cloud::kms::v1::DecryptRequest const& request) {
        return stub_->Decrypt(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::kms::v1::AsymmetricSignResponse>
KeyManagementServiceConnectionImpl::AsymmetricSign(
    google::cloud::kms::v1::AsymmetricSignRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->AsymmetricSign(request),
      [this](grpc::ClientContext& context,
             google::cloud::kms::v1::AsymmetricSignRequest const& request) {
        return stub_->AsymmetricSign(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::kms::v1::AsymmetricDecryptResponse>
KeyManagementServiceConnectionImpl::AsymmetricDecrypt(
    google::cloud::kms::v1::AsymmetricDecryptRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->AsymmetricDecrypt(request),
      [this](grpc::ClientContext& context,
             google::cloud::kms::v1::AsymmetricDecryptRequest const& request) {
        return stub_->AsymmetricDecrypt(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::kms::v1::MacSignResponse>
KeyManagementServiceConnectionImpl::MacSign(
    google::cloud::kms::v1::MacSignRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(), idempotency_policy()->MacSign(request),
      [this](grpc::ClientContext& context,
             google::cloud::kms::v1::MacSignRequest const& request) {
        return stub_->MacSign(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::kms::v1::MacVerifyResponse>
KeyManagementServiceConnectionImpl::MacVerify(
    google::cloud::kms::v1::MacVerifyRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->MacVerify(request),
      [this](grpc::ClientContext& context,
             google::cloud::kms::v1::MacVerifyRequest const& request) {
        return stub_->MacVerify(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::kms::v1::GenerateRandomBytesResponse>
KeyManagementServiceConnectionImpl::GenerateRandomBytes(
    google::cloud::kms::v1::GenerateRandomBytesRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->GenerateRandomBytes(request),
      [this](
          grpc::ClientContext& context,
          google::cloud::kms::v1::GenerateRandomBytesRequest const& request) {
        return stub_->GenerateRandomBytes(context, request);
      },
      request, __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace kms_v1_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
