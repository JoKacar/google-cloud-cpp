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

#include "google/cloud/channel/v1/internal/cloud_channel_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace channel_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

CloudChannelServiceTracingStub::CloudChannelServiceTracingStub(
    std::shared_ptr<CloudChannelServiceStub> child)
    : child_(std::move(child)) {}

StatusOr<google::cloud::channel::v1::ListCustomersResponse>
CloudChannelServiceTracingStub::ListCustomers(
    grpc::ClientContext& context,
    google::cloud::channel::v1::ListCustomersRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.channel.v1.CloudChannelService", "ListCustomers");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->ListCustomers(context, request));
}

StatusOr<google::cloud::channel::v1::Customer>
CloudChannelServiceTracingStub::GetCustomer(
    grpc::ClientContext& context,
    google::cloud::channel::v1::GetCustomerRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.channel.v1.CloudChannelService", "GetCustomer");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->GetCustomer(context, request));
}

StatusOr<google::cloud::channel::v1::CheckCloudIdentityAccountsExistResponse>
CloudChannelServiceTracingStub::CheckCloudIdentityAccountsExist(
    grpc::ClientContext& context,
    google::cloud::channel::v1::CheckCloudIdentityAccountsExistRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.channel.v1.CloudChannelService",
                             "CheckCloudIdentityAccountsExist");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(
      context, *span,
      child_->CheckCloudIdentityAccountsExist(context, request));
}

StatusOr<google::cloud::channel::v1::Customer>
CloudChannelServiceTracingStub::CreateCustomer(
    grpc::ClientContext& context,
    google::cloud::channel::v1::CreateCustomerRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.channel.v1.CloudChannelService", "CreateCustomer");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->CreateCustomer(context, request));
}

StatusOr<google::cloud::channel::v1::Customer>
CloudChannelServiceTracingStub::UpdateCustomer(
    grpc::ClientContext& context,
    google::cloud::channel::v1::UpdateCustomerRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.channel.v1.CloudChannelService", "UpdateCustomer");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->UpdateCustomer(context, request));
}

Status CloudChannelServiceTracingStub::DeleteCustomer(
    grpc::ClientContext& context,
    google::cloud::channel::v1::DeleteCustomerRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.channel.v1.CloudChannelService", "DeleteCustomer");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->DeleteCustomer(context, request));
}

StatusOr<google::cloud::channel::v1::Customer>
CloudChannelServiceTracingStub::ImportCustomer(
    grpc::ClientContext& context,
    google::cloud::channel::v1::ImportCustomerRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.channel.v1.CloudChannelService", "ImportCustomer");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->ImportCustomer(context, request));
}

