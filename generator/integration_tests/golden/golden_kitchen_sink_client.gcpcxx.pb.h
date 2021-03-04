// Copyright 2021 Google LLC
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
// source: generator/integration_tests/test.proto
#ifndef GOOGLE_CLOUD_CPP_GENERATOR_INTEGRATION_TESTS_GOLDEN_GOLDEN_KITCHEN_SINK_CLIENT_GCPCXX_PB_H
#define GOOGLE_CLOUD_CPP_GENERATOR_INTEGRATION_TESTS_GOLDEN_GOLDEN_KITCHEN_SINK_CLIENT_GCPCXX_PB_H

#include "generator/integration_tests/golden/golden_kitchen_sink_connection.gcpcxx.pb.h"
#include "google/cloud/future.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <map>
#include <memory>

namespace google {
namespace cloud {
namespace golden {
inline namespace GOOGLE_CLOUD_CPP_NS {

/**
 * A service account is a special type of Google account that belongs to your
 * application or a virtual machine (VM), instead of to an individual end user.
 * Your application assumes the identity of the service account to call Google
 * APIs, so that the users aren't directly involved.
 *
 * Service account credentials are used to temporarily assume the identity
 * of the service account. Supported credential types include OAuth 2.0 access
 * tokens, OpenID Connect ID tokens, self-signed JSON Web Tokens (JWTs), and
 * more.
 */
class GoldenKitchenSinkClient {
 public:
  explicit GoldenKitchenSinkClient(std::shared_ptr<GoldenKitchenSinkConnection> connection);
  ~GoldenKitchenSinkClient();

  //@{
  // @name Copy and move support
  GoldenKitchenSinkClient(GoldenKitchenSinkClient const&) = default;
  GoldenKitchenSinkClient& operator=(GoldenKitchenSinkClient const&) = default;
  GoldenKitchenSinkClient(GoldenKitchenSinkClient&&) noexcept = default;
  GoldenKitchenSinkClient& operator=(GoldenKitchenSinkClient&&) noexcept = default;
  //@}

  //@{
  // @name Equality
  friend bool operator==(GoldenKitchenSinkClient const& a, GoldenKitchenSinkClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(GoldenKitchenSinkClient const& a, GoldenKitchenSinkClient const& b) {
    return !(a == b);
  }
  //@}

  /**
   * Generates an OAuth 2.0 access token for a service account.
   *
   * @param name  Required. The resource name of the service account for which the credentials
   *  are requested, in the following format:
   *  `projects/-/serviceAccounts/{ACCOUNT_EMAIL_OR_UNIQUEID}`. The `-` wildcard
   *  character is required; replacing it with a project ID is invalid.
   * @param delegates  The sequence of service accounts in a delegation chain. Each service
   *  account must be granted the `roles/iam.serviceAccountTokenCreator` role
   *  on its next service account in the chain. The last service account in the
   *  chain must be granted the `roles/iam.serviceAccountTokenCreator` role
   *  on the service account that is specified in the `name` field of the
   *  request.
   *  The delegates must have the following format:
   *  `projects/-/serviceAccounts/{ACCOUNT_EMAIL_OR_UNIQUEID}`. The `-` wildcard
   *  character is required; replacing it with a project ID is invalid.
   * @param scope  Required. Code to identify the scopes to be included in the OAuth 2.0 access token.
   *  See https://developers.google.com/identity/protocols/googlescopes for more
   *  information.
   *  At least one value required.
   * @param lifetime  The desired lifetime duration of the access token in seconds.
   *  Must be set to a value less than or equal to 3600 (1 hour). If a value is
   *  not specified, the token's lifetime will be set to a default value of one
   *  hour.
   * @return [::google::test::admin::database::v1::GenerateAccessTokenResponse](https://github.com/googleapis/googleapis/blob/59f97e6044a1275f83427ab7962a154c00d915b5/generator/integration_tests/test.proto#L847)
   */
  StatusOr<::google::test::admin::database::v1::GenerateAccessTokenResponse>
  GenerateAccessToken(std::string const& name, std::vector<std::string> const& delegates, std::vector<std::string> const& scope, ::google::protobuf::Duration const& lifetime);

  /**
   * Generates an OpenID Connect ID token for a service account.
   *
   * @param name  Required. The resource name of the service account for which the credentials
   *  are requested, in the following format:
   *  `projects/-/serviceAccounts/{ACCOUNT_EMAIL_OR_UNIQUEID}`. The `-` wildcard
   *  character is required; replacing it with a project ID is invalid.
   * @param delegates  The sequence of service accounts in a delegation chain. Each service
   *  account must be granted the `roles/iam.serviceAccountTokenCreator` role
   *  on its next service account in the chain. The last service account in the
   *  chain must be granted the `roles/iam.serviceAccountTokenCreator` role
   *  on the service account that is specified in the `name` field of the
   *  request.
   *  The delegates must have the following format:
   *  `projects/-/serviceAccounts/{ACCOUNT_EMAIL_OR_UNIQUEID}`. The `-` wildcard
   *  character is required; replacing it with a project ID is invalid.
   * @param audience  Required. The audience for the token, such as the API or account that this token
   *  grants access to.
   * @param include_email  Include the service account email in the token. If set to `true`, the
   *  token will contain `email` and `email_verified` claims.
   * @return [::google::test::admin::database::v1::GenerateIdTokenResponse](https://github.com/googleapis/googleapis/blob/59f97e6044a1275f83427ab7962a154c00d915b5/generator/integration_tests/test.proto#L889)
   */
  StatusOr<::google::test::admin::database::v1::GenerateIdTokenResponse>
  GenerateIdToken(std::string const& name, std::vector<std::string> const& delegates, std::string const& audience, bool include_email);

  /**
   * Writes log entries to Logging. This API method is the
   * only way to send log entries to Logging. This method
   * is used, directly or indirectly, by the Logging agent
   * (fluentd) and all logging libraries configured to use Logging.
   * A single request may contain log entries for a maximum of 1000
   * different resources (projects, organizations, billing accounts or
   * folders)
   *
   * @param log_name  Optional. A default log resource name that is assigned to all log entries
   *  in `entries` that do not specify a value for `log_name`:
   *      "projects/[PROJECT_ID]/logs/[LOG_ID]"
   *      "organizations/[ORGANIZATION_ID]/logs/[LOG_ID]"
   *      "billingAccounts/[BILLING_ACCOUNT_ID]/logs/[LOG_ID]"
   *      "folders/[FOLDER_ID]/logs/[LOG_ID]"
   *  `[LOG_ID]` must be URL-encoded. For example:
   *      "projects/my-project-id/logs/syslog"
   *      "organizations/1234567890/logs/cloudresourcemanager.googleapis.com%2Factivity"
   *  The permission `logging.logEntries.create` is needed on each project,
   *  organization, billing account, or folder that is receiving new log
   *  entries, whether the resource is specified in `logName` or in an
   *  individual log entry. $Test delimiter.
   * @param labels  Optional. Default labels that are added to the `labels` field of all log
   *  entries in `entries`. If a log entry already has a label with the same key
   *  as a label in this parameter, then the log entry's label is not changed.
   *  See [LogEntry][google.logging.v2.LogEntry]. Test delimiter$
   * @return [::google::test::admin::database::v1::WriteLogEntriesResponse](https://github.com/googleapis/googleapis/blob/59f97e6044a1275f83427ab7962a154c00d915b5/generator/integration_tests/test.proto#L928)
   */
  StatusOr<::google::test::admin::database::v1::WriteLogEntriesResponse>
  WriteLogEntries(std::string const& log_name, std::map<std::string, std::string> const& labels);

  /**
   * Lists the logs in projects, organizations, folders, or billing accounts.
   * Only logs that have entries are listed.
   *
   * @param parent  Required. The resource name that owns the logs:
   *      "projects/[PROJECT_ID]"
   *      "organizations/[ORGANIZATION_ID]"
   *      "billingAccounts/[BILLING_ACCOUNT_ID]"
   *      "folders/[FOLDER_ID]"
   */
  StreamRange<std::string>
  ListLogs(std::string const& parent);

  /**
   * Streaming read of log entries as they are ingested. Until the stream is
   * terminated, it will continue reading logs.
   *
   * @param resource_names  Required. Name of a parent resource from which to retrieve log entries:
   *      "projects/[PROJECT_ID]"
   *      "organizations/[ORGANIZATION_ID]"
   *      "billingAccounts/[BILLING_ACCOUNT_ID]"
   *      "folders/[FOLDER_ID]"
   *  May alternatively be one or more views:
   *      "projects/[PROJECT_ID]/locations/[LOCATION_ID]/buckets/[BUCKET_ID]/views/[VIEW_ID]"
   *      "organization/[ORGANIZATION_ID]/locations/[LOCATION_ID]/buckets/[BUCKET_ID]/views/[VIEW_ID]"
   *      "billingAccounts/[BILLING_ACCOUNT_ID]/locations/[LOCATION_ID]/buckets/[BUCKET_ID]/views/[VIEW_ID]"
   *      "folders/[FOLDER_ID]/locations/[LOCATION_ID]/buckets/[BUCKET_ID]/views/[VIEW_ID]"
   * @return [::google::test::admin::database::v1::TailLogEntriesResponse](https://github.com/googleapis/googleapis/blob/59f97e6044a1275f83427ab7962a154c00d915b5/generator/integration_tests/test.proto#L1189)
   */
  StreamRange<::google::test::admin::database::v1::TailLogEntriesResponse>
  TailLogEntries(std::vector<std::string> const& resource_names);

  /**
   * Generates an OAuth 2.0 access token for a service account.
   *
   * @param request [::google::test::admin::database::v1::GenerateAccessTokenRequest](https://github.com/googleapis/googleapis/blob/59f97e6044a1275f83427ab7962a154c00d915b5/generator/integration_tests/test.proto#L810)
   * @return [::google::test::admin::database::v1::GenerateAccessTokenResponse](https://github.com/googleapis/googleapis/blob/59f97e6044a1275f83427ab7962a154c00d915b5/generator/integration_tests/test.proto#L847)
   */
  StatusOr<::google::test::admin::database::v1::GenerateAccessTokenResponse>
  GenerateAccessToken(::google::test::admin::database::v1::GenerateAccessTokenRequest const& request);

  /**
   * Generates an OpenID Connect ID token for a service account.
   *
   * @param request [::google::test::admin::database::v1::GenerateIdTokenRequest](https://github.com/googleapis/googleapis/blob/59f97e6044a1275f83427ab7962a154c00d915b5/generator/integration_tests/test.proto#L856)
   * @return [::google::test::admin::database::v1::GenerateIdTokenResponse](https://github.com/googleapis/googleapis/blob/59f97e6044a1275f83427ab7962a154c00d915b5/generator/integration_tests/test.proto#L889)
   */
  StatusOr<::google::test::admin::database::v1::GenerateIdTokenResponse>
  GenerateIdToken(::google::test::admin::database::v1::GenerateIdTokenRequest const& request);

  /**
   * Writes log entries to Logging. This API method is the
   * only way to send log entries to Logging. This method
   * is used, directly or indirectly, by the Logging agent
   * (fluentd) and all logging libraries configured to use Logging.
   * A single request may contain log entries for a maximum of 1000
   * different resources (projects, organizations, billing accounts or
   * folders)
   *
   * @param request [::google::test::admin::database::v1::WriteLogEntriesRequest](https://github.com/googleapis/googleapis/blob/59f97e6044a1275f83427ab7962a154c00d915b5/generator/integration_tests/test.proto#L895)
   * @return [::google::test::admin::database::v1::WriteLogEntriesResponse](https://github.com/googleapis/googleapis/blob/59f97e6044a1275f83427ab7962a154c00d915b5/generator/integration_tests/test.proto#L928)
   */
  StatusOr<::google::test::admin::database::v1::WriteLogEntriesResponse>
  WriteLogEntries(::google::test::admin::database::v1::WriteLogEntriesRequest const& request);

  /**
   * Lists the logs in projects, organizations, folders, or billing accounts.
   * Only logs that have entries are listed.
   *
   * @param request [::google::test::admin::database::v1::ListLogsRequest](https://github.com/googleapis/googleapis/blob/59f97e6044a1275f83427ab7962a154c00d915b5/generator/integration_tests/test.proto#L931)
   */
  StreamRange<std::string>
  ListLogs(::google::test::admin::database::v1::ListLogsRequest request);

  /**
   * Streaming read of log entries as they are ingested. Until the stream is
   * terminated, it will continue reading logs.
   *
   * @param request [::google::test::admin::database::v1::TailLogEntriesRequest](https://github.com/googleapis/googleapis/blob/59f97e6044a1275f83427ab7962a154c00d915b5/generator/integration_tests/test.proto#L1157)
   * @return [::google::test::admin::database::v1::TailLogEntriesResponse](https://github.com/googleapis/googleapis/blob/59f97e6044a1275f83427ab7962a154c00d915b5/generator/integration_tests/test.proto#L1189)
   */
  StreamRange<::google::test::admin::database::v1::TailLogEntriesResponse>
  TailLogEntries(::google::test::admin::database::v1::TailLogEntriesRequest request);

 private:
  std::shared_ptr<GoldenKitchenSinkConnection> connection_;
};

}  // namespace GOOGLE_CLOUD_CPP_NS
}  // namespace golden
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GENERATOR_INTEGRATION_TESTS_GOLDEN_GOLDEN_KITCHEN_SINK_CLIENT_GCPCXX_PB_H
