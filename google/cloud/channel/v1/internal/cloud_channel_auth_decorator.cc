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

#include "google/cloud/channel/v1/internal/cloud_channel_auth_decorator.h"
#include <google/cloud/channel/v1/service.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace channel_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

CloudChannelServiceAuth::CloudChannelServiceAuth(
    std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
    std::shared_ptr<CloudChannelServiceStub> child)
    : auth_(std::move(auth)), child_(std::move(child)) {}

StatusOr<google::cloud::channel::v1::ListCustomersResponse>
CloudChannelServiceAuth::ListCustomers(
    grpc::ClientContext& context,
    google::cloud::channel::v1::ListCustomersRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListCustomers(context, request);
}

StatusOr<google::cloud::channel::v1::Customer>
CloudChannelServiceAuth::GetCustomer(
    grpc::ClientContext& context,
    google::cloud::channel::v1::GetCustomerRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetCustomer(context, request);
}

StatusOr<google::cloud::channel::v1::CheckCloudIdentityAccountsExistResponse>
CloudChannelServiceAuth::CheckCloudIdentityAccountsExist(
    grpc::ClientContext& context,
    google::cloud::channel::v1::CheckCloudIdentityAccountsExistRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CheckCloudIdentityAccountsExist(context, request);
}

StatusOr<google::cloud::channel::v1::Customer>
CloudChannelServiceAuth::CreateCustomer(
    grpc::ClientContext& context,
    google::cloud::channel::v1::CreateCustomerRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateCustomer(context, request);
}

StatusOr<google::cloud::channel::v1::Customer>
CloudChannelServiceAuth::UpdateCustomer(
    grpc::ClientContext& context,
    google::cloud::channel::v1::UpdateCustomerRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateCustomer(context, request);
}

Status CloudChannelServiceAuth::DeleteCustomer(
    grpc::ClientContext& context,
    google::cloud::channel::v1::DeleteCustomerRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteCustomer(context, request);
}

StatusOr<google::cloud::channel::v1::Customer>
CloudChannelServiceAuth::ImportCustomer(
    grpc::ClientContext& context,
    google::cloud::channel::v1::ImportCustomerRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ImportCustomer(context, request);
}

future<StatusOr<google::longrunning::Operation>>
CloudChannelServiceAuth::AsyncProvisionCloudIdentity(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::channel::v1::ProvisionCloudIdentityRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  auto& child = child_;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncProvisionCloudIdentity(cq, *std::move(context),
                                                  request);
      });
}

StatusOr<google::cloud::channel::v1::ListEntitlementsResponse>
CloudChannelServiceAuth::ListEntitlements(
    grpc::ClientContext& context,
    google::cloud::channel::v1::ListEntitlementsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListEntitlements(context, request);
}

StatusOr<google::cloud::channel::v1::ListTransferableSkusResponse>
CloudChannelServiceAuth::ListTransferableSkus(
    grpc::ClientContext& context,
    google::cloud::channel::v1::ListTransferableSkusRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListTransferableSkus(context, request);
}

StatusOr<google::cloud::channel::v1::ListTransferableOffersResponse>
CloudChannelServiceAuth::ListTransferableOffers(
    grpc::ClientContext& context,
    google::cloud::channel::v1::ListTransferableOffersRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListTransferableOffers(context, request);
}

StatusOr<google::cloud::channel::v1::Entitlement>
CloudChannelServiceAuth::GetEntitlement(
    grpc::ClientContext& context,
    google::cloud::channel::v1::GetEntitlementRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetEntitlement(context, request);
}

future<StatusOr<google::longrunning::Operation>>
CloudChannelServiceAuth::AsyncCreateEntitlement(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::channel::v1::CreateEntitlementRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  auto& child = child_;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncCreateEntitlement(cq, *std::move(context), request);
      });
}

future<StatusOr<google::longrunning::Operation>>
CloudChannelServiceAuth::AsyncChangeParameters(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::channel::v1::ChangeParametersRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  auto& child = child_;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncChangeParameters(cq, *std::move(context), request);
      });
}

future<StatusOr<google::longrunning::Operation>>
CloudChannelServiceAuth::AsyncChangeRenewalSettings(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::channel::v1::ChangeRenewalSettingsRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  auto& child = child_;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncChangeRenewalSettings(cq, *std::move(context),
                                                 request);
      });
}

future<StatusOr<google::longrunning::Operation>>
CloudChannelServiceAuth::AsyncChangeOffer(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::channel::v1::ChangeOfferRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  auto& child = child_;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncChangeOffer(cq, *std::move(context), request);
      });
}

