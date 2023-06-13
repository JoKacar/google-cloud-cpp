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
// source: google/cloud/datacatalog/v1/policytagmanagerserialization.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATACATALOG_V1_INTERNAL_POLICY_TAG_MANAGER_SERIALIZATION_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATACATALOG_V1_INTERNAL_POLICY_TAG_MANAGER_SERIALIZATION_STUB_H

#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/cloud/datacatalog/v1/policytagmanagerserialization.grpc.pb.h>
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace datacatalog_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class PolicyTagManagerSerializationStub {
 public:
  virtual ~PolicyTagManagerSerializationStub() = 0;

  virtual StatusOr<google::cloud::datacatalog::v1::Taxonomy> ReplaceTaxonomy(
      grpc::ClientContext& context,
      google::cloud::datacatalog::v1::ReplaceTaxonomyRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::datacatalog::v1::ImportTaxonomiesResponse>
  ImportTaxonomies(
      grpc::ClientContext& context,
      google::cloud::datacatalog::v1::ImportTaxonomiesRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::datacatalog::v1::ExportTaxonomiesResponse>
  ExportTaxonomies(
      grpc::ClientContext& context,
      google::cloud::datacatalog::v1::ExportTaxonomiesRequest const&
          request) = 0;
};

class DefaultPolicyTagManagerSerializationStub
    : public PolicyTagManagerSerializationStub {
 public:
  explicit DefaultPolicyTagManagerSerializationStub(
      std::unique_ptr<google::cloud::datacatalog::v1::
                          PolicyTagManagerSerialization::StubInterface>
          grpc_stub)
      : grpc_stub_(std::move(grpc_stub)) {}

  StatusOr<google::cloud::datacatalog::v1::Taxonomy> ReplaceTaxonomy(
      grpc::ClientContext& client_context,
      google::cloud::datacatalog::v1::ReplaceTaxonomyRequest const& request)
      override;

  StatusOr<google::cloud::datacatalog::v1::ImportTaxonomiesResponse>
  ImportTaxonomies(
      grpc::ClientContext& client_context,
      google::cloud::datacatalog::v1::ImportTaxonomiesRequest const& request)
      override;

  StatusOr<google::cloud::datacatalog::v1::ExportTaxonomiesResponse>
  ExportTaxonomies(
      grpc::ClientContext& client_context,
      google::cloud::datacatalog::v1::ExportTaxonomiesRequest const& request)
      override;

 private:
  std::unique_ptr<google::cloud::datacatalog::v1::
                      PolicyTagManagerSerialization::StubInterface>
      grpc_stub_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace datacatalog_v1_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATACATALOG_V1_INTERNAL_POLICY_TAG_MANAGER_SERIALIZATION_STUB_H
