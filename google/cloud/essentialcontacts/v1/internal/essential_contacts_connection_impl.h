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
// source: google/cloud/essentialcontacts/v1/service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_ESSENTIALCONTACTS_V1_INTERNAL_ESSENTIAL_CONTACTS_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_ESSENTIALCONTACTS_V1_INTERNAL_ESSENTIAL_CONTACTS_CONNECTION_IMPL_H

#include "google/cloud/essentialcontacts/v1/essential_contacts_connection.h"
#include "google/cloud/essentialcontacts/v1/essential_contacts_connection_idempotency_policy.h"
#include "google/cloud/essentialcontacts/v1/essential_contacts_options.h"
#include "google/cloud/essentialcontacts/v1/internal/essential_contacts_retry_traits.h"
#include "google/cloud/essentialcontacts/v1/internal/essential_contacts_stub.h"
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
namespace essentialcontacts_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class EssentialContactsServiceConnectionImpl
    : public essentialcontacts_v1::EssentialContactsServiceConnection {
 public:
  ~EssentialContactsServiceConnectionImpl() override = default;

  EssentialContactsServiceConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<
          essentialcontacts_v1_internal::EssentialContactsServiceStub>
          stub,
      Options options);

  Options options() override { return options_; }

  StatusOr<google::cloud::essentialcontacts::v1::Contact> CreateContact(
      google::cloud::essentialcontacts::v1::CreateContactRequest const& request)
      override;

  StatusOr<google::cloud::essentialcontacts::v1::Contact> UpdateContact(
      google::cloud::essentialcontacts::v1::UpdateContactRequest const& request)
      override;

  StreamRange<google::cloud::essentialcontacts::v1::Contact> ListContacts(
      google::cloud::essentialcontacts::v1::ListContactsRequest request)
      override;

  StatusOr<google::cloud::essentialcontacts::v1::Contact> GetContact(
      google::cloud::essentialcontacts::v1::GetContactRequest const& request)
      override;

  Status DeleteContact(
      google::cloud::essentialcontacts::v1::DeleteContactRequest const& request)
      override;

  StreamRange<google::cloud::essentialcontacts::v1::Contact> ComputeContacts(
      google::cloud::essentialcontacts::v1::ComputeContactsRequest request)
      override;

  Status SendTestMessage(
      google::cloud::essentialcontacts::v1::SendTestMessageRequest const&
          request) override;

 private:
  std::unique_ptr<essentialcontacts_v1::EssentialContactsServiceRetryPolicy>
  retry_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<essentialcontacts_v1::
                        EssentialContactsServiceRetryPolicyOption>()) {
      return options
          .get<
              essentialcontacts_v1::EssentialContactsServiceRetryPolicyOption>()
          ->clone();
    }
    return options_
        .get<essentialcontacts_v1::EssentialContactsServiceRetryPolicyOption>()
        ->clone();
  }

  std::unique_ptr<BackoffPolicy> backoff_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<essentialcontacts_v1::
                        EssentialContactsServiceBackoffPolicyOption>()) {
      return options
          .get<essentialcontacts_v1::
                   EssentialContactsServiceBackoffPolicyOption>()
          ->clone();
    }
    return options_
        .get<
            essentialcontacts_v1::EssentialContactsServiceBackoffPolicyOption>()
        ->clone();
  }

  std::unique_ptr<
      essentialcontacts_v1::EssentialContactsServiceConnectionIdempotencyPolicy>
  idempotency_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<
            essentialcontacts_v1::
                EssentialContactsServiceConnectionIdempotencyPolicyOption>()) {
      return options
          .get<essentialcontacts_v1::
                   EssentialContactsServiceConnectionIdempotencyPolicyOption>()
          ->clone();
    }
    return options_
        .get<essentialcontacts_v1::
                 EssentialContactsServiceConnectionIdempotencyPolicyOption>()
        ->clone();
  }

  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<essentialcontacts_v1_internal::EssentialContactsServiceStub>
      stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace essentialcontacts_v1_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_ESSENTIALCONTACTS_V1_INTERNAL_ESSENTIAL_CONTACTS_CONNECTION_IMPL_H
