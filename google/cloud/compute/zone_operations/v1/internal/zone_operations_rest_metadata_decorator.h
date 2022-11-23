// Copyright 2023 Google LLC
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
// source: google/cloud/compute/zone_operations/v1/zone_operations.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_ZONE_OPERATIONS_V1_INTERNAL_ZONE_OPERATIONS_REST_METADATA_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_ZONE_OPERATIONS_V1_INTERNAL_ZONE_OPERATIONS_REST_METADATA_DECORATOR_H

#include "google/cloud/compute/zone_operations/v1/internal/zone_operations_rest_stub.h"
#include "google/cloud/future.h"
#include "google/cloud/rest_options.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/zone_operations/v1/zone_operations.pb.h>
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace compute_zone_operations_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class ZoneOperationsRestMetadata : public ZoneOperationsRestStub {
 public:
  ~ZoneOperationsRestMetadata() override = default;
  explicit ZoneOperationsRestMetadata(
      std::shared_ptr<ZoneOperationsRestStub> child);

  Status DeleteZoneOperations(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::zone_operations::v1::
          DeleteZoneOperationsRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> GetZoneOperations(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::zone_operations::v1::
          GetZoneOperationsRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::OperationList> ListZoneOperations(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::zone_operations::v1::
          ListZoneOperationsRequest const& request) override;

  StatusOr<google::cloud::cpp::compute::v1::Operation> Wait(
      google::cloud::rest_internal::RestContext& rest_context,
      google::cloud::cpp::compute::zone_operations::v1::WaitRequest const&
          request) override;

 private:
  void SetMetadata(rest_internal::RestContext& rest_context,
                   std::vector<std::string> const& params = {});

  std::shared_ptr<ZoneOperationsRestStub> child_;
  std::string api_client_header_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_zone_operations_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_ZONE_OPERATIONS_V1_INTERNAL_ZONE_OPERATIONS_REST_METADATA_DECORATOR_H
