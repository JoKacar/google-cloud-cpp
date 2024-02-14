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
// source: google/cloud/datastream/v1/datastream.proto

#include "google/cloud/datastream/v1/internal/datastream_connection_impl.h"
#include "google/cloud/datastream/v1/internal/datastream_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/async_long_running_operation.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>

namespace google {
namespace cloud {
namespace datastream_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

std::unique_ptr<datastream_v1::DatastreamRetryPolicy> retry_policy(
    Options const& options) {
  return options.get<datastream_v1::DatastreamRetryPolicyOption>()->clone();
}

std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
  return options.get<datastream_v1::DatastreamBackoffPolicyOption>()->clone();
}

std::unique_ptr<datastream_v1::DatastreamConnectionIdempotencyPolicy>
idempotency_policy(Options const& options) {
  return options
      .get<datastream_v1::DatastreamConnectionIdempotencyPolicyOption>()
      ->clone();
}

std::unique_ptr<PollingPolicy> polling_policy(Options const& options) {
  return options.get<datastream_v1::DatastreamPollingPolicyOption>()->clone();
}

}  // namespace

DatastreamConnectionImpl::DatastreamConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<datastream_v1_internal::DatastreamStub> stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(std::move(options),
                                      DatastreamConnection::options())) {}

StreamRange<google::cloud::datastream::v1::ConnectionProfile>
DatastreamConnectionImpl::ListConnectionProfiles(
    google::cloud::datastream::v1::ListConnectionProfilesRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency =
      idempotency_policy(*current)->ListConnectionProfiles(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::datastream::v1::ConnectionProfile>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<datastream_v1::DatastreamRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::cloud::datastream::v1::ListConnectionProfilesRequest const&
              r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::cloud::datastream::v1::
                       ListConnectionProfilesRequest const& request) {
              return stub->ListConnectionProfiles(context, request);
            },
            r, function_name);
      },
      [](google::cloud::datastream::v1::ListConnectionProfilesResponse r) {
        std::vector<google::cloud::datastream::v1::ConnectionProfile> result(
            r.connection_profiles().size());
        auto& messages = *r.mutable_connection_profiles();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::datastream::v1::ConnectionProfile>
DatastreamConnectionImpl::GetConnectionProfile(
    google::cloud::datastream::v1::GetConnectionProfileRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetConnectionProfile(request),
      [this](grpc::ClientContext& context,
             google::cloud::datastream::v1::GetConnectionProfileRequest const&
                 request) {
        return stub_->GetConnectionProfile(context, request);
      },
      request, __func__);
}

future<StatusOr<google::cloud::datastream::v1::ConnectionProfile>>
DatastreamConnectionImpl::CreateConnectionProfile(
    google::cloud::datastream::v1::CreateConnectionProfileRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->CreateConnectionProfile(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::datastream::v1::ConnectionProfile>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::datastream::v1::CreateConnectionProfileRequest const&
              request) {
        return stub->AsyncCreateConnectionProfile(cq, std::move(context),
                                                  options, request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     Options const& options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), options,
                                       request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), options,
                                          request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::datastream::v1::ConnectionProfile>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::datastream::v1::ConnectionProfile>>
DatastreamConnectionImpl::UpdateConnectionProfile(
    google::cloud::datastream::v1::UpdateConnectionProfileRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->UpdateConnectionProfile(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::datastream::v1::ConnectionProfile>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::datastream::v1::UpdateConnectionProfileRequest const&
              request) {
        return stub->AsyncUpdateConnectionProfile(cq, std::move(context),
                                                  options, request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     Options const& options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), options,
                                       request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), options,
                                          request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::datastream::v1::ConnectionProfile>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::datastream::v1::OperationMetadata>>
DatastreamConnectionImpl::DeleteConnectionProfile(
    google::cloud::datastream::v1::DeleteConnectionProfileRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->DeleteConnectionProfile(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::datastream::v1::OperationMetadata>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::datastream::v1::DeleteConnectionProfileRequest const&
              request) {
        return stub->AsyncDeleteConnectionProfile(cq, std::move(context),
                                                  options, request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     Options const& options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), options,
                                       request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), options,
                                          request);
      },
      &google::cloud::internal::ExtractLongRunningResultMetadata<
          google::cloud::datastream::v1::OperationMetadata>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StatusOr<google::cloud::datastream::v1::DiscoverConnectionProfileResponse>
DatastreamConnectionImpl::DiscoverConnectionProfile(
    google::cloud::datastream::v1::DiscoverConnectionProfileRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DiscoverConnectionProfile(request),
      [this](
          grpc::ClientContext& context,
          google::cloud::datastream::v1::DiscoverConnectionProfileRequest const&
              request) {
        return stub_->DiscoverConnectionProfile(context, request);
      },
      request, __func__);
}

