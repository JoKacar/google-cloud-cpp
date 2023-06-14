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
// source: google/cloud/support/v2/comment_service.proto

#include "google/cloud/support/v2/internal/comment_connection_impl.h"
#include "google/cloud/support/v2/internal/comment_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace support_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

CommentServiceConnectionImpl::CommentServiceConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<support_v2_internal::CommentServiceStub> stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(std::move(options),
                                      CommentServiceConnection::options())) {}

StreamRange<google::cloud::support::v2::Comment>
CommentServiceConnectionImpl::ListComments(
    google::cloud::support::v2::ListCommentsRequest request) {
  request.clear_page_token();
  auto& stub = stub_;
  auto retry = std::shared_ptr<support_v2::CommentServiceRetryPolicy const>(
      retry_policy());
  auto backoff = std::shared_ptr<BackoffPolicy const>(backoff_policy());
  auto idempotency = idempotency_policy()->ListComments(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::support::v2::Comment>>(
      std::move(request),
      [stub, retry, backoff, idempotency, function_name](
          google::cloud::support::v2::ListCommentsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::cloud::support::v2::ListCommentsRequest const&
                       request) {
              return stub->ListComments(context, request);
            },
            r, function_name);
      },
      [](google::cloud::support::v2::ListCommentsResponse r) {
        std::vector<google::cloud::support::v2::Comment> result(
            r.comments().size());
        auto& messages = *r.mutable_comments();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::support::v2::Comment>
CommentServiceConnectionImpl::CreateComment(
    google::cloud::support::v2::CreateCommentRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->CreateComment(request),
      [this](grpc::ClientContext& context,
             google::cloud::support::v2::CreateCommentRequest const& request) {
        return stub_->CreateComment(context, request);
      },
      request, __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace support_v2_internal
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
