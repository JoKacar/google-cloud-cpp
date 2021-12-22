// Copyright 2020 Google LLC
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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_PUBSUB_CONNECTION_OPTIONS_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_PUBSUB_CONNECTION_OPTIONS_H

#include "google/cloud/pubsub/version.h"
#include "google/cloud/connection_options.h"
#include <grpcpp/grpcpp.h>
#include <string>

namespace google {
namespace cloud {
namespace pubsub {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/// The Cloud Pub/Sub connection traits.
struct ConnectionOptionsTraits {
  static std::string default_endpoint();
  static std::string user_agent_prefix();
  static int default_num_channels();
};

/// Configure a connection for Cloud Pub/Sub services.
using ConnectionOptions =
    ::google::cloud::ConnectionOptions<ConnectionOptionsTraits>;

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace pubsub
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_PUBSUB_CONNECTION_OPTIONS_H
