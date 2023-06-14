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
// source: google/devtools/cloudtrace/v2/tracing.proto

#include "google/cloud/trace/v2/trace_connection.h"
#include "google/cloud/trace/v2/internal/trace_connection_impl.h"
#include "google/cloud/trace/v2/internal/trace_option_defaults.h"
#include "google/cloud/trace/v2/internal/trace_stub_factory.h"
#include "google/cloud/trace/v2/internal/trace_tracing_connection.h"
#include "google/cloud/trace/v2/trace_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace trace_v2 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

TraceServiceConnection::~TraceServiceConnection() = default;

Status TraceServiceConnection::BatchWriteSpans(
    google::devtools::cloudtrace::v2::BatchWriteSpansRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::devtools::cloudtrace::v2::Span>
TraceServiceConnection::CreateSpan(
    google::devtools::cloudtrace::v2::Span const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

std::shared_ptr<TraceServiceConnection> MakeTraceServiceConnection(
    Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 UnifiedCredentialsOptionList,
                                 TraceServicePolicyOptionList>(options,
                                                               __func__);
  options = trace_v2_internal::TraceServiceDefaultOptions(std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto stub = trace_v2_internal::CreateDefaultTraceServiceStub(background->cq(),
                                                               options);
  return trace_v2_internal::MakeTraceServiceTracingConnection(
      std::make_shared<trace_v2_internal::TraceServiceConnectionImpl>(
          std::move(background), std::move(stub), std::move(options)));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace trace_v2
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"
