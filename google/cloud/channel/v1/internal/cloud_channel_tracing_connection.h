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
// source: google/cloud/channel/v1/service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CHANNEL_V1_INTERNAL_CLOUD_CHANNEL_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CHANNEL_V1_INTERNAL_CLOUD_CHANNEL_TRACING_CONNECTION_H

#include "google/cloud/channel/v1/cloud_channel_connection.h"
#include "google/cloud/version.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace channel_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class CloudChannelServiceTracingConnection
    : public channel_v1::CloudChannelServiceConnection {
 public:
  ~CloudChannelServiceTracingConnection() override = default;

  explicit CloudChannelServiceTracingConnection(
      std::shared_ptr<channel_v1::CloudChannelServiceConnection> child);

  Options options() override { return child_->options(); }

  StreamRange<google::cloud::channel::v1::Customer> ListCustomers(
      google::cloud::channel::v1::ListCustomersRequest request) override;

  StatusOr<google::cloud::channel::v1::Customer> GetCustomer(
      google::cloud::channel::v1::GetCustomerRequest const& request) override;

  StatusOr<google::cloud::channel::v1::CheckCloudIdentityAccountsExistResponse>
  CheckCloudIdentityAccountsExist(
      google::cloud::channel::v1::CheckCloudIdentityAccountsExistRequest const&
          request) override;

  StatusOr<google::cloud::channel::v1::Customer> CreateCustomer(
      google::cloud::channel::v1::CreateCustomerRequest const& request)
      override;

  StatusOr<google::cloud::channel::v1::Customer> UpdateCustomer(
      google::cloud::channel::v1::UpdateCustomerRequest const& request)
      override;

  Status DeleteCustomer(google::cloud::channel::v1::DeleteCustomerRequest const&
                            request) override;

  StatusOr<google::cloud::channel::v1::Customer> ImportCustomer(
      google::cloud::channel::v1::ImportCustomerRequest const& request)
      override;

  future<StatusOr<google::cloud::channel::v1::Customer>> ProvisionCloudIdentity(
      google::cloud::channel::v1::ProvisionCloudIdentityRequest const& request)
      override;

  StreamRange<google::cloud::channel::v1::Entitlement> ListEntitlements(
      google::cloud::channel::v1::ListEntitlementsRequest request) override;

  StreamRange<google::cloud::channel::v1::TransferableSku> ListTransferableSkus(
      google::cloud::channel::v1::ListTransferableSkusRequest request) override;

  StreamRange<google::cloud::channel::v1::TransferableOffer>
  ListTransferableOffers(
      google::cloud::channel::v1::ListTransferableOffersRequest request)
      override;

  StatusOr<google::cloud::channel::v1::Entitlement> GetEntitlement(
      google::cloud::channel::v1::GetEntitlementRequest const& request)
      override;

  future<StatusOr<google::cloud::channel::v1::Entitlement>> CreateEntitlement(
      google::cloud::channel::v1::CreateEntitlementRequest const& request)
      override;

  future<StatusOr<google::cloud::channel::v1::Entitlement>> ChangeParameters(
      google::cloud::channel::v1::ChangeParametersRequest const& request)
      override;

  future<StatusOr<google::cloud::channel::v1::Entitlement>>
  ChangeRenewalSettings(
      google::cloud::channel::v1::ChangeRenewalSettingsRequest const& request)
      override;

  future<StatusOr<google::cloud::channel::v1::Entitlement>> ChangeOffer(
      google::cloud::channel::v1::ChangeOfferRequest const& request) override;

  future<StatusOr<google::cloud::channel::v1::Entitlement>> StartPaidService(
      google::cloud::channel::v1::StartPaidServiceRequest const& request)
      override;

  future<StatusOr<google::cloud::channel::v1::Entitlement>> SuspendEntitlement(
      google::cloud::channel::v1::SuspendEntitlementRequest const& request)
      override;

  future<StatusOr<google::cloud::channel::v1::OperationMetadata>>
  CancelEntitlement(google::cloud::channel::v1::CancelEntitlementRequest const&
                        request) override;

  future<StatusOr<google::cloud::channel::v1::Entitlement>> ActivateEntitlement(
      google::cloud::channel::v1::ActivateEntitlementRequest const& request)
      override;

  future<StatusOr<google::cloud::channel::v1::TransferEntitlementsResponse>>
  TransferEntitlements(
      google::cloud::channel::v1::TransferEntitlementsRequest const& request)
      override;

  future<StatusOr<google::cloud::channel::v1::OperationMetadata>>
  TransferEntitlementsToGoogle(
      google::cloud::channel::v1::TransferEntitlementsToGoogleRequest const&
          request) override;

  StreamRange<google::cloud::channel::v1::ChannelPartnerLink>
  ListChannelPartnerLinks(
      google::cloud::channel::v1::ListChannelPartnerLinksRequest request)
      override;

  StatusOr<google::cloud::channel::v1::ChannelPartnerLink>
  GetChannelPartnerLink(
      google::cloud::channel::v1::GetChannelPartnerLinkRequest const& request)
      override;

  StatusOr<google::cloud::channel::v1::ChannelPartnerLink>
  CreateChannelPartnerLink(
      google::cloud::channel::v1::CreateChannelPartnerLinkRequest const&
          request) override;

  StatusOr<google::cloud::channel::v1::ChannelPartnerLink>
  UpdateChannelPartnerLink(
      google::cloud::channel::v1::UpdateChannelPartnerLinkRequest const&
          request) override;

  StatusOr<google::cloud::channel::v1::CustomerRepricingConfig>
  GetCustomerRepricingConfig(
      google::cloud::channel::v1::GetCustomerRepricingConfigRequest const&
          request) override;

  StreamRange<google::cloud::channel::v1::CustomerRepricingConfig>
  ListCustomerRepricingConfigs(
      google::cloud::channel::v1::ListCustomerRepricingConfigsRequest request)
      override;

  StatusOr<google::cloud::channel::v1::CustomerRepricingConfig>
  CreateCustomerRepricingConfig(
      google::cloud::channel::v1::CreateCustomerRepricingConfigRequest const&
          request) override;

  StatusOr<google::cloud::channel::v1::CustomerRepricingConfig>
  UpdateCustomerRepricingConfig(
      google::cloud::channel::v1::UpdateCustomerRepricingConfigRequest const&
          request) override;

  Status DeleteCustomerRepricingConfig(
      google::cloud::channel::v1::DeleteCustomerRepricingConfigRequest const&
          request) override;

  StatusOr<google::cloud::channel::v1::ChannelPartnerRepricingConfig>
  GetChannelPartnerRepricingConfig(
      google::cloud::channel::v1::GetChannelPartnerRepricingConfigRequest const&
          request) override;

  StreamRange<google::cloud::channel::v1::ChannelPartnerRepricingConfig>
  ListChannelPartnerRepricingConfigs(
      google::cloud::channel::v1::ListChannelPartnerRepricingConfigsRequest
          request) override;

  StatusOr<google::cloud::channel::v1::ChannelPartnerRepricingConfig>
  CreateChannelPartnerRepricingConfig(
      google::cloud::channel::v1::
          CreateChannelPartnerRepricingConfigRequest const& request) override;

  StatusOr<google::cloud::channel::v1::ChannelPartnerRepricingConfig>
  UpdateChannelPartnerRepricingConfig(
      google::cloud::channel::v1::
          UpdateChannelPartnerRepricingConfigRequest const& request) override;

  Status DeleteChannelPartnerRepricingConfig(
      google::cloud::channel::v1::
          DeleteChannelPartnerRepricingConfigRequest const& request) override;

  StatusOr<google::cloud::channel::v1::Offer> LookupOffer(
      google::cloud::channel::v1::LookupOfferRequest const& request) override;

  StreamRange<google::cloud::channel::v1::Product> ListProducts(
      google::cloud::channel::v1::ListProductsRequest request) override;

  StreamRange<google::cloud::channel::v1::Sku> ListSkus(
      google::cloud::channel::v1::ListSkusRequest request) override;

  StreamRange<google::cloud::channel::v1::Offer> ListOffers(
      google::cloud::channel::v1::ListOffersRequest request) override;

  StreamRange<google::cloud::channel::v1::PurchasableSku> ListPurchasableSkus(
      google::cloud::channel::v1::ListPurchasableSkusRequest request) override;

  StreamRange<google::cloud::channel::v1::PurchasableOffer>
  ListPurchasableOffers(google::cloud::channel::v1::ListPurchasableOffersRequest
                            request) override;

  StatusOr<google::cloud::channel::v1::RegisterSubscriberResponse>
  RegisterSubscriber(
      google::cloud::channel::v1::RegisterSubscriberRequest const& request)
      override;

  StatusOr<google::cloud::channel::v1::UnregisterSubscriberResponse>
  UnregisterSubscriber(
      google::cloud::channel::v1::UnregisterSubscriberRequest const& request)
      override;

  StreamRange<std::string> ListSubscribers(
      google::cloud::channel::v1::ListSubscribersRequest request) override;

  StreamRange<google::cloud::channel::v1::EntitlementChange>
  ListEntitlementChanges(
      google::cloud::channel::v1::ListEntitlementChangesRequest request)
      override;

 private:
  std::shared_ptr<channel_v1::CloudChannelServiceConnection> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Conditionally applies the tracing decorator to the given connection.
 *
 * The connection is only decorated if tracing is enabled (as determined by the
 * connection's options).
 */
std::shared_ptr<channel_v1::CloudChannelServiceConnection>
MakeCloudChannelServiceTracingConnection(
    std::shared_ptr<channel_v1::CloudChannelServiceConnection> conn);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace channel_v1_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CHANNEL_V1_INTERNAL_CLOUD_CHANNEL_TRACING_CONNECTION_H