StreamRange<google::cloud::datastream::v1::Stream>
DatastreamConnectionImpl::ListStreams(
    google::cloud::datastream::v1::ListStreamsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListStreams(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::datastream::v1::Stream>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<datastream_v1::DatastreamRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::cloud::datastream::v1::ListStreamsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::cloud::datastream::v1::ListStreamsRequest const&
                       request) { return stub->ListStreams(context, request); },
            r, function_name);
      },
      [](google::cloud::datastream::v1::ListStreamsResponse r) {
        std::vector<google::cloud::datastream::v1::Stream> result(
            r.streams().size());
        auto& messages = *r.mutable_streams();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::datastream::v1::Stream>
DatastreamConnectionImpl::GetStream(
    google::cloud::datastream::v1::GetStreamRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetStream(request),
      [this](grpc::ClientContext& context,
             google::cloud::datastream::v1::GetStreamRequest const& request) {
        return stub_->GetStream(context, request);
      },
      request, __func__);
}

future<StatusOr<google::cloud::datastream::v1::Stream>>
DatastreamConnectionImpl::CreateStream(
    google::cloud::datastream::v1::CreateStreamRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->CreateStream(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::datastream::v1::Stream>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::datastream::v1::CreateStreamRequest const& request) {
        return stub->AsyncCreateStream(cq, std::move(context), options,
                                       request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     Options const& options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), options,
                                       request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), options,
                                          request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::datastream::v1::Stream>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::datastream::v1::Stream>>
DatastreamConnectionImpl::UpdateStream(
    google::cloud::datastream::v1::UpdateStreamRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->UpdateStream(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::datastream::v1::Stream>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::datastream::v1::UpdateStreamRequest const& request) {
        return stub->AsyncUpdateStream(cq, std::move(context), options,
                                       request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     Options const& options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), options,
                                       request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), options,
                                          request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::datastream::v1::Stream>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::datastream::v1::OperationMetadata>>
DatastreamConnectionImpl::DeleteStream(
    google::cloud::datastream::v1::DeleteStreamRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->DeleteStream(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::datastream::v1::OperationMetadata>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::datastream::v1::DeleteStreamRequest const& request) {
        return stub->AsyncDeleteStream(cq, std::move(context), options,
                                       request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     Options const& options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), options,
                                       request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), options,
                                          request);
      },
      &google::cloud::internal::ExtractLongRunningResultMetadata<
          google::cloud::datastream::v1::OperationMetadata>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StatusOr<google::cloud::datastream::v1::StreamObject>
DatastreamConnectionImpl::GetStreamObject(
    google::cloud::datastream::v1::GetStreamObjectRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetStreamObject(request),
      [this](grpc::ClientContext& context,
             google::cloud::datastream::v1::GetStreamObjectRequest const&
                 request) { return stub_->GetStreamObject(context, request); },
      request, __func__);
}

StatusOr<google::cloud::datastream::v1::StreamObject>
DatastreamConnectionImpl::LookupStreamObject(
    google::cloud::datastream::v1::LookupStreamObjectRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->LookupStreamObject(request),
      [this](grpc::ClientContext& context,
             google::cloud::datastream::v1::LookupStreamObjectRequest const&
                 request) {
        return stub_->LookupStreamObject(context, request);
      },
      request, __func__);
}

StreamRange<google::cloud::datastream::v1::StreamObject>
DatastreamConnectionImpl::ListStreamObjects(
    google::cloud::datastream::v1::ListStreamObjectsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListStreamObjects(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::datastream::v1::StreamObject>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<datastream_v1::DatastreamRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::cloud::datastream::v1::ListStreamObjectsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](
                grpc::ClientContext& context,
                google::cloud::datastream::v1::ListStreamObjectsRequest const&
                    request) {
              return stub->ListStreamObjects(context, request);
            },
            r, function_name);
      },
      [](google::cloud::datastream::v1::ListStreamObjectsResponse r) {
        std::vector<google::cloud::datastream::v1::StreamObject> result(
            r.stream_objects().size());
        auto& messages = *r.mutable_stream_objects();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::datastream::v1::StartBackfillJobResponse>
DatastreamConnectionImpl::StartBackfillJob(
    google::cloud::datastream::v1::StartBackfillJobRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->StartBackfillJob(request),
      [this](grpc::ClientContext& context,
             google::cloud::datastream::v1::StartBackfillJobRequest const&
                 request) { return stub_->StartBackfillJob(context, request); },
      request, __func__);
}

StatusOr<google::cloud::datastream::v1::StopBackfillJobResponse>
DatastreamConnectionImpl::StopBackfillJob(
    google::cloud::datastream::v1::StopBackfillJobRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->StopBackfillJob(request),
      [this](grpc::ClientContext& context,
             google::cloud::datastream::v1::StopBackfillJobRequest const&
                 request) { return stub_->StopBackfillJob(context, request); },
      request, __func__);
}

