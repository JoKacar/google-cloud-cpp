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
// source: google/cloud/dialogflow/v2/knowledge_base.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_KNOWLEDGE_BASES_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_KNOWLEDGE_BASES_CLIENT_H

#include "google/cloud/dialogflow_es/knowledge_bases_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace dialogflow_es {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Service for managing
/// [KnowledgeBases][google.cloud.dialogflow.v2.KnowledgeBase].
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
/// [google.cloud.dialogflow.v2.KnowledgeBase]:
/// @googleapis_reference_link{google/cloud/dialogflow/v2/knowledge_base.proto#L131}
///
class KnowledgeBasesClient {
 public:
  explicit KnowledgeBasesClient(
      std::shared_ptr<KnowledgeBasesConnection> connection, Options opts = {});
  ~KnowledgeBasesClient();

  ///@{
  /// @name Copy and move support
  KnowledgeBasesClient(KnowledgeBasesClient const&) = default;
  KnowledgeBasesClient& operator=(KnowledgeBasesClient const&) = default;
  KnowledgeBasesClient(KnowledgeBasesClient&&) = default;
  KnowledgeBasesClient& operator=(KnowledgeBasesClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(KnowledgeBasesClient const& a,
                         KnowledgeBasesClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(KnowledgeBasesClient const& a,
                         KnowledgeBasesClient const& b) {
    return !(a == b);
  }
  ///@}

  // clang-format off
  ///
  /// Returns the list of all knowledge bases of the specified agent.
  ///
  /// @param parent  Required. The project to list of knowledge bases for.
  ///  Format: `projects/<Project ID>/locations/<Location ID>`.
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
  ///     [google.cloud.dialogflow.v2.KnowledgeBase], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.dialogflow.v2.KnowledgeBase]: @googleapis_reference_link{google/cloud/dialogflow/v2/knowledge_base.proto#L131}
  /// [google.cloud.dialogflow.v2.ListKnowledgeBasesRequest]: @googleapis_reference_link{google/cloud/dialogflow/v2/knowledge_base.proto#L156}
  ///
  // clang-format on
  StreamRange<google::cloud::dialogflow::v2::KnowledgeBase> ListKnowledgeBases(
      std::string const& parent, Options opts = {});

  // clang-format off
  ///
  /// Returns the list of all knowledge bases of the specified agent.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.dialogflow.v2.ListKnowledgeBasesRequest].
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
  ///     [google.cloud.dialogflow.v2.KnowledgeBase], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.dialogflow.v2.KnowledgeBase]: @googleapis_reference_link{google/cloud/dialogflow/v2/knowledge_base.proto#L131}
  /// [google.cloud.dialogflow.v2.ListKnowledgeBasesRequest]: @googleapis_reference_link{google/cloud/dialogflow/v2/knowledge_base.proto#L156}
  ///
  // clang-format on
  StreamRange<google::cloud::dialogflow::v2::KnowledgeBase> ListKnowledgeBases(
      google::cloud::dialogflow::v2::ListKnowledgeBasesRequest request,
      Options opts = {});

  // clang-format off
  ///
  /// Retrieves the specified knowledge base.
  ///
  /// @param name  Required. The name of the knowledge base to retrieve.
  ///  Format `projects/<Project ID>/locations/<Location ID>/knowledgeBases/<Knowledge Base ID>`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.dialogflow.v2.KnowledgeBase])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.dialogflow.v2.GetKnowledgeBaseRequest]: @googleapis_reference_link{google/cloud/dialogflow/v2/knowledge_base.proto#L215}
  /// [google.cloud.dialogflow.v2.KnowledgeBase]: @googleapis_reference_link{google/cloud/dialogflow/v2/knowledge_base.proto#L131}
  ///
  // clang-format on
  StatusOr<google::cloud::dialogflow::v2::KnowledgeBase> GetKnowledgeBase(
      std::string const& name, Options opts = {});

  // clang-format off
  ///
  /// Retrieves the specified knowledge base.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.dialogflow.v2.GetKnowledgeBaseRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.dialogflow.v2.KnowledgeBase])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.dialogflow.v2.GetKnowledgeBaseRequest]: @googleapis_reference_link{google/cloud/dialogflow/v2/knowledge_base.proto#L215}
  /// [google.cloud.dialogflow.v2.KnowledgeBase]: @googleapis_reference_link{google/cloud/dialogflow/v2/knowledge_base.proto#L131}
  ///
  // clang-format on
  StatusOr<google::cloud::dialogflow::v2::KnowledgeBase> GetKnowledgeBase(
      google::cloud::dialogflow::v2::GetKnowledgeBaseRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Creates a knowledge base.
  ///
  /// @param parent  Required. The project to create a knowledge base for.
  ///  Format: `projects/<Project ID>/locations/<Location ID>`.
  /// @param knowledge_base  Required. The knowledge base to create.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.dialogflow.v2.KnowledgeBase])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.dialogflow.v2.CreateKnowledgeBaseRequest]: @googleapis_reference_link{google/cloud/dialogflow/v2/knowledge_base.proto#L229}
  /// [google.cloud.dialogflow.v2.KnowledgeBase]: @googleapis_reference_link{google/cloud/dialogflow/v2/knowledge_base.proto#L131}
  ///
  // clang-format on
  StatusOr<google::cloud::dialogflow::v2::KnowledgeBase> CreateKnowledgeBase(
      std::string const& parent,
      google::cloud::dialogflow::v2::KnowledgeBase const& knowledge_base,
      Options opts = {});

  // clang-format off
  ///
  /// Creates a knowledge base.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.dialogflow.v2.CreateKnowledgeBaseRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.dialogflow.v2.KnowledgeBase])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.dialogflow.v2.CreateKnowledgeBaseRequest]: @googleapis_reference_link{google/cloud/dialogflow/v2/knowledge_base.proto#L229}
  /// [google.cloud.dialogflow.v2.KnowledgeBase]: @googleapis_reference_link{google/cloud/dialogflow/v2/knowledge_base.proto#L131}
  ///
  // clang-format on
  StatusOr<google::cloud::dialogflow::v2::KnowledgeBase> CreateKnowledgeBase(
      google::cloud::dialogflow::v2::CreateKnowledgeBaseRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Deletes the specified knowledge base.
  ///
  /// @param name  Required. The name of the knowledge base to delete.
  ///  Format: `projects/<Project ID>/locations/<Location ID>/knowledgeBases/<Knowledge Base ID>`.
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
  /// [google.cloud.dialogflow.v2.DeleteKnowledgeBaseRequest]: @googleapis_reference_link{google/cloud/dialogflow/v2/knowledge_base.proto#L245}
  ///
  // clang-format on
  Status DeleteKnowledgeBase(std::string const& name, Options opts = {});

  // clang-format off
  ///
  /// Deletes the specified knowledge base.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.dialogflow.v2.DeleteKnowledgeBaseRequest].
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
  /// [google.cloud.dialogflow.v2.DeleteKnowledgeBaseRequest]: @googleapis_reference_link{google/cloud/dialogflow/v2/knowledge_base.proto#L245}
  ///
  // clang-format on
  Status DeleteKnowledgeBase(
      google::cloud::dialogflow::v2::DeleteKnowledgeBaseRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Updates the specified knowledge base.
  ///
  /// @param knowledge_base  Required. The knowledge base to update.
  /// @param update_mask  Optional. Not specified means `update all`.
  ///  Currently, only `display_name` can be updated, an InvalidArgument will be
  ///  returned for attempting to update other fields.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.dialogflow.v2.KnowledgeBase])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.dialogflow.v2.KnowledgeBase]: @googleapis_reference_link{google/cloud/dialogflow/v2/knowledge_base.proto#L131}
  /// [google.cloud.dialogflow.v2.UpdateKnowledgeBaseRequest]: @googleapis_reference_link{google/cloud/dialogflow/v2/knowledge_base.proto#L263}
  ///
  // clang-format on
  StatusOr<google::cloud::dialogflow::v2::KnowledgeBase> UpdateKnowledgeBase(
      google::cloud::dialogflow::v2::KnowledgeBase const& knowledge_base,
      google::protobuf::FieldMask const& update_mask, Options opts = {});

  // clang-format off
  ///
  /// Updates the specified knowledge base.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.dialogflow.v2.UpdateKnowledgeBaseRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.dialogflow.v2.KnowledgeBase])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.dialogflow.v2.KnowledgeBase]: @googleapis_reference_link{google/cloud/dialogflow/v2/knowledge_base.proto#L131}
  /// [google.cloud.dialogflow.v2.UpdateKnowledgeBaseRequest]: @googleapis_reference_link{google/cloud/dialogflow/v2/knowledge_base.proto#L263}
  ///
  // clang-format on
  StatusOr<google::cloud::dialogflow::v2::KnowledgeBase> UpdateKnowledgeBase(
      google::cloud::dialogflow::v2::UpdateKnowledgeBaseRequest const& request,
      Options opts = {});

 private:
  std::shared_ptr<KnowledgeBasesConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_KNOWLEDGE_BASES_CLIENT_H