future<StatusOr<google::longrunning::Operation>>
CloudChannelServiceTracingStub::AsyncProvisionCloudIdentity(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::channel::v1::ProvisionCloudIdentityRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.channel.v1.CloudChannelService", "ProvisionCloudIdentity");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, internal::CurrentOptions());
  }
  auto f = child_->AsyncProvisionCloudIdentity(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::cloud::channel::v1::ListEntitlementsResponse>
CloudChannelServiceTracingStub::ListEntitlements(
    grpc::ClientContext& context,
    google::cloud::channel::v1::ListEntitlementsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.channel.v1.CloudChannelService", "ListEntitlements");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->ListEntitlements(context, request));
}

StatusOr<google::cloud::channel::v1::ListTransferableSkusResponse>
CloudChannelServiceTracingStub::ListTransferableSkus(
    grpc::ClientContext& context,
    google::cloud::channel::v1::ListTransferableSkusRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.channel.v1.CloudChannelService", "ListTransferableSkus");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->ListTransferableSkus(context, request));
}

StatusOr<google::cloud::channel::v1::ListTransferableOffersResponse>
CloudChannelServiceTracingStub::ListTransferableOffers(
    grpc::ClientContext& context,
    google::cloud::channel::v1::ListTransferableOffersRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.channel.v1.CloudChannelService", "ListTransferableOffers");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->ListTransferableOffers(context, request));
}

StatusOr<google::cloud::channel::v1::Entitlement>
CloudChannelServiceTracingStub::GetEntitlement(
    grpc::ClientContext& context,
    google::cloud::channel::v1::GetEntitlementRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.channel.v1.CloudChannelService", "GetEntitlement");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->GetEntitlement(context, request));
}

future<StatusOr<google::longrunning::Operation>>
CloudChannelServiceTracingStub::AsyncCreateEntitlement(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::channel::v1::CreateEntitlementRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.channel.v1.CloudChannelService", "CreateEntitlement");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, internal::CurrentOptions());
  }
  auto f = child_->AsyncCreateEntitlement(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
CloudChannelServiceTracingStub::AsyncChangeParameters(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::channel::v1::ChangeParametersRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.channel.v1.CloudChannelService", "ChangeParameters");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, internal::CurrentOptions());
  }
  auto f = child_->AsyncChangeParameters(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
CloudChannelServiceTracingStub::AsyncChangeRenewalSettings(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::channel::v1::ChangeRenewalSettingsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.channel.v1.CloudChannelService", "ChangeRenewalSettings");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, internal::CurrentOptions());
  }
  auto f = child_->AsyncChangeRenewalSettings(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
CloudChannelServiceTracingStub::AsyncChangeOffer(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::channel::v1::ChangeOfferRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.channel.v1.CloudChannelService", "ChangeOffer");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, internal::CurrentOptions());
  }
  auto f = child_->AsyncChangeOffer(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
CloudChannelServiceTracingStub::AsyncStartPaidService(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::channel::v1::StartPaidServiceRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.channel.v1.CloudChannelService", "StartPaidService");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, internal::CurrentOptions());
  }
  auto f = child_->AsyncStartPaidService(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
CloudChannelServiceTracingStub::AsyncSuspendEntitlement(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::channel::v1::SuspendEntitlementRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.channel.v1.CloudChannelService", "SuspendEntitlement");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, internal::CurrentOptions());
  }
  auto f = child_->AsyncSuspendEntitlement(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
CloudChannelServiceTracingStub::AsyncCancelEntitlement(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::channel::v1::CancelEntitlementRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.channel.v1.CloudChannelService", "CancelEntitlement");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, internal::CurrentOptions());
  }
  auto f = child_->AsyncCancelEntitlement(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
CloudChannelServiceTracingStub::AsyncActivateEntitlement(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::channel::v1::ActivateEntitlementRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.channel.v1.CloudChannelService", "ActivateEntitlement");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, internal::CurrentOptions());
  }
  auto f = child_->AsyncActivateEntitlement(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
CloudChannelServiceTracingStub::AsyncTransferEntitlements(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::channel::v1::TransferEntitlementsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.channel.v1.CloudChannelService", "TransferEntitlements");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, internal::CurrentOptions());
  }
  auto f = child_->AsyncTransferEntitlements(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<StatusOr<google::longrunning::Operation>>
CloudChannelServiceTracingStub::AsyncTransferEntitlementsToGoogle(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::channel::v1::TransferEntitlementsToGoogleRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.channel.v1.CloudChannelService",
                             "TransferEntitlementsToGoogle");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, internal::CurrentOptions());
  }
  auto f = child_->AsyncTransferEntitlementsToGoogle(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::cloud::channel::v1::ListChannelPartnerLinksResponse>
CloudChannelServiceTracingStub::ListChannelPartnerLinks(
    grpc::ClientContext& context,
    google::cloud::channel::v1::ListChannelPartnerLinksRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.channel.v1.CloudChannelService", "ListChannelPartnerLinks");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->ListChannelPartnerLinks(context, request));
}

StatusOr<google::cloud::channel::v1::ChannelPartnerLink>
CloudChannelServiceTracingStub::GetChannelPartnerLink(
    grpc::ClientContext& context,
    google::cloud::channel::v1::GetChannelPartnerLinkRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.channel.v1.CloudChannelService", "GetChannelPartnerLink");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->GetChannelPartnerLink(context, request));
}

StatusOr<google::cloud::channel::v1::ChannelPartnerLink>
CloudChannelServiceTracingStub::CreateChannelPartnerLink(
    grpc::ClientContext& context,
    google::cloud::channel::v1::CreateChannelPartnerLinkRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.channel.v1.CloudChannelService",
                             "CreateChannelPartnerLink");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->CreateChannelPartnerLink(context, request));
}

StatusOr<google::cloud::channel::v1::ChannelPartnerLink>
CloudChannelServiceTracingStub::UpdateChannelPartnerLink(
    grpc::ClientContext& context,
    google::cloud::channel::v1::UpdateChannelPartnerLinkRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.channel.v1.CloudChannelService",
                             "UpdateChannelPartnerLink");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->UpdateChannelPartnerLink(context, request));
}

StatusOr<google::cloud::channel::v1::CustomerRepricingConfig>
CloudChannelServiceTracingStub::GetCustomerRepricingConfig(
    grpc::ClientContext& context,
    google::cloud::channel::v1::GetCustomerRepricingConfigRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.channel.v1.CloudChannelService",
                             "GetCustomerRepricingConfig");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(
      context, *span, child_->GetCustomerRepricingConfig(context, request));
}

StatusOr<google::cloud::channel::v1::ListCustomerRepricingConfigsResponse>
CloudChannelServiceTracingStub::ListCustomerRepricingConfigs(
    grpc::ClientContext& context,
    google::cloud::channel::v1::ListCustomerRepricingConfigsRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.channel.v1.CloudChannelService",
                             "ListCustomerRepricingConfigs");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(
      context, *span, child_->ListCustomerRepricingConfigs(context, request));
}

StatusOr<google::cloud::channel::v1::CustomerRepricingConfig>
CloudChannelServiceTracingStub::CreateCustomerRepricingConfig(
    grpc::ClientContext& context,
    google::cloud::channel::v1::CreateCustomerRepricingConfigRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.channel.v1.CloudChannelService",
                             "CreateCustomerRepricingConfig");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(
      context, *span, child_->CreateCustomerRepricingConfig(context, request));
}

StatusOr<google::cloud::channel::v1::CustomerRepricingConfig>
CloudChannelServiceTracingStub::UpdateCustomerRepricingConfig(
    grpc::ClientContext& context,
    google::cloud::channel::v1::UpdateCustomerRepricingConfigRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.channel.v1.CloudChannelService",
                             "UpdateCustomerRepricingConfig");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(
      context, *span, child_->UpdateCustomerRepricingConfig(context, request));
}

Status CloudChannelServiceTracingStub::DeleteCustomerRepricingConfig(
    grpc::ClientContext& context,
    google::cloud::channel::v1::DeleteCustomerRepricingConfigRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.channel.v1.CloudChannelService",
                             "DeleteCustomerRepricingConfig");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(
      context, *span, child_->DeleteCustomerRepricingConfig(context, request));
}

