// Copyright 2024 Google LLC
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
// source: google/cloud/bigquery/routines/v2/routines.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_ROUTINES_V2_INTERNAL_ROUTINES_REST_METADATA_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_ROUTINES_V2_INTERNAL_ROUTINES_REST_METADATA_DECORATOR_H

#include "google/cloud/bigquery/routines/v2/internal/routines_rest_stub.h"
#include "google/cloud/future.h"
#include "google/cloud/rest_options.h"
#include "google/cloud/version.h"
#include <google/cloud/bigquery/routines/v2/routines.pb.h>
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace bigquery_routines_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class RoutinesRestMetadata : public RoutinesRestStub {
 public:
  ~RoutinesRestMetadata() override = default;
  explicit RoutinesRestMetadata(std::shared_ptr<RoutinesRestStub> child,
                                std::string api_client_header = "");

  Status DeleteRoutine(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::bigquery::routines::v2::DeleteRoutineRequest const&
          request) override;

  StatusOr<google::cloud::cpp::bigquery::v2::Routine> GetRoutine(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::bigquery::routines::v2::GetRoutineRequest const&
          request) override;

  StatusOr<google::cloud::cpp::bigquery::v2::Routine> InsertRoutine(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::bigquery::routines::v2::InsertRoutineRequest const&
          request) override;

  StatusOr<google::cloud::cpp::bigquery::v2::ListRoutinesResponse> ListRoutines(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::bigquery::routines::v2::ListRoutinesRequest const&
          request) override;

  StatusOr<google::cloud::cpp::bigquery::v2::Routine> UpdateRoutine(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::bigquery::routines::v2::UpdateRoutineRequest const&
          request) override;

 private:
  void SetMetadata(rest_internal::RestContext& rest_context,
                   Options const& options,
                   std::vector<std::string> const& params = {});

  std::shared_ptr<RoutinesRestStub> child_;
  std::string api_client_header_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigquery_routines_v2_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_ROUTINES_V2_INTERNAL_ROUTINES_REST_METADATA_DECORATOR_H
