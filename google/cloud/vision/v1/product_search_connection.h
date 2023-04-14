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
// source: google/cloud/vision/v1/product_search_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VISION_V1_PRODUCT_SEARCH_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VISION_V1_PRODUCT_SEARCH_CONNECTION_H

#include "google/cloud/vision/v1/internal/product_search_retry_traits.h"
#include "google/cloud/vision/v1/product_search_connection_idempotency_policy.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/cloud/vision/v1/product_search_service.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace vision_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ProductSearchRetryPolicy =
    ::google::cloud::internal::TraitBasedRetryPolicy<
        vision_v1_internal::ProductSearchRetryTraits>;

using ProductSearchLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        vision_v1_internal::ProductSearchRetryTraits>;

using ProductSearchLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        vision_v1_internal::ProductSearchRetryTraits>;

/**
 * The `ProductSearchConnection` object for `ProductSearchClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `ProductSearchClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `ProductSearchClient`.
 *
 * To create a concrete instance, see `MakeProductSearchConnection()`.
 *
 * For mocking, see `vision_v1_mocks::MockProductSearchConnection`.
 */
class ProductSearchConnection {
 public:
  virtual ~ProductSearchConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StatusOr<google::cloud::vision::v1::ProductSet> CreateProductSet(
      google::cloud::vision::v1::CreateProductSetRequest const& request);

  virtual StreamRange<google::cloud::vision::v1::ProductSet> ListProductSets(
      google::cloud::vision::v1::ListProductSetsRequest request);

  virtual StatusOr<google::cloud::vision::v1::ProductSet> GetProductSet(
      google::cloud::vision::v1::GetProductSetRequest const& request);

  virtual StatusOr<google::cloud::vision::v1::ProductSet> UpdateProductSet(
      google::cloud::vision::v1::UpdateProductSetRequest const& request);

  virtual Status DeleteProductSet(
      google::cloud::vision::v1::DeleteProductSetRequest const& request);

  virtual StatusOr<google::cloud::vision::v1::Product> CreateProduct(
      google::cloud::vision::v1::CreateProductRequest const& request);

  virtual StreamRange<google::cloud::vision::v1::Product> ListProducts(
      google::cloud::vision::v1::ListProductsRequest request);

  virtual StatusOr<google::cloud::vision::v1::Product> GetProduct(
      google::cloud::vision::v1::GetProductRequest const& request);

  virtual StatusOr<google::cloud::vision::v1::Product> UpdateProduct(
      google::cloud::vision::v1::UpdateProductRequest const& request);

  virtual Status DeleteProduct(
      google::cloud::vision::v1::DeleteProductRequest const& request);

  virtual StatusOr<google::cloud::vision::v1::ReferenceImage>
  CreateReferenceImage(
      google::cloud::vision::v1::CreateReferenceImageRequest const& request);

  virtual Status DeleteReferenceImage(
      google::cloud::vision::v1::DeleteReferenceImageRequest const& request);

  virtual StreamRange<google::cloud::vision::v1::ReferenceImage>
  ListReferenceImages(
      google::cloud::vision::v1::ListReferenceImagesRequest request);

  virtual StatusOr<google::cloud::vision::v1::ReferenceImage> GetReferenceImage(
      google::cloud::vision::v1::GetReferenceImageRequest const& request);

  virtual Status AddProductToProductSet(
      google::cloud::vision::v1::AddProductToProductSetRequest const& request);

  virtual Status RemoveProductFromProductSet(
      google::cloud::vision::v1::RemoveProductFromProductSetRequest const&
          request);

  virtual StreamRange<google::cloud::vision::v1::Product>
  ListProductsInProductSet(
      google::cloud::vision::v1::ListProductsInProductSetRequest request);

  virtual future<StatusOr<google::cloud::vision::v1::ImportProductSetsResponse>>
  ImportProductSets(
      google::cloud::vision::v1::ImportProductSetsRequest const& request);

  virtual future<StatusOr<google::cloud::vision::v1::BatchOperationMetadata>>
  PurgeProducts(google::cloud::vision::v1::PurgeProductsRequest const& request);
};

/**
 * A factory function to construct an object of type `ProductSearchConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of ProductSearchClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `ProductSearchConnection`. Expected options are any of the types in
 * the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::vision_v1::ProductSearchPolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param options (optional) Configure the `ProductSearchConnection` created by
 * this function.
 */
std::shared_ptr<ProductSearchConnection> MakeProductSearchConnection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace vision_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VISION_V1_PRODUCT_SEARCH_CONNECTION_H
