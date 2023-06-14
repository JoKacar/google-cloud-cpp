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
// source: google/cloud/vision/v1/image_annotator.proto

#include "google/cloud/vision/v1/image_annotator_client.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace vision_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ImageAnnotatorClient::ImageAnnotatorClient(
    std::shared_ptr<ImageAnnotatorConnection> connection, Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
ImageAnnotatorClient::~ImageAnnotatorClient() = default;

StatusOr<google::cloud::vision::v1::BatchAnnotateImagesResponse>
ImageAnnotatorClient::BatchAnnotateImages(
    std::vector<google::cloud::vision::v1::AnnotateImageRequest> const&
        requests,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::vision::v1::BatchAnnotateImagesRequest request;
  *request.mutable_requests() = {requests.begin(), requests.end()};
  return connection_->BatchAnnotateImages(request);
}

StatusOr<google::cloud::vision::v1::BatchAnnotateImagesResponse>
ImageAnnotatorClient::BatchAnnotateImages(
    google::cloud::vision::v1::BatchAnnotateImagesRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->BatchAnnotateImages(request);
}

StatusOr<google::cloud::vision::v1::BatchAnnotateFilesResponse>
ImageAnnotatorClient::BatchAnnotateFiles(
    std::vector<google::cloud::vision::v1::AnnotateFileRequest> const& requests,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::vision::v1::BatchAnnotateFilesRequest request;
  *request.mutable_requests() = {requests.begin(), requests.end()};
  return connection_->BatchAnnotateFiles(request);
}

StatusOr<google::cloud::vision::v1::BatchAnnotateFilesResponse>
ImageAnnotatorClient::BatchAnnotateFiles(
    google::cloud::vision::v1::BatchAnnotateFilesRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->BatchAnnotateFiles(request);
}

future<StatusOr<google::cloud::vision::v1::AsyncBatchAnnotateImagesResponse>>
ImageAnnotatorClient::AsyncBatchAnnotateImages(
    std::vector<google::cloud::vision::v1::AnnotateImageRequest> const&
        requests,
    google::cloud::vision::v1::OutputConfig const& output_config,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::vision::v1::AsyncBatchAnnotateImagesRequest request;
  *request.mutable_requests() = {requests.begin(), requests.end()};
  *request.mutable_output_config() = output_config;
  return connection_->AsyncBatchAnnotateImages(request);
}

future<StatusOr<google::cloud::vision::v1::AsyncBatchAnnotateImagesResponse>>
ImageAnnotatorClient::AsyncBatchAnnotateImages(
    google::cloud::vision::v1::AsyncBatchAnnotateImagesRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->AsyncBatchAnnotateImages(request);
}

future<StatusOr<google::cloud::vision::v1::AsyncBatchAnnotateFilesResponse>>
ImageAnnotatorClient::AsyncBatchAnnotateFiles(
    std::vector<google::cloud::vision::v1::AsyncAnnotateFileRequest> const&
        requests,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::vision::v1::AsyncBatchAnnotateFilesRequest request;
  *request.mutable_requests() = {requests.begin(), requests.end()};
  return connection_->AsyncBatchAnnotateFiles(request);
}

future<StatusOr<google::cloud::vision::v1::AsyncBatchAnnotateFilesResponse>>
ImageAnnotatorClient::AsyncBatchAnnotateFiles(
    google::cloud::vision::v1::AsyncBatchAnnotateFilesRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->AsyncBatchAnnotateFiles(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace vision_v1
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
