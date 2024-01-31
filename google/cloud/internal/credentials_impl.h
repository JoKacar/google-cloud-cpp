// Copyright 2021 Google LLC
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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_INTERNAL_CREDENTIALS_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_INTERNAL_CREDENTIALS_IMPL_H

#include "google/cloud/access_token.h"
#include "google/cloud/credentials.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include "absl/types/optional.h"
#include <chrono>
#include <functional>
#include <memory>
#include <string>
#include <vector>

namespace google {
namespace cloud {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace internal {

class ErrorCredentialsConfig;
class InsecureCredentialsConfig;
class GoogleDefaultCredentialsConfig;
class AccessTokenConfig;
class ImpersonateServiceAccountConfig;
class ServiceAccountConfig;
class ExternalAccountConfig;

class CredentialsVisitor {
 public:
  virtual ~CredentialsVisitor() = default;
  virtual void visit(ErrorCredentialsConfig const&) = 0;
  virtual void visit(InsecureCredentialsConfig const&) = 0;
  virtual void visit(GoogleDefaultCredentialsConfig const&) = 0;
  virtual void visit(AccessTokenConfig const&) = 0;
  virtual void visit(ImpersonateServiceAccountConfig const&) = 0;
  virtual void visit(ServiceAccountConfig const&) = 0;
  virtual void visit(ExternalAccountConfig const&) = 0;

  static void dispatch(Credentials const& credentials,
                       CredentialsVisitor& visitor);
};

class ErrorCredentialsConfig : public Credentials {
 public:
  ErrorCredentialsConfig(Status error_status, Options opts)
      : error_status_(std::move(error_status)), options_(std::move(opts)) {}
  ~ErrorCredentialsConfig() override = default;
  StatusOr<std::string> universe_domain() const override {
    return error_status_;
  }

  Status const& error_status() const { return error_status_; }
  Options const& options() const { return options_; }

 private:
  void dispatch(CredentialsVisitor& v) const override { v.visit(*this); }
  void set_universe_domain(StatusOr<std::string>) override {}

  Status error_status_;
  Options options_;
};

inline std::shared_ptr<Credentials> MakeErrorCredentials(Status error_status,
                                                         Options opts = {}) {
  return std::make_shared<internal::ErrorCredentialsConfig>(
      std::move(error_status), std::move(opts));
}

class InsecureCredentialsConfig : public Credentials {
 public:
  explicit InsecureCredentialsConfig(Options opts);
  ~InsecureCredentialsConfig() override = default;
  StatusOr<std::string> universe_domain() const override;

  Options const& options() const { return options_; }

 private:
  void dispatch(CredentialsVisitor& v) const override { v.visit(*this); }
  void set_universe_domain(StatusOr<std::string> universe_domain) override {
    universe_domain_ = std::move(universe_domain);
  }

  Options options_;
  StatusOr<std::string> universe_domain_;
};

class GoogleDefaultCredentialsConfig : public Credentials {
 public:
  explicit GoogleDefaultCredentialsConfig(Options opts);
  ~GoogleDefaultCredentialsConfig() override = default;
  StatusOr<std::string> universe_domain() const override;
  Options const& options() const { return options_; }

 private:
  void dispatch(CredentialsVisitor& v) const override { v.visit(*this); }
  void set_universe_domain(StatusOr<std::string> universe_domain) override {
    universe_domain_ = std::move(universe_domain);
  }

  Options options_;
  StatusOr<std::string> universe_domain_;
};

class AccessTokenConfig : public Credentials {
 public:
  AccessTokenConfig(std::string token,
                    std::chrono::system_clock::time_point expiration,
                    Options opts);
  ~AccessTokenConfig() override = default;
  StatusOr<std::string> universe_domain() const override;
  AccessToken const& access_token() const { return access_token_; }
  Options const& options() const { return options_; }

 private:
  void dispatch(CredentialsVisitor& v) const override { v.visit(*this); }
  void set_universe_domain(StatusOr<std::string> universe_domain) override {
    universe_domain_ = std::move(universe_domain);
  }

  AccessToken access_token_;
  Options options_;
  StatusOr<std::string> universe_domain_;
};

class ImpersonateServiceAccountConfig : public Credentials {
 public:
  ImpersonateServiceAccountConfig(std::shared_ptr<Credentials> base_credentials,
                                  std::string target_service_account,
                                  Options opts);
  StatusOr<std::string> universe_domain() const override;
  std::shared_ptr<Credentials> base_credentials() const {
    return base_credentials_;
  }
  std::string const& target_service_account() const {
    return target_service_account_;
  }
  std::chrono::seconds lifetime() const;
  std::vector<std::string> const& scopes() const;
  std::vector<std::string> const& delegates() const;
  Options const& options() const { return options_; }

 private:
  void dispatch(CredentialsVisitor& v) const override { v.visit(*this); }
  void set_universe_domain(StatusOr<std::string> universe_domain) override {
    universe_domain_ = std::move(universe_domain);
  }

  std::shared_ptr<Credentials> base_credentials_;
  std::string target_service_account_;
  Options options_;
  StatusOr<std::string> universe_domain_;
};

class ServiceAccountConfig : public Credentials {
 public:
  ServiceAccountConfig(std::string json_object, Options opts);
  StatusOr<std::string> universe_domain() const override;
  std::string const& json_object() const { return json_object_; }
  Options const& options() const { return options_; }

 private:
  void dispatch(CredentialsVisitor& v) const override { v.visit(*this); }
  void set_universe_domain(StatusOr<std::string> universe_domain) override {
    universe_domain_ = std::move(universe_domain);
  }

  std::string json_object_;
  Options options_;
  StatusOr<std::string> universe_domain_;
};

class ExternalAccountConfig : public Credentials {
 public:
  ExternalAccountConfig(std::string json_object, Options options);
  StatusOr<std::string> universe_domain() const override;
  std::string const& json_object() const { return json_object_; }
  Options const& options() const { return options_; }

 private:
  void dispatch(CredentialsVisitor& v) const override { v.visit(*this); }
  void set_universe_domain(StatusOr<std::string> universe_domain) override {
    universe_domain_ = std::move(universe_domain);
  }

  std::string json_object_;
  Options options_;
  StatusOr<std::string> universe_domain_;
};

/// A helper function to initialize Auth options.
Options PopulateAuthOptions(Options options);

}  // namespace internal
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_INTERNAL_CREDENTIALS_IMPL_H