future<StatusOr<google::longrunning::Operation>>
CloudChannelServiceAuth::AsyncStartPaidService(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::channel::v1::StartPaidServiceRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  auto& child = child_;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncStartPaidService(cq, *std::move(context), request);
      });
}

future<StatusOr<google::longrunning::Operation>>
CloudChannelServiceAuth::AsyncSuspendEntitlement(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::channel::v1::SuspendEntitlementRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  auto& child = child_;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncSuspendEntitlement(cq, *std::move(context), request);
      });
}

future<StatusOr<google::longrunning::Operation>>
CloudChannelServiceAuth::AsyncCancelEntitlement(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::channel::v1::CancelEntitlementRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  auto& child = child_;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncCancelEntitlement(cq, *std::move(context), request);
      });
}

future<StatusOr<google::longrunning::Operation>>
CloudChannelServiceAuth::AsyncActivateEntitlement(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::channel::v1::ActivateEntitlementRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  auto& child = child_;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncActivateEntitlement(cq, *std::move(context),
                                               request);
      });
}

future<StatusOr<google::longrunning::Operation>>
CloudChannelServiceAuth::AsyncTransferEntitlements(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::channel::v1::TransferEntitlementsRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  auto& child = child_;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncTransferEntitlements(cq, *std::move(context),
                                                request);
      });
}

future<StatusOr<google::longrunning::Operation>>
CloudChannelServiceAuth::AsyncTransferEntitlementsToGoogle(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::channel::v1::TransferEntitlementsToGoogleRequest const&
        request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  auto& child = child_;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncTransferEntitlementsToGoogle(cq, *std::move(context),
                                                        request);
      });
}

StatusOr<google::cloud::channel::v1::ListChannelPartnerLinksResponse>
CloudChannelServiceAuth::ListChannelPartnerLinks(
    grpc::ClientContext& context,
    google::cloud::channel::v1::ListChannelPartnerLinksRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListChannelPartnerLinks(context, request);
}

StatusOr<google::cloud::channel::v1::ChannelPartnerLink>
CloudChannelServiceAuth::GetChannelPartnerLink(
    grpc::ClientContext& context,
    google::cloud::channel::v1::GetChannelPartnerLinkRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetChannelPartnerLink(context, request);
}

StatusOr<google::cloud::channel::v1::ChannelPartnerLink>
CloudChannelServiceAuth::CreateChannelPartnerLink(
    grpc::ClientContext& context,
    google::cloud::channel::v1::CreateChannelPartnerLinkRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateChannelPartnerLink(context, request);
}

StatusOr<google::cloud::channel::v1::ChannelPartnerLink>
CloudChannelServiceAuth::UpdateChannelPartnerLink(
    grpc::ClientContext& context,
    google::cloud::channel::v1::UpdateChannelPartnerLinkRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateChannelPartnerLink(context, request);
}

StatusOr<google::cloud::channel::v1::CustomerRepricingConfig>
CloudChannelServiceAuth::GetCustomerRepricingConfig(
    grpc::ClientContext& context,
    google::cloud::channel::v1::GetCustomerRepricingConfigRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetCustomerRepricingConfig(context, request);
}

StatusOr<google::cloud::channel::v1::ListCustomerRepricingConfigsResponse>
CloudChannelServiceAuth::ListCustomerRepricingConfigs(
    grpc::ClientContext& context,
    google::cloud::channel::v1::ListCustomerRepricingConfigsRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListCustomerRepricingConfigs(context, request);
}

StatusOr<google::cloud::channel::v1::CustomerRepricingConfig>
CloudChannelServiceAuth::CreateCustomerRepricingConfig(
    grpc::ClientContext& context,
    google::cloud::channel::v1::CreateCustomerRepricingConfigRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateCustomerRepricingConfig(context, request);
}

StatusOr<google::cloud::channel::v1::CustomerRepricingConfig>
CloudChannelServiceAuth::UpdateCustomerRepricingConfig(
    grpc::ClientContext& context,
    google::cloud::channel::v1::UpdateCustomerRepricingConfigRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateCustomerRepricingConfig(context, request);
}

Status CloudChannelServiceAuth::DeleteCustomerRepricingConfig(
    grpc::ClientContext& context,
    google::cloud::channel::v1::DeleteCustomerRepricingConfigRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteCustomerRepricingConfig(context, request);
}