StreamRange<std::string> DatastreamConnectionImpl::FetchStaticIps(
    google::cloud::datastream::v1::FetchStaticIpsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->FetchStaticIps(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<StreamRange<std::string>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<datastream_v1::DatastreamRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::cloud::datastream::v1::FetchStaticIpsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::cloud::datastream::v1::FetchStaticIpsRequest const&
                       request) {
              return stub->FetchStaticIps(context, request);
            },
            r, function_name);
      },
      [](google::cloud::datastream::v1::FetchStaticIpsResponse r) {
        std::vector<std::string> result(r.static_ips().size());
        auto& messages = *r.mutable_static_ips();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

future<StatusOr<google::cloud::datastream::v1::PrivateConnection>>
DatastreamConnectionImpl::CreatePrivateConnection(
    google::cloud::datastream::v1::CreatePrivateConnectionRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->CreatePrivateConnection(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::datastream::v1::PrivateConnection>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::datastream::v1::CreatePrivateConnectionRequest const&
              request) {
        return stub->AsyncCreatePrivateConnection(cq, std::move(context),
                                                  options, request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     Options const& options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), options,
                                       request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), options,
                                          request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::datastream::v1::PrivateConnection>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StatusOr<google::cloud::datastream::v1::PrivateConnection>
DatastreamConnectionImpl::GetPrivateConnection(
    google::cloud::datastream::v1::GetPrivateConnectionRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetPrivateConnection(request),
      [this](grpc::ClientContext& context,
             google::cloud::datastream::v1::GetPrivateConnectionRequest const&
                 request) {
        return stub_->GetPrivateConnection(context, request);
      },
      request, __func__);
}

StreamRange<google::cloud::datastream::v1::PrivateConnection>
DatastreamConnectionImpl::ListPrivateConnections(
    google::cloud::datastream::v1::ListPrivateConnectionsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency =
      idempotency_policy(*current)->ListPrivateConnections(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::datastream::v1::PrivateConnection>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<datastream_v1::DatastreamRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::cloud::datastream::v1::ListPrivateConnectionsRequest const&
              r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::cloud::datastream::v1::
                       ListPrivateConnectionsRequest const& request) {
              return stub->ListPrivateConnections(context, request);
            },
            r, function_name);
      },
      [](google::cloud::datastream::v1::ListPrivateConnectionsResponse r) {
        std::vector<google::cloud::datastream::v1::PrivateConnection> result(
            r.private_connections().size());
        auto& messages = *r.mutable_private_connections();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

future<StatusOr<google::cloud::datastream::v1::OperationMetadata>>
DatastreamConnectionImpl::DeletePrivateConnection(
    google::cloud::datastream::v1::DeletePrivateConnectionRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->DeletePrivateConnection(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::datastream::v1::OperationMetadata>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::datastream::v1::DeletePrivateConnectionRequest const&
              request) {
        return stub->AsyncDeletePrivateConnection(cq, std::move(context),
                                                  options, request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     Options const& options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), options,
                                       request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), options,
                                          request);
      },
      &google::cloud::internal::ExtractLongRunningResultMetadata<
          google::cloud::datastream::v1::OperationMetadata>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::datastream::v1::Route>>
DatastreamConnectionImpl::CreateRoute(
    google::cloud::datastream::v1::CreateRouteRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->CreateRoute(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::datastream::v1::Route>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::datastream::v1::CreateRouteRequest const& request) {
        return stub->AsyncCreateRoute(cq, std::move(context), options, request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     Options const& options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), options,
                                       request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), options,
                                          request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::datastream::v1::Route>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StatusOr<google::cloud::datastream::v1::Route>
DatastreamConnectionImpl::GetRoute(
    google::cloud::datastream::v1::GetRouteRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetRoute(request),
      [this](grpc::ClientContext& context,
             google::cloud::datastream::v1::GetRouteRequest const& request) {
        return stub_->GetRoute(context, request);
      },
      request, __func__);
}

StreamRange<google::cloud::datastream::v1::Route>
DatastreamConnectionImpl::ListRoutes(
    google::cloud::datastream::v1::ListRoutesRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListRoutes(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::datastream::v1::Route>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<datastream_v1::DatastreamRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::cloud::datastream::v1::ListRoutesRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::cloud::datastream::v1::ListRoutesRequest const&
                       request) { return stub->ListRoutes(context, request); },
            r, function_name);
      },
      [](google::cloud::datastream::v1::ListRoutesResponse r) {
        std::vector<google::cloud::datastream::v1::Route> result(
            r.routes().size());
        auto& messages = *r.mutable_routes();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

future<StatusOr<google::cloud::datastream::v1::OperationMetadata>>
DatastreamConnectionImpl::DeleteRoute(
    google::cloud::datastream::v1::DeleteRouteRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->DeleteRoute(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::datastream::v1::OperationMetadata>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::cloud::datastream::v1::DeleteRouteRequest const& request) {
        return stub->AsyncDeleteRoute(cq, std::move(context), options, request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     Options const& options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), options,
                                       request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context, Options const& options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), options,
                                          request);
      },
      &google::cloud::internal::ExtractLongRunningResultMetadata<
          google::cloud::datastream::v1::OperationMetadata>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace datastream_v1_internal
}  // namespace cloud
}  // namespace google
