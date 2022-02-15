// Copyright 2018 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_INTERNAL_OAUTH2_GOOGLE_CREDENTIALS_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_INTERNAL_OAUTH2_GOOGLE_CREDENTIALS_H

#include "google/cloud/internal/oauth2_credentials.h"
#include "google/cloud/optional.h"
#include "google/cloud/options.h"
#include "google/cloud/version.h"
#include "absl/types/optional.h"
#include <memory>
#include <set>
#include <string>

namespace google {
namespace cloud {
namespace oauth2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * Produces a Credentials type based on the runtime environment.
 *
 * If the GOOGLE_APPLICATION_CREDENTIALS environment variable is set, the JSON
 * file it points to will be loaded and used to create a credential of the
 * specified type. Otherwise, if running on a Google-hosted environment (e.g.
 * Compute Engine), credentials for the the environment's default service
 * account will be used.
 *
 * @see https://cloud.google.com/docs/authentication/production for details
 * about Application Default %Credentials.
 */
StatusOr<std::shared_ptr<Credentials>> GoogleDefaultCredentials(
    Options const& options = {});

//@{
/**
 * @name Functions to manually create specific credential types.
 */

/// Creates an AnonymousCredentials.
std::shared_ptr<Credentials> CreateAnonymousCredentials();

/**
 * Creates an AuthorizedUserCredentials from a JSON file at the specified path.
 *
 * @note It is strongly preferred to instead use service account credentials
 * with Cloud Storage client libraries.
 */
StatusOr<std::shared_ptr<Credentials>>
CreateAuthorizedUserCredentialsFromJsonFilePath(std::string const& path);

/**
 * Creates an AuthorizedUserCredentials from a JSON string.
 *
 * @note It is strongly preferred to instead use service account credentials
 * with Cloud Storage client libraries.
 */
StatusOr<std::shared_ptr<Credentials>>
CreateAuthorizedUserCredentialsFromJsonContents(std::string const& contents,
                                                Options const& options = {});

//@{
/// @name Load service account key files.

/**
 * Creates a ServiceAccountCredentials from a JSON file at the specified path.
 *
 * These credentials use the cloud-platform OAuth 2.0 scope, defined by
 * `GoogleOAuthScopeCloudPlatform()`. To specify alternate scopes, use the
 * overloaded version of this function.
 */
StatusOr<std::shared_ptr<Credentials>>
CreateServiceAccountCredentialsFromJsonFile(std::string const& path);

/**
 * Creates a ServiceAccountCredentials from a JSON file at the specified path.
 *
 * @param path the path to the file containing service account JSON credentials.
 * @param scopes the scopes to request during the authorization grant. If
 *     omitted, the cloud-platform scope, defined by
 *     `GoogleOAuthScopeCloudPlatform()`, is used as a default.
 * @param subject for domain-wide delegation; the email address of the user for
 *     which to request delegated access. If omitted, no "subject" attribute is
 *     included in the authorization grant.
 * @param options any configuration needed for the transport channel to
 *     Google's authentication servers.
 *
 * @see https://developers.google.com/identity/protocols/googlescopes for a list
 *     of OAuth 2.0 scopes used with Google APIs.
 *
 * @see https://developers.google.com/identity/protocols/OAuth2ServiceAccount
 *     for more information about domain-wide delegation.
 */
StatusOr<std::shared_ptr<Credentials>>
CreateServiceAccountCredentialsFromJsonFile(
    std::string const& path, absl::optional<std::set<std::string>> scopes,
    absl::optional<std::string> subject, Options const& options = {});

/**
 * Produces a ServiceAccountCredentials type by trying to load the standard
 * Application Default %Credentials paths.
 *
 * If the GOOGLE_APPLICATION_CREDENTIALS environment variable is set, the JSON
 * file it points to will be loaded. Otherwise, if the gcloud utility has
 * configured an Application Default %Credentials file, that file is loaded. The
 * loaded file is used to create a ServiceAccountCredentials.
 *
 * @param options any configuration needed for the transport channel to
 *     Google's authentication servers.
 *
 * @see https://cloud.google.com/docs/authentication/production for details
 *     about Application Default %Credentials.
 */
StatusOr<std::shared_ptr<Credentials>>
CreateServiceAccountCredentialsFromDefaultPaths(Options const& options = {});

/**
 * Produces a ServiceAccountCredentials type by trying to load the standard
 * Application Default %Credentials paths.
 *
 * If the GOOGLE_APPLICATION_CREDENTIALS environment variable is set, the JSON
 * file it points to will be loaded. Otherwise, if the gcloud utility has
 * configured an Application Default %Credentials file, that file is loaded. The
 * loaded file is used to create a ServiceAccountCredentials.
 *
 * @param scopes the scopes to request during the authorization grant. If
 *     omitted, the cloud-platform scope, defined by
 *     `GoogleOAuthScopeCloudPlatform()`, is used as a default.
 * @param subject for domain-wide delegation; the email address of the user for
 *     which to request delegated access. If omitted, no "subject" attribute is
 *     included in the authorization grant.
 * @param options any configuration needed for the transport channel to
 *     Google's authentication servers.
 *
 * @see https://developers.google.com/identity/protocols/googlescopes for a list
 *     of OAuth 2.0 scopes used with Google APIs.
 *
 * @see https://cloud.google.com/docs/authentication/production for details
 *     about Application Default %Credentials.
 */
StatusOr<std::shared_ptr<Credentials>>
CreateServiceAccountCredentialsFromDefaultPaths(
    absl::optional<std::set<std::string>> scopes,
    absl::optional<std::string> subject, Options const& options = {});

/**
 * Creates a ServiceAccountCredentials from a JSON string.
 *
 * These credentials use the cloud-platform OAuth 2.0 scope, defined by
 * `GoogleOAuthScopeCloudPlatform()`. To specify an alternate set of scopes, use
 * the overloaded version of this function.
 */
StatusOr<std::shared_ptr<Credentials>>
CreateServiceAccountCredentialsFromJsonContents(std::string const& contents,
                                                Options const& options = {});

/**
 * Creates a ServiceAccountCredentials from a JSON string.
 *
 * @param contents the string containing the JSON contents of a service account
 *     credentials file.
 * @param scopes the scopes to request during the authorization grant. If
 *     omitted, the cloud-platform scope, defined by
 *     `GoogleOAuthScopeCloudPlatform()`, is used as a default.
 * @param subject for domain-wide delegation; the email address of the user for
 *     which to request delegated access. If omitted, no "subject" attribute is
 *     included in the authorization grant.
 * @param options any configuration needed for the transport channel to
 *     Google's authentication servers.
 *internal
 * @see https://developers.google.com/identity/protocols/googlescopes for a list
 *     of OAuth 2.0 scopes used with Google APIs.
 *
 * @see https://developers.google.com/identity/protocols/OAuth2ServiceAccount
 *     for more information about domain-wide delegation.
 */
StatusOr<std::shared_ptr<Credentials>>
CreateServiceAccountCredentialsFromJsonContents(
    std::string const& contents, absl::optional<std::set<std::string>> scopes,
    absl::optional<std::string> subject, Options const& options = {});

/// Creates a ComputeEngineCredentials for the VM's default service account.
std::shared_ptr<Credentials> CreateComputeEngineCredentials();

/// Creates a ComputeEngineCredentials for the VM's specified service account.
std::shared_ptr<Credentials> CreateComputeEngineCredentials(
    std::string const& service_account_email);

//@}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace oauth2_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_INTERNAL_OAUTH2_GOOGLE_CREDENTIALS_H
