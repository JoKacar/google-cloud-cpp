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
// source: google/cloud/dataproc/v1/clusters.proto

#include "google/cloud/dataproc/v1/cluster_controller_client.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace dataproc_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ClusterControllerClient::ClusterControllerClient(
    std::shared_ptr<ClusterControllerConnection> connection, Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
ClusterControllerClient::~ClusterControllerClient() = default;

future<StatusOr<google::cloud::dataproc::v1::Cluster>>
ClusterControllerClient::CreateCluster(
    std::string const& project_id, std::string const& region,
    google::cloud::dataproc::v1::Cluster const& cluster, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::dataproc::v1::CreateClusterRequest request;
  request.set_project_id(project_id);
  request.set_region(region);
  *request.mutable_cluster() = cluster;
  return connection_->CreateCluster(request);
}

future<StatusOr<google::cloud::dataproc::v1::Cluster>>
ClusterControllerClient::CreateCluster(
    google::cloud::dataproc::v1::CreateClusterRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateCluster(request);
}

future<StatusOr<google::cloud::dataproc::v1::Cluster>>
ClusterControllerClient::UpdateCluster(
    std::string const& project_id, std::string const& region,
    std::string const& cluster_name,
    google::cloud::dataproc::v1::Cluster const& cluster,
    google::protobuf::FieldMask const& update_mask, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::dataproc::v1::UpdateClusterRequest request;
  request.set_project_id(project_id);
  request.set_region(region);
  request.set_cluster_name(cluster_name);
  *request.mutable_cluster() = cluster;
  *request.mutable_update_mask() = update_mask;
  return connection_->UpdateCluster(request);
}

future<StatusOr<google::cloud::dataproc::v1::Cluster>>
ClusterControllerClient::UpdateCluster(
    google::cloud::dataproc::v1::UpdateClusterRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateCluster(request);
}

future<StatusOr<google::cloud::dataproc::v1::Cluster>>
ClusterControllerClient::StopCluster(
    google::cloud::dataproc::v1::StopClusterRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->StopCluster(request);
}

future<StatusOr<google::cloud::dataproc::v1::Cluster>>
ClusterControllerClient::StartCluster(
    google::cloud::dataproc::v1::StartClusterRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->StartCluster(request);
}

future<StatusOr<google::cloud::dataproc::v1::ClusterOperationMetadata>>
ClusterControllerClient::DeleteCluster(std::string const& project_id,
                                       std::string const& region,
                                       std::string const& cluster_name,
                                       Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::dataproc::v1::DeleteClusterRequest request;
  request.set_project_id(project_id);
  request.set_region(region);
  request.set_cluster_name(cluster_name);
  return connection_->DeleteCluster(request);
}

future<StatusOr<google::cloud::dataproc::v1::ClusterOperationMetadata>>
ClusterControllerClient::DeleteCluster(
    google::cloud::dataproc::v1::DeleteClusterRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteCluster(request);
}

StatusOr<google::cloud::dataproc::v1::Cluster>
ClusterControllerClient::GetCluster(std::string const& project_id,
                                    std::string const& region,
                                    std::string const& cluster_name,
                                    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::dataproc::v1::GetClusterRequest request;
  request.set_project_id(project_id);
  request.set_region(region);
  request.set_cluster_name(cluster_name);
  return connection_->GetCluster(request);
}

StatusOr<google::cloud::dataproc::v1::Cluster>
ClusterControllerClient::GetCluster(
    google::cloud::dataproc::v1::GetClusterRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetCluster(request);
}

StreamRange<google::cloud::dataproc::v1::Cluster>
ClusterControllerClient::ListClusters(std::string const& project_id,
                                      std::string const& region, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::dataproc::v1::ListClustersRequest request;
  request.set_project_id(project_id);
  request.set_region(region);
  return connection_->ListClusters(request);
}

StreamRange<google::cloud::dataproc::v1::Cluster>
ClusterControllerClient::ListClusters(std::string const& project_id,
                                      std::string const& region,
                                      std::string const& filter, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::dataproc::v1::ListClustersRequest request;
  request.set_project_id(project_id);
  request.set_region(region);
  request.set_filter(filter);
  return connection_->ListClusters(request);
}

StreamRange<google::cloud::dataproc::v1::Cluster>
ClusterControllerClient::ListClusters(
    google::cloud::dataproc::v1::ListClustersRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListClusters(std::move(request));
}

future<StatusOr<google::cloud::dataproc::v1::DiagnoseClusterResults>>
ClusterControllerClient::DiagnoseCluster(std::string const& project_id,
                                         std::string const& region,
                                         std::string const& cluster_name,
                                         Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::dataproc::v1::DiagnoseClusterRequest request;
  request.set_project_id(project_id);
  request.set_region(region);
  request.set_cluster_name(cluster_name);
  return connection_->DiagnoseCluster(request);
}

future<StatusOr<google::cloud::dataproc::v1::DiagnoseClusterResults>>
ClusterControllerClient::DiagnoseCluster(
    google::cloud::dataproc::v1::DiagnoseClusterRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DiagnoseCluster(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dataproc_v1
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
