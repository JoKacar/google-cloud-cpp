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

#include "google/cloud/retail/catalog_connection.h"
#include "google/cloud/retail/catalog_options.h"
#include "google/cloud/retail/internal/catalog_option_defaults.h"
#include "google/cloud/retail/internal/catalog_stub_factory.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>

namespace google {
namespace cloud {
namespace retail {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

CatalogServiceConnection::~CatalogServiceConnection() = default;

StreamRange<google::cloud::retail::v2::Catalog>
CatalogServiceConnection::ListCatalogs(
    google::cloud::retail::v2::ListCatalogsRequest request) {
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::retail::v2::Catalog>>(
      std::move(request),
      [](google::cloud::retail::v2::ListCatalogsRequest const&) {
        return StatusOr<google::cloud::retail::v2::ListCatalogsResponse>{};
      },
      [](google::cloud::retail::v2::ListCatalogsResponse const&) {
        return std::vector<google::cloud::retail::v2::Catalog>();
      });
}

StatusOr<google::cloud::retail::v2::Catalog>
CatalogServiceConnection::UpdateCatalog(
    google::cloud::retail::v2::UpdateCatalogRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

Status CatalogServiceConnection::SetDefaultBranch(
    google::cloud::retail::v2::SetDefaultBranchRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::retail::v2::GetDefaultBranchResponse>
CatalogServiceConnection::GetDefaultBranch(
    google::cloud::retail::v2::GetDefaultBranchRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

namespace {
class CatalogServiceConnectionImpl : public CatalogServiceConnection {
 public:
  CatalogServiceConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<retail_internal::CatalogServiceStub> stub,
      Options const& options)
      : background_(std::move(background)),
        stub_(std::move(stub)),
        retry_policy_prototype_(
            options.get<CatalogServiceRetryPolicyOption>()->clone()),
        backoff_policy_prototype_(
            options.get<CatalogServiceBackoffPolicyOption>()->clone()),
        idempotency_policy_(
            options.get<CatalogServiceConnectionIdempotencyPolicyOption>()
                ->clone()) {}

  ~CatalogServiceConnectionImpl() override = default;

  StreamRange<google::cloud::retail::v2::Catalog> ListCatalogs(
      google::cloud::retail::v2::ListCatalogsRequest request) override {
    request.clear_page_token();
    auto stub = stub_;
    auto retry = std::shared_ptr<CatalogServiceRetryPolicy const>(
        retry_policy_prototype_->clone());
    auto backoff = std::shared_ptr<BackoffPolicy const>(
        backoff_policy_prototype_->clone());
    auto idempotency = idempotency_policy_->ListCatalogs(request);
    char const* function_name = __func__;
    return google::cloud::internal::MakePaginationRange<
        StreamRange<google::cloud::retail::v2::Catalog>>(
        std::move(request),
        [stub, retry, backoff, idempotency, function_name](
            google::cloud::retail::v2::ListCatalogsRequest const& r) {
          return google::cloud::internal::RetryLoop(
              retry->clone(), backoff->clone(), idempotency,
              [stub](grpc::ClientContext& context,
                     google::cloud::retail::v2::ListCatalogsRequest const&
                         request) {
                return stub->ListCatalogs(context, request);
              },
              r, function_name);
        },
        [](google::cloud::retail::v2::ListCatalogsResponse r) {
          std::vector<google::cloud::retail::v2::Catalog> result(
              r.catalogs().size());
          auto& messages = *r.mutable_catalogs();
          std::move(messages.begin(), messages.end(), result.begin());
          return result;
        });
  }

  StatusOr<google::cloud::retail::v2::Catalog> UpdateCatalog(
      google::cloud::retail::v2::UpdateCatalogRequest const& request) override {
    return google::cloud::internal::RetryLoop(
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->UpdateCatalog(request),
        [this](grpc::ClientContext& context,
               google::cloud::retail::v2::UpdateCatalogRequest const& request) {
          return stub_->UpdateCatalog(context, request);
        },
        request, __func__);
  }

  Status SetDefaultBranch(
      google::cloud::retail::v2::SetDefaultBranchRequest const& request)
      override {
    return google::cloud::internal::RetryLoop(
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->SetDefaultBranch(request),
        [this](
            grpc::ClientContext& context,
            google::cloud::retail::v2::SetDefaultBranchRequest const& request) {
          return stub_->SetDefaultBranch(context, request);
        },
        request, __func__);
  }

  StatusOr<google::cloud::retail::v2::GetDefaultBranchResponse>
  GetDefaultBranch(google::cloud::retail::v2::GetDefaultBranchRequest const&
                       request) override {
    return google::cloud::internal::RetryLoop(
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->GetDefaultBranch(request),
        [this](
            grpc::ClientContext& context,
            google::cloud::retail::v2::GetDefaultBranchRequest const& request) {
          return stub_->GetDefaultBranch(context, request);
        },
        request, __func__);
  }

 private:
  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<retail_internal::CatalogServiceStub> stub_;
  std::unique_ptr<CatalogServiceRetryPolicy const> retry_policy_prototype_;
  std::unique_ptr<BackoffPolicy const> backoff_policy_prototype_;
  std::unique_ptr<CatalogServiceConnectionIdempotencyPolicy>
      idempotency_policy_;
};
}  // namespace

std::shared_ptr<CatalogServiceConnection> MakeCatalogServiceConnection(
    Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 CatalogServicePolicyOptionList>(options,
                                                                 __func__);
  options = retail_internal::CatalogServiceDefaultOptions(std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto stub = retail_internal::CreateDefaultCatalogServiceStub(background->cq(),
                                                               options);
  return std::make_shared<CatalogServiceConnectionImpl>(
      std::move(background), std::move(stub), options);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace retail
}  // namespace cloud
}  // namespace google

namespace google {
namespace cloud {
namespace retail_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

std::shared_ptr<retail::CatalogServiceConnection> MakeCatalogServiceConnection(
    std::shared_ptr<CatalogServiceStub> stub, Options options) {
  options = CatalogServiceDefaultOptions(std::move(options));
  return std::make_shared<retail::CatalogServiceConnectionImpl>(
      internal::MakeBackgroundThreadsFactory(options)(), std::move(stub),
      std::move(options));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace retail_internal
}  // namespace cloud
}  // namespace google
