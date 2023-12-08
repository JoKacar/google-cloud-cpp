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
// source: google/cloud/talent/v4/job_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TALENT_V4_JOB_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TALENT_V4_JOB_CLIENT_H

#include "google/cloud/talent/v4/job_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <map>
#include <memory>

namespace google {
namespace cloud {
namespace talent_v4 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// A service handles job management, including job CRUD, enumeration and
/// search.
///
/// @par Equality
///
/// Instances of this class created via copy-construction or copy-assignment
/// always compare equal. Instances created with equal
/// `std::shared_ptr<*Connection>` objects compare equal. Objects that compare
/// equal share the same underlying resources.
///
/// @par Performance
///
/// Creating a new instance of this class is a relatively expensive operation,
/// new objects establish new connections to the service. In contrast,
/// copy-construction, move-construction, and the corresponding assignment
/// operations are relatively efficient as the copies share all underlying
/// resources.
///
/// @par Thread Safety
///
/// Concurrent access to different instances of this class, even if they compare
/// equal, is guaranteed to work. Two or more threads operating on the same
/// instance of this class is not guaranteed to work. Since copy-construction
/// and move-construction is a relatively efficient operation, consider using
/// such a copy when using this class from multiple threads.
///
class JobServiceClient {
 public:
  explicit JobServiceClient(std::shared_ptr<JobServiceConnection> connection,
                            Options opts = {});
  ~JobServiceClient();