StatusOr<google::cloud::channel::v1::ChannelPartnerRepricingConfig>
CloudChannelServiceTracingStub::GetChannelPartnerRepricingConfig(
    grpc::ClientContext& context,
    google::cloud::channel::v1::GetChannelPartnerRepricingConfigRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.channel.v1.CloudChannelService",
                             "GetChannelPartnerRepricingConfig");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(
      context, *span,
      child_->GetChannelPartnerRepricingConfig(context, request));
}

StatusOr<google::cloud::channel::v1::ListChannelPartnerRepricingConfigsResponse>
CloudChannelServiceTracingStub::ListChannelPartnerRepricingConfigs(
    grpc::ClientContext& context,
    google::cloud::channel::v1::ListChannelPartnerRepricingConfigsRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.channel.v1.CloudChannelService",
                             "ListChannelPartnerRepricingConfigs");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(
      context, *span,
      child_->ListChannelPartnerRepricingConfigs(context, request));
}

StatusOr<google::cloud::channel::v1::ChannelPartnerRepricingConfig>
CloudChannelServiceTracingStub::CreateChannelPartnerRepricingConfig(
    grpc::ClientContext& context,
    google::cloud::channel::v1::
        CreateChannelPartnerRepricingConfigRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.channel.v1.CloudChannelService",
                             "CreateChannelPartnerRepricingConfig");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(
      context, *span,
      child_->CreateChannelPartnerRepricingConfig(context, request));
}

StatusOr<google::cloud::channel::v1::ChannelPartnerRepricingConfig>
CloudChannelServiceTracingStub::UpdateChannelPartnerRepricingConfig(
    grpc::ClientContext& context,
    google::cloud::channel::v1::
        UpdateChannelPartnerRepricingConfigRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.channel.v1.CloudChannelService",
                             "UpdateChannelPartnerRepricingConfig");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(
      context, *span,
      child_->UpdateChannelPartnerRepricingConfig(context, request));
}