StatusOr<google::cloud::channel::v1::ChannelPartnerRepricingConfig>
CloudChannelServiceAuth::GetChannelPartnerRepricingConfig(
    grpc::ClientContext& context,
    google::cloud::channel::v1::GetChannelPartnerRepricingConfigRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetChannelPartnerRepricingConfig(context, request);
}

StatusOr<google::cloud::channel::v1::ListChannelPartnerRepricingConfigsResponse>
CloudChannelServiceAuth::ListChannelPartnerRepricingConfigs(
    grpc::ClientContext& context,
    google::cloud::channel::v1::ListChannelPartnerRepricingConfigsRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListChannelPartnerRepricingConfigs(context, request);
}

StatusOr<google::cloud::channel::v1::ChannelPartnerRepricingConfig>
CloudChannelServiceAuth::CreateChannelPartnerRepricingConfig(
    grpc::ClientContext& context,
    google::cloud::channel::v1::
        CreateChannelPartnerRepricingConfigRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateChannelPartnerRepricingConfig(context, request);
}

StatusOr<google::cloud::channel::v1::ChannelPartnerRepricingConfig>
CloudChannelServiceAuth::UpdateChannelPartnerRepricingConfig(
    grpc::ClientContext& context,
    google::cloud::channel::v1::
        UpdateChannelPartnerRepricingConfigRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateChannelPartnerRepricingConfig(context, request);
}

Status CloudChannelServiceAuth::DeleteChannelPartnerRepricingConfig(
    grpc::ClientContext& context,
    google::cloud::channel::v1::
        DeleteChannelPartnerRepricingConfigRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteChannelPartnerRepricingConfig(context, request);
}

StatusOr<google::cloud::channel::v1::Offer>
CloudChannelServiceAuth::LookupOffer(
    grpc::ClientContext& context,
    google::cloud::channel::v1::LookupOfferRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->LookupOffer(context, request);
}

StatusOr<google::cloud::channel::v1::ListProductsResponse>
CloudChannelServiceAuth::ListProducts(
    grpc::ClientContext& context,
    google::cloud::channel::v1::ListProductsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListProducts(context, request);
}

StatusOr<google::cloud::channel::v1::ListSkusResponse>
CloudChannelServiceAuth::ListSkus(
    grpc::ClientContext& context,
    google::cloud::channel::v1::ListSkusRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListSkus(context, request);
}

StatusOr<google::cloud::channel::v1::ListOffersResponse>
CloudChannelServiceAuth::ListOffers(
    grpc::ClientContext& context,
    google::cloud::channel::v1::ListOffersRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListOffers(context, request);
}

StatusOr<google::cloud::channel::v1::ListPurchasableSkusResponse>
CloudChannelServiceAuth::ListPurchasableSkus(
    grpc::ClientContext& context,
    google::cloud::channel::v1::ListPurchasableSkusRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListPurchasableSkus(context, request);
}

StatusOr<google::cloud::channel::v1::ListPurchasableOffersResponse>
CloudChannelServiceAuth::ListPurchasableOffers(
    grpc::ClientContext& context,
    google::cloud::channel::v1::ListPurchasableOffersRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListPurchasableOffers(context, request);
}

StatusOr<google::cloud::channel::v1::RegisterSubscriberResponse>
CloudChannelServiceAuth::RegisterSubscriber(
    grpc::ClientContext& context,
    google::cloud::channel::v1::RegisterSubscriberRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->RegisterSubscriber(context, request);
}

StatusOr<google::cloud::channel::v1::UnregisterSubscriberResponse>
CloudChannelServiceAuth::UnregisterSubscriber(
    grpc::ClientContext& context,
    google::cloud::channel::v1::UnregisterSubscriberRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UnregisterSubscriber(context, request);
}

StatusOr<google::cloud::channel::v1::ListSubscribersResponse>
CloudChannelServiceAuth::ListSubscribers(
    grpc::ClientContext& context,
    google::cloud::channel::v1::ListSubscribersRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListSubscribers(context, request);
}

future<StatusOr<google::longrunning::Operation>>
CloudChannelServiceAuth::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  auto& child = child_;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncGetOperation(cq, *std::move(context), request);
      });
}

future<Status> CloudChannelServiceAuth::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  auto& child = child_;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child,
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) return make_ready_future(std::move(context).status());
        return child->AsyncCancelOperation(cq, *std::move(context), request);
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace channel_v1_internal
}  // namespace cloud
}  // namespace google
