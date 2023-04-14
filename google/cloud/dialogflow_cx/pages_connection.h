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
// source: google/cloud/dialogflow/cx/v3/page.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_PAGES_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_PAGES_CONNECTION_H

#include "google/cloud/dialogflow_cx/internal/pages_retry_traits.h"
#include "google/cloud/dialogflow_cx/pages_connection_idempotency_policy.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/cloud/dialogflow/cx/v3/page.grpc.pb.h>
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace dialogflow_cx {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using PagesRetryPolicy = ::google::cloud::internal::TraitBasedRetryPolicy<
    dialogflow_cx_internal::PagesRetryTraits>;

using PagesLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        dialogflow_cx_internal::PagesRetryTraits>;

using PagesLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        dialogflow_cx_internal::PagesRetryTraits>;

/**
 * The `PagesConnection` object for `PagesClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `PagesClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `PagesClient`.
 *
 * To create a concrete instance, see `MakePagesConnection()`.
 *
 * For mocking, see `dialogflow_cx_mocks::MockPagesConnection`.
 */
class PagesConnection {
 public:
  virtual ~PagesConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StreamRange<google::cloud::dialogflow::cx::v3::Page> ListPages(
      google::cloud::dialogflow::cx::v3::ListPagesRequest request);

  virtual StatusOr<google::cloud::dialogflow::cx::v3::Page> GetPage(
      google::cloud::dialogflow::cx::v3::GetPageRequest const& request);

  virtual StatusOr<google::cloud::dialogflow::cx::v3::Page> CreatePage(
      google::cloud::dialogflow::cx::v3::CreatePageRequest const& request);

  virtual StatusOr<google::cloud::dialogflow::cx::v3::Page> UpdatePage(
      google::cloud::dialogflow::cx::v3::UpdatePageRequest const& request);

  virtual Status DeletePage(
      google::cloud::dialogflow::cx::v3::DeletePageRequest const& request);
};

/**
 * A factory function to construct an object of type `PagesConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of PagesClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `PagesConnection`. Expected options are any of the types in
 * the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::dialogflow_cx::PagesPolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param location Sets the prefix for the default `EndpointOption` value.
 * @param options (optional) Configure the `PagesConnection` created by
 * this function.
 */
std::shared_ptr<PagesConnection> MakePagesConnection(
    std::string const& location, Options options = {});

/**
 * A backwards-compatible version of the previous factory function.  Unless
 * the service also offers a global endpoint, the default value of the
 * `EndpointOption` may be useless, in which case it must be overridden.
 *
 * @deprecated Please use the `location` overload instead.
 */
std::shared_ptr<PagesConnection> MakePagesConnection(Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_cx
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_PAGES_CONNECTION_H
