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
// source: google/cloud/servicedirectory/v1/registration_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SERVICEDIRECTORY_V1_INTERNAL_REGISTRATION_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SERVICEDIRECTORY_V1_INTERNAL_REGISTRATION_CONNECTION_IMPL_H

#include "google/cloud/servicedirectory/v1/internal/registration_retry_traits.h"
#include "google/cloud/servicedirectory/v1/internal/registration_stub.h"
#include "google/cloud/servicedirectory/v1/registration_connection.h"
#include "google/cloud/servicedirectory/v1/registration_connection_idempotency_policy.h"
#include "google/cloud/servicedirectory/v1/registration_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace servicedirectory_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class RegistrationServiceConnectionImpl
    : public servicedirectory_v1::RegistrationServiceConnection {
 public:
  ~RegistrationServiceConnectionImpl() override = default;

  RegistrationServiceConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<servicedirectory_v1_internal::RegistrationServiceStub>
          stub,
      Options options);

  Options options() override { return options_; }

  StatusOr<google::cloud::servicedirectory::v1::Namespace> CreateNamespace(
      google::cloud::servicedirectory::v1::CreateNamespaceRequest const&
          request) override;

  StreamRange<google::cloud::servicedirectory::v1::Namespace> ListNamespaces(
      google::cloud::servicedirectory::v1::ListNamespacesRequest request)
      override;

  StatusOr<google::cloud::servicedirectory::v1::Namespace> GetNamespace(
      google::cloud::servicedirectory::v1::GetNamespaceRequest const& request)
      override;

  StatusOr<google::cloud::servicedirectory::v1::Namespace> UpdateNamespace(
      google::cloud::servicedirectory::v1::UpdateNamespaceRequest const&
          request) override;

  Status DeleteNamespace(
      google::cloud::servicedirectory::v1::DeleteNamespaceRequest const&
          request) override;

  StatusOr<google::cloud::servicedirectory::v1::Service> CreateService(
      google::cloud::servicedirectory::v1::CreateServiceRequest const& request)
      override;

  StreamRange<google::cloud::servicedirectory::v1::Service> ListServices(
      google::cloud::servicedirectory::v1::ListServicesRequest request)
      override;

  StatusOr<google::cloud::servicedirectory::v1::Service> GetService(
      google::cloud::servicedirectory::v1::GetServiceRequest const& request)
      override;

  StatusOr<google::cloud::servicedirectory::v1::Service> UpdateService(
      google::cloud::servicedirectory::v1::UpdateServiceRequest const& request)
      override;

  Status DeleteService(
      google::cloud::servicedirectory::v1::DeleteServiceRequest const& request)
      override;

  StatusOr<google::cloud::servicedirectory::v1::Endpoint> CreateEndpoint(
      google::cloud::servicedirectory::v1::CreateEndpointRequest const& request)
      override;

  StreamRange<google::cloud::servicedirectory::v1::Endpoint> ListEndpoints(
      google::cloud::servicedirectory::v1::ListEndpointsRequest request)
      override;

  StatusOr<google::cloud::servicedirectory::v1::Endpoint> GetEndpoint(
      google::cloud::servicedirectory::v1::GetEndpointRequest const& request)
      override;

  StatusOr<google::cloud::servicedirectory::v1::Endpoint> UpdateEndpoint(
      google::cloud::servicedirectory::v1::UpdateEndpointRequest const& request)
      override;

  Status DeleteEndpoint(
      google::cloud::servicedirectory::v1::DeleteEndpointRequest const& request)
      override;

  StatusOr<google::iam::v1::Policy> GetIamPolicy(
      google::iam::v1::GetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::Policy> SetIamPolicy(
      google::iam::v1::SetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::TestIamPermissionsResponse> TestIamPermissions(
      google::iam::v1::TestIamPermissionsRequest const& request) override;

 private:
  std::unique_ptr<servicedirectory_v1::RegistrationServiceRetryPolicy>
  retry_policy() {
    auto const& options = internal::CurrentOptions();
    if (options
            .has<servicedirectory_v1::RegistrationServiceRetryPolicyOption>()) {
      return options
          .get<servicedirectory_v1::RegistrationServiceRetryPolicyOption>()
          ->clone();
    }
    return options_
        .get<servicedirectory_v1::RegistrationServiceRetryPolicyOption>()
        ->clone();
  }

  std::unique_ptr<BackoffPolicy> backoff_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<
            servicedirectory_v1::RegistrationServiceBackoffPolicyOption>()) {
      return options
          .get<servicedirectory_v1::RegistrationServiceBackoffPolicyOption>()
          ->clone();
    }
    return options_
        .get<servicedirectory_v1::RegistrationServiceBackoffPolicyOption>()
        ->clone();
  }

  std::unique_ptr<
      servicedirectory_v1::RegistrationServiceConnectionIdempotencyPolicy>
  idempotency_policy() {
    auto const& options = internal::CurrentOptions();
    if (options
            .has<servicedirectory_v1::
                     RegistrationServiceConnectionIdempotencyPolicyOption>()) {
      return options
          .get<servicedirectory_v1::
                   RegistrationServiceConnectionIdempotencyPolicyOption>()
          ->clone();
    }
    return options_
        .get<servicedirectory_v1::
                 RegistrationServiceConnectionIdempotencyPolicyOption>()
        ->clone();
  }

  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<servicedirectory_v1_internal::RegistrationServiceStub> stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace servicedirectory_v1_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SERVICEDIRECTORY_V1_INTERNAL_REGISTRATION_CONNECTION_IMPL_H
