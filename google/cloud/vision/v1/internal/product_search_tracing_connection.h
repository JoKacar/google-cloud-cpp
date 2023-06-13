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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VISION_V1_INTERNAL_PRODUCT_SEARCH_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VISION_V1_INTERNAL_PRODUCT_SEARCH_TRACING_CONNECTION_H

#include "google/cloud/vision/v1/product_search_connection.h"
#include "google/cloud/version.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace vision_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class ProductSearchTracingConnection
    : public vision_v1::ProductSearchConnection {
 public:
  ~ProductSearchTracingConnection() override = default;

  explicit ProductSearchTracingConnection(
      std::shared_ptr<vision_v1::ProductSearchConnection> child);

  Options options() override { return child_->options(); }

  StatusOr<google::cloud::vision::v1::ProductSet> CreateProductSet(
      google::cloud::vision::v1::CreateProductSetRequest const& request)
      override;

  StreamRange<google::cloud::vision::v1::ProductSet> ListProductSets(
      google::cloud::vision::v1::ListProductSetsRequest request) override;

  StatusOr<google::cloud::vision::v1::ProductSet> GetProductSet(
      google::cloud::vision::v1::GetProductSetRequest const& request) override;

  StatusOr<google::cloud::vision::v1::ProductSet> UpdateProductSet(
      google::cloud::vision::v1::UpdateProductSetRequest const& request)
      override;

  Status DeleteProductSet(
      google::cloud::vision::v1::DeleteProductSetRequest const& request)
      override;

  StatusOr<google::cloud::vision::v1::Product> CreateProduct(
      google::cloud::vision::v1::CreateProductRequest const& request) override;

  StreamRange<google::cloud::vision::v1::Product> ListProducts(
      google::cloud::vision::v1::ListProductsRequest request) override;

  StatusOr<google::cloud::vision::v1::Product> GetProduct(
      google::cloud::vision::v1::GetProductRequest const& request) override;

  StatusOr<google::cloud::vision::v1::Product> UpdateProduct(
      google::cloud::vision::v1::UpdateProductRequest const& request) override;

  Status DeleteProduct(
      google::cloud::vision::v1::DeleteProductRequest const& request) override;

  StatusOr<google::cloud::vision::v1::ReferenceImage> CreateReferenceImage(
      google::cloud::vision::v1::CreateReferenceImageRequest const& request)
      override;

  Status DeleteReferenceImage(
      google::cloud::vision::v1::DeleteReferenceImageRequest const& request)
      override;

  StreamRange<google::cloud::vision::v1::ReferenceImage> ListReferenceImages(
      google::cloud::vision::v1::ListReferenceImagesRequest request) override;

  StatusOr<google::cloud::vision::v1::ReferenceImage> GetReferenceImage(
      google::cloud::vision::v1::GetReferenceImageRequest const& request)
      override;

  Status AddProductToProductSet(
      google::cloud::vision::v1::AddProductToProductSetRequest const& request)
      override;

  Status RemoveProductFromProductSet(
      google::cloud::vision::v1::RemoveProductFromProductSetRequest const&
          request) override;

  StreamRange<google::cloud::vision::v1::Product> ListProductsInProductSet(
      google::cloud::vision::v1::ListProductsInProductSetRequest request)
      override;

  future<StatusOr<google::cloud::vision::v1::ImportProductSetsResponse>>
  ImportProductSets(google::cloud::vision::v1::ImportProductSetsRequest const&
                        request) override;

  future<StatusOr<google::cloud::vision::v1::BatchOperationMetadata>>
  PurgeProducts(
      google::cloud::vision::v1::PurgeProductsRequest const& request) override;

 private:
  std::shared_ptr<vision_v1::ProductSearchConnection> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Conditionally applies the tracing decorator to the given connection.
 *
 * The connection is only decorated if tracing is enabled (as determined by the
 * connection's options).
 */
std::shared_ptr<vision_v1::ProductSearchConnection>
MakeProductSearchTracingConnection(
    std::shared_ptr<vision_v1::ProductSearchConnection> conn);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace vision_v1_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_VISION_V1_INTERNAL_PRODUCT_SEARCH_TRACING_CONNECTION_H
