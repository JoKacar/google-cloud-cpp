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
// source: google/cloud/retail/v2/product_service.proto

#include "google/cloud/retail/internal/product_metadata_decorator.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/status_or.h"
#include <google/cloud/retail/v2/product_service.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace retail_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ProductServiceMetadata::ProductServiceMetadata(
    std::shared_ptr<ProductServiceStub> child)
    : child_(std::move(child)),
      api_client_header_(
          google::cloud::internal::ApiClientHeader("generator")) {}

StatusOr<google::cloud::retail::v2::Product>
ProductServiceMetadata::CreateProduct(
    grpc::ClientContext& context,
    google::cloud::retail::v2::CreateProductRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->CreateProduct(context, request);
}

StatusOr<google::cloud::retail::v2::Product> ProductServiceMetadata::GetProduct(
    grpc::ClientContext& context,
    google::cloud::retail::v2::GetProductRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetProduct(context, request);
}

StatusOr<google::cloud::retail::v2::ListProductsResponse>
ProductServiceMetadata::ListProducts(
    grpc::ClientContext& context,
    google::cloud::retail::v2::ListProductsRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListProducts(context, request);
}

StatusOr<google::cloud::retail::v2::Product>
ProductServiceMetadata::UpdateProduct(
    grpc::ClientContext& context,
    google::cloud::retail::v2::UpdateProductRequest const& request) {
  SetMetadata(context, "product.name=" + request.product().name());
  return child_->UpdateProduct(context, request);
}

Status ProductServiceMetadata::DeleteProduct(
    grpc::ClientContext& context,
    google::cloud::retail::v2::DeleteProductRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->DeleteProduct(context, request);
}

future<StatusOr<google::longrunning::Operation>>
ProductServiceMetadata::AsyncImportProducts(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::retail::v2::ImportProductsRequest const& request) {
  SetMetadata(*context, "parent=" + request.parent());
  return child_->AsyncImportProducts(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
ProductServiceMetadata::AsyncSetInventory(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::retail::v2::SetInventoryRequest const& request) {
  SetMetadata(*context, "inventory.name=" + request.inventory().name());
  return child_->AsyncSetInventory(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
ProductServiceMetadata::AsyncAddFulfillmentPlaces(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::retail::v2::AddFulfillmentPlacesRequest const& request) {
  SetMetadata(*context, "product=" + request.product());
  return child_->AsyncAddFulfillmentPlaces(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
ProductServiceMetadata::AsyncRemoveFulfillmentPlaces(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::retail::v2::RemoveFulfillmentPlacesRequest const& request) {
  SetMetadata(*context, "product=" + request.product());
  return child_->AsyncRemoveFulfillmentPlaces(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
ProductServiceMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncGetOperation(cq, std::move(context), request);
}

future<Status> ProductServiceMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncCancelOperation(cq, std::move(context), request);
}

void ProductServiceMetadata::SetMetadata(grpc::ClientContext& context,
                                         std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  context.AddMetadata("x-goog-api-client", api_client_header_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace retail_internal
}  // namespace cloud
}  // namespace google