  ///@{
  /// @name Copy and move support
  JobServiceClient(JobServiceClient const&) = default;
  JobServiceClient& operator=(JobServiceClient const&) = default;
  JobServiceClient(JobServiceClient&&) = default;
  JobServiceClient& operator=(JobServiceClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(JobServiceClient const& a, JobServiceClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(JobServiceClient const& a, JobServiceClient const& b) {
    return !(a == b);
  }
  ///@}

  // clang-format off
  ///
  /// Creates a new job.
  ///
  /// Typically, the job becomes searchable within 10 seconds, but it may take
  /// up to 5 minutes.
  ///
  /// @param parent  Required. The resource name of the tenant under which the job is created.
  ///  @n
  ///  The format is "projects/{project_id}/tenants/{tenant_id}". For example,
  ///  "projects/foo/tenants/bar".
  /// @param job  Required. The Job to be created.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.talent.v4.Job])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.talent.v4.CreateJobRequest]: @googleapis_reference_link{google/cloud/talent/v4/job_service.proto#L175}
  /// [google.cloud.talent.v4.Job]: @googleapis_reference_link{google/cloud/talent/v4/job.proto#L34}
  ///
  // clang-format on
  StatusOr<google::cloud::talent::v4::Job> CreateJob(
      std::string const& parent, google::cloud::talent::v4::Job const& job,
      Options opts = {});

  // clang-format off
  ///
  /// Creates a new job.
  ///
  /// Typically, the job becomes searchable within 10 seconds, but it may take
  /// up to 5 minutes.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.talent.v4.CreateJobRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.talent.v4.Job])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.talent.v4.CreateJobRequest]: @googleapis_reference_link{google/cloud/talent/v4/job_service.proto#L175}
  /// [google.cloud.talent.v4.Job]: @googleapis_reference_link{google/cloud/talent/v4/job.proto#L34}
  ///
  // clang-format on
  StatusOr<google::cloud::talent::v4::Job> CreateJob(
      google::cloud::talent::v4::CreateJobRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Begins executing a batch create jobs operation.
  ///
  /// @param parent  Required. The resource name of the tenant under which the job is created.
  ///  @n
  ///  The format is "projects/{project_id}/tenants/{tenant_id}". For example,
  ///  "projects/foo/tenants/bar".
  /// @param jobs  Required. The jobs to be created.
  ///  A maximum of 200 jobs can be created in a batch.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.talent.v4.BatchCreateJobsResponse] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.talent.v4.BatchCreateJobsRequest]: @googleapis_reference_link{google/cloud/talent/v4/job_service.proto#L900}
  /// [google.cloud.talent.v4.BatchCreateJobsResponse]: @googleapis_reference_link{google/cloud/talent/v4/job_service.proto#L992}
  ///
  // clang-format on
  future<StatusOr<google::cloud::talent::v4::BatchCreateJobsResponse>>
  BatchCreateJobs(std::string const& parent,
                  std::vector<google::cloud::talent::v4::Job> const& jobs,
                  Options opts = {});

  // clang-format off
  ///
  /// Begins executing a batch create jobs operation.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.talent.v4.BatchCreateJobsRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.talent.v4.BatchCreateJobsResponse] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.talent.v4.BatchCreateJobsRequest]: @googleapis_reference_link{google/cloud/talent/v4/job_service.proto#L900}
  /// [google.cloud.talent.v4.BatchCreateJobsResponse]: @googleapis_reference_link{google/cloud/talent/v4/job_service.proto#L992}
  ///
  // clang-format on
  future<StatusOr<google::cloud::talent::v4::BatchCreateJobsResponse>>
  BatchCreateJobs(
      google::cloud::talent::v4::BatchCreateJobsRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Retrieves the specified job, whose status is OPEN or recently EXPIRED
  /// within the last 90 days.
  ///
  /// @param name  Required. The resource name of the job to retrieve.
  ///  @n
  ///  The format is
  ///  "projects/{project_id}/tenants/{tenant_id}/jobs/{job_id}". For
  ///  example, "projects/foo/tenants/bar/jobs/baz".
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.talent.v4.Job])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.talent.v4.GetJobRequest]: @googleapis_reference_link{google/cloud/talent/v4/job_service.proto#L190}
  /// [google.cloud.talent.v4.Job]: @googleapis_reference_link{google/cloud/talent/v4/job.proto#L34}
  ///
  // clang-format on
  StatusOr<google::cloud::talent::v4::Job> GetJob(std::string const& name,
                                                  Options opts = {});

  // clang-format off
  ///
  /// Retrieves the specified job, whose status is OPEN or recently EXPIRED
  /// within the last 90 days.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.talent.v4.GetJobRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.talent.v4.Job])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.talent.v4.GetJobRequest]: @googleapis_reference_link{google/cloud/talent/v4/job_service.proto#L190}
  /// [google.cloud.talent.v4.Job]: @googleapis_reference_link{google/cloud/talent/v4/job.proto#L34}
  ///
  // clang-format on
  StatusOr<google::cloud::talent::v4::Job> GetJob(
      google::cloud::talent::v4::GetJobRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Updates specified job.
  ///
  /// Typically, updated contents become visible in search results within 10
  /// seconds, but it may take up to 5 minutes.
  ///
  /// @param job  Required. The Job to be updated.
  /// @param update_mask  Strongly recommended for the best service experience.
  ///  @n
  ///  If [update_mask][google.cloud.talent.v4.UpdateJobRequest.update_mask] is
  ///  provided, only the specified fields in
  ///  [job][google.cloud.talent.v4.UpdateJobRequest.job] are updated. Otherwise
  ///  all the fields are updated.
  ///  @n
  ///  A field mask to restrict the fields that are updated. Only
  ///  top level fields of [Job][google.cloud.talent.v4.Job] are supported.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.talent.v4.Job])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.talent.v4.Job]: @googleapis_reference_link{google/cloud/talent/v4/job.proto#L34}
  /// [google.cloud.talent.v4.UpdateJobRequest]: @googleapis_reference_link{google/cloud/talent/v4/job_service.proto#L203}
  /// [google.cloud.talent.v4.UpdateJobRequest.job]: @googleapis_reference_link{google/cloud/talent/v4/job_service.proto#L205}
  /// [google.cloud.talent.v4.UpdateJobRequest.update_mask]: @googleapis_reference_link{google/cloud/talent/v4/job_service.proto#L216}
  ///
  // clang-format on
  StatusOr<google::cloud::talent::v4::Job> UpdateJob(
      google::cloud::talent::v4::Job const& job,
      google::protobuf::FieldMask const& update_mask, Options opts = {});

  // clang-format off
  ///
  /// Updates specified job.
  ///
  /// Typically, updated contents become visible in search results within 10
  /// seconds, but it may take up to 5 minutes.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.talent.v4.UpdateJobRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.talent.v4.Job])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.talent.v4.Job]: @googleapis_reference_link{google/cloud/talent/v4/job.proto#L34}
  /// [google.cloud.talent.v4.UpdateJobRequest]: @googleapis_reference_link{google/cloud/talent/v4/job_service.proto#L203}
  ///
  // clang-format on
  StatusOr<google::cloud::talent::v4::Job> UpdateJob(
      google::cloud::talent::v4::UpdateJobRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Begins executing a batch update jobs operation.
  ///
  /// @param parent  Required. The resource name of the tenant under which the job is created.
  ///  @n
  ///  The format is "projects/{project_id}/tenants/{tenant_id}". For example,
  ///  "projects/foo/tenants/bar".
  /// @param jobs  Required. The jobs to be updated.
  ///  A maximum of 200 jobs can be updated in a batch.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.talent.v4.BatchUpdateJobsResponse] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.talent.v4.BatchUpdateJobsRequest]: @googleapis_reference_link{google/cloud/talent/v4/job_service.proto#L916}
  /// [google.cloud.talent.v4.BatchUpdateJobsResponse]: @googleapis_reference_link{google/cloud/talent/v4/job_service.proto#L1003}
  ///
  // clang-format on
  future<StatusOr<google::cloud::talent::v4::BatchUpdateJobsResponse>>
  BatchUpdateJobs(std::string const& parent,
                  std::vector<google::cloud::talent::v4::Job> const& jobs,
                  Options opts = {});

  // clang-format off
  ///
  /// Begins executing a batch update jobs operation.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.talent.v4.BatchUpdateJobsRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.talent.v4.BatchUpdateJobsResponse] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.talent.v4.BatchUpdateJobsRequest]: @googleapis_reference_link{google/cloud/talent/v4/job_service.proto#L916}
  /// [google.cloud.talent.v4.BatchUpdateJobsResponse]: @googleapis_reference_link{google/cloud/talent/v4/job_service.proto#L1003}
  ///
  // clang-format on
  future<StatusOr<google::cloud::talent::v4::BatchUpdateJobsResponse>>
  BatchUpdateJobs(
      google::cloud::talent::v4::BatchUpdateJobsRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Deletes the specified job.
  ///
  /// Typically, the job becomes unsearchable within 10 seconds, but it may take
  /// up to 5 minutes.
  ///
  /// @param name  Required. The resource name of the job to be deleted.
  ///  @n
  ///  The format is
  ///  "projects/{project_id}/tenants/{tenant_id}/jobs/{job_id}". For
  ///  example, "projects/foo/tenants/bar/jobs/baz".
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return a [`Status`] object. If the request failed, the
  ///     status contains the details of the failure.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.talent.v4.DeleteJobRequest]: @googleapis_reference_link{google/cloud/talent/v4/job_service.proto#L220}
  ///
  // clang-format on
  Status DeleteJob(std::string const& name, Options opts = {});

  // clang-format off
  ///
  /// Deletes the specified job.
  ///
  /// Typically, the job becomes unsearchable within 10 seconds, but it may take
  /// up to 5 minutes.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.talent.v4.DeleteJobRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return a [`Status`] object. If the request failed, the
  ///     status contains the details of the failure.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.talent.v4.DeleteJobRequest]: @googleapis_reference_link{google/cloud/talent/v4/job_service.proto#L220}
  ///
  // clang-format on
  Status DeleteJob(google::cloud::talent::v4::DeleteJobRequest const& request,
                   Options opts = {});

  // clang-format off
  ///
  /// Begins executing a batch delete jobs operation.
  ///
  /// @param parent  Required. The resource name of the tenant under which the job is created.
  ///  @n
  ///  The format is "projects/{project_id}/tenants/{tenant_id}". For example,
  ///  "projects/foo/tenants/bar".
  ///  @n
  ///  The parent of all of the jobs specified in `names` must match this field.
  /// @param names  The names of the jobs to delete.
  ///  @n
  ///  The format is "projects/{project_id}/tenants/{tenant_id}/jobs/{job_id}".
  ///  For example, "projects/foo/tenants/bar/jobs/baz".
  ///  @n
  ///  A maximum of 200 jobs can be deleted in a batch.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.talent.v4.BatchDeleteJobsResponse] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.talent.v4.BatchDeleteJobsRequest]: @googleapis_reference_link{google/cloud/talent/v4/job_service.proto#L950}
  /// [google.cloud.talent.v4.BatchDeleteJobsResponse]: @googleapis_reference_link{google/cloud/talent/v4/job_service.proto#L1014}
  ///
  // clang-format on
  future<StatusOr<google::cloud::talent::v4::BatchDeleteJobsResponse>>
  BatchDeleteJobs(std::string const& parent,
                  std::vector<std::string> const& names, Options opts = {});

  // clang-format off
  ///
  /// Begins executing a batch delete jobs operation.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.talent.v4.BatchDeleteJobsRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.talent.v4.BatchDeleteJobsResponse] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.talent.v4.BatchDeleteJobsRequest]: @googleapis_reference_link{google/cloud/talent/v4/job_service.proto#L950}
  /// [google.cloud.talent.v4.BatchDeleteJobsResponse]: @googleapis_reference_link{google/cloud/talent/v4/job_service.proto#L1014}
  ///
  // clang-format on
  future<StatusOr<google::cloud::talent::v4::BatchDeleteJobsResponse>>
  BatchDeleteJobs(
      google::cloud::talent::v4::BatchDeleteJobsRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Lists jobs by filter.
  ///
  /// @param parent  Required. The resource name of the tenant under which the job is created.
  ///  @n
  ///  The format is "projects/{project_id}/tenants/{tenant_id}". For example,
  ///  "projects/foo/tenants/bar".
  /// @param filter  Required. The filter string specifies the jobs to be enumerated.
  ///  @n
  ///  For more information, see [ListJobsRequest][google.cloud.talent.v4.ListJobsRequest].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return a [StreamRange](@ref google::cloud::StreamRange)
  ///     to iterate of the results. See the documentation of this type for
  ///     details. In brief, this class has `begin()` and `end()` member
  ///     functions returning a iterator class meeting the
  ///     [input iterator requirements]. The value type for this iterator is a
  ///     [`StatusOr`] as the iteration may fail even after some values are
  ///     retrieved successfully, for example, if there is a network disconnect.
  ///     An empty set of results does not indicate an error, it indicates
  ///     that there are no resources meeting the request criteria.
  ///     On a successful iteration the `StatusOr<T>` contains elements of type
  ///     [google.cloud.talent.v4.Job], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.talent.v4.Job]: @googleapis_reference_link{google/cloud/talent/v4/job.proto#L34}
  /// [google.cloud.talent.v4.ListJobsRequest]: @googleapis_reference_link{google/cloud/talent/v4/job_service.proto#L271}
  ///
  // clang-format on
  StreamRange<google::cloud::talent::v4::Job> ListJobs(
      std::string const& parent, std::string const& filter, Options opts = {});

  // clang-format off
  ///
  /// Lists jobs by filter.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.talent.v4.ListJobsRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return a [StreamRange](@ref google::cloud::StreamRange)
  ///     to iterate of the results. See the documentation of this type for
  ///     details. In brief, this class has `begin()` and `end()` member
  ///     functions returning a iterator class meeting the
  ///     [input iterator requirements]. The value type for this iterator is a
  ///     [`StatusOr`] as the iteration may fail even after some values are
  ///     retrieved successfully, for example, if there is a network disconnect.
  ///     An empty set of results does not indicate an error, it indicates
  ///     that there are no resources meeting the request criteria.
  ///     On a successful iteration the `StatusOr<T>` contains elements of type
  ///     [google.cloud.talent.v4.Job], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.talent.v4.Job]: @googleapis_reference_link{google/cloud/talent/v4/job.proto#L34}
  /// [google.cloud.talent.v4.ListJobsRequest]: @googleapis_reference_link{google/cloud/talent/v4/job_service.proto#L271}
  ///
  // clang-format on
  StreamRange<google::cloud::talent::v4::Job> ListJobs(
      google::cloud::talent::v4::ListJobsRequest request, Options opts = {});

  // clang-format off
  ///
  /// Searches for jobs using the provided
  /// [SearchJobsRequest][google.cloud.talent.v4.SearchJobsRequest].
  ///
  /// This call constrains the
  /// [visibility][google.cloud.talent.v4.Job.visibility] of jobs present in the
  /// database, and only returns jobs that the caller has permission to search
  /// against.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.talent.v4.SearchJobsRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.talent.v4.SearchJobsResponse])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.talent.v4.Job.visibility]: @googleapis_reference_link{google/cloud/talent/v4/job.proto#L296}
  /// [google.cloud.talent.v4.SearchJobsRequest]: @googleapis_reference_link{google/cloud/talent/v4/job_service.proto#L343}
  /// [google.cloud.talent.v4.SearchJobsResponse]: @googleapis_reference_link{google/cloud/talent/v4/job_service.proto#L817}
  ///
  // clang-format on
  StatusOr<google::cloud::talent::v4::SearchJobsResponse> SearchJobs(
      google::cloud::talent::v4::SearchJobsRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Searches for jobs using the provided
  /// [SearchJobsRequest][google.cloud.talent.v4.SearchJobsRequest].
  ///
  /// This API call is intended for the use case of targeting passive job
  /// seekers (for example, job seekers who have signed up to receive email
  /// alerts about potential job opportunities), it has different algorithmic
  /// adjustments that are designed to specifically target passive job seekers.
  ///
  /// This call constrains the
  /// [visibility][google.cloud.talent.v4.Job.visibility] of jobs present in the
  /// database, and only returns jobs the caller has permission to search
  /// against.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.talent.v4.SearchJobsRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.talent.v4.SearchJobsResponse])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.talent.v4.Job.visibility]: @googleapis_reference_link{google/cloud/talent/v4/job.proto#L296}
  /// [google.cloud.talent.v4.SearchJobsRequest]: @googleapis_reference_link{google/cloud/talent/v4/job_service.proto#L343}
  /// [google.cloud.talent.v4.SearchJobsResponse]: @googleapis_reference_link{google/cloud/talent/v4/job_service.proto#L817}
  ///
  // clang-format on
  StatusOr<google::cloud::talent::v4::SearchJobsResponse> SearchJobsForAlert(
      google::cloud::talent::v4::SearchJobsRequest const& request,
      Options opts = {});

 private:
  std::shared_ptr<JobServiceConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace talent_v4
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TALENT_V4_JOB_CLIENT_H