Status CloudChannelServiceTracingStub::DeleteChannelPartnerRepricingConfig(
    grpc::ClientContext& context,
    google::cloud::channel::v1::
        DeleteChannelPartnerRepricingConfigRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.channel.v1.CloudChannelService",
                             "DeleteChannelPartnerRepricingConfig");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(
      context, *span,
      child_->DeleteChannelPartnerRepricingConfig(context, request));
}

StatusOr<google::cloud::channel::v1::Offer>
CloudChannelServiceTracingStub::LookupOffer(
    grpc::ClientContext& context,
    google::cloud::channel::v1::LookupOfferRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.channel.v1.CloudChannelService", "LookupOffer");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->LookupOffer(context, request));
}

StatusOr<google::cloud::channel::v1::ListProductsResponse>
CloudChannelServiceTracingStub::ListProducts(
    grpc::ClientContext& context,
    google::cloud::channel::v1::ListProductsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.channel.v1.CloudChannelService", "ListProducts");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->ListProducts(context, request));
}

StatusOr<google::cloud::channel::v1::ListSkusResponse>
CloudChannelServiceTracingStub::ListSkus(
    grpc::ClientContext& context,
    google::cloud::channel::v1::ListSkusRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.channel.v1.CloudChannelService", "ListSkus");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span, child_->ListSkus(context, request));
}

StatusOr<google::cloud::channel::v1::ListOffersResponse>
CloudChannelServiceTracingStub::ListOffers(
    grpc::ClientContext& context,
    google::cloud::channel::v1::ListOffersRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.channel.v1.CloudChannelService", "ListOffers");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->ListOffers(context, request));
}

StatusOr<google::cloud::channel::v1::ListPurchasableSkusResponse>
CloudChannelServiceTracingStub::ListPurchasableSkus(
    grpc::ClientContext& context,
    google::cloud::channel::v1::ListPurchasableSkusRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.channel.v1.CloudChannelService", "ListPurchasableSkus");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->ListPurchasableSkus(context, request));
}

StatusOr<google::cloud::channel::v1::ListPurchasableOffersResponse>
CloudChannelServiceTracingStub::ListPurchasableOffers(
    grpc::ClientContext& context,
    google::cloud::channel::v1::ListPurchasableOffersRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.channel.v1.CloudChannelService", "ListPurchasableOffers");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->ListPurchasableOffers(context, request));
}

StatusOr<google::cloud::channel::v1::RegisterSubscriberResponse>
CloudChannelServiceTracingStub::RegisterSubscriber(
    grpc::ClientContext& context,
    google::cloud::channel::v1::RegisterSubscriberRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.channel.v1.CloudChannelService", "RegisterSubscriber");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->RegisterSubscriber(context, request));
}

StatusOr<google::cloud::channel::v1::UnregisterSubscriberResponse>
CloudChannelServiceTracingStub::UnregisterSubscriber(
    grpc::ClientContext& context,
    google::cloud::channel::v1::UnregisterSubscriberRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.channel.v1.CloudChannelService", "UnregisterSubscriber");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->UnregisterSubscriber(context, request));
}

StatusOr<google::cloud::channel::v1::ListSubscribersResponse>
CloudChannelServiceTracingStub::ListSubscribers(
    grpc::ClientContext& context,
    google::cloud::channel::v1::ListSubscribersRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.channel.v1.CloudChannelService", "ListSubscribers");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->ListSubscribers(context, request));
}

StatusOr<google::cloud::channel::v1::ListEntitlementChangesResponse>
CloudChannelServiceTracingStub::ListEntitlementChanges(
    grpc::ClientContext& context,
    google::cloud::channel::v1::ListEntitlementChangesRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.channel.v1.CloudChannelService", "ListEntitlementChanges");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->ListEntitlementChanges(context, request));
}

future<StatusOr<google::longrunning::Operation>>
CloudChannelServiceTracingStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.longrunning.Operations", "GetOperation");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, internal::CurrentOptions());
  }
  auto f = child_->AsyncGetOperation(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<Status> CloudChannelServiceTracingStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.longrunning.Operations",
                                     "CancelOperation");
  {
    auto scope = opentelemetry::trace::Scope(span);
    internal::InjectTraceContext(*context, internal::CurrentOptions());
  }
  auto f = child_->AsyncCancelOperation(cq, context, request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<CloudChannelServiceStub> MakeCloudChannelServiceTracingStub(
    std::shared_ptr<CloudChannelServiceStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<CloudChannelServiceTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace channel_v1_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
