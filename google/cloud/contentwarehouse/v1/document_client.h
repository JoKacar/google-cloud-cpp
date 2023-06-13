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
// source: google/cloud/contentwarehouse/v1/document_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CONTENTWAREHOUSE_V1_DOCUMENT_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CONTENTWAREHOUSE_V1_DOCUMENT_CLIENT_H

#include "google/cloud/contentwarehouse/v1/document_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <memory>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace contentwarehouse_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// This service lets you manage document.
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
class DocumentServiceClient {
 public:
  explicit DocumentServiceClient(
      std::shared_ptr<DocumentServiceConnection> connection, Options opts = {});
  ~DocumentServiceClient();

  ///@{
  /// @name Copy and move support
  DocumentServiceClient(DocumentServiceClient const&) = default;
  DocumentServiceClient& operator=(DocumentServiceClient const&) = default;
  DocumentServiceClient(DocumentServiceClient&&) = default;
  DocumentServiceClient& operator=(DocumentServiceClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(DocumentServiceClient const& a,
                         DocumentServiceClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(DocumentServiceClient const& a,
                         DocumentServiceClient const& b) {
    return !(a == b);
  }
  ///@}

  // clang-format off
  ///
  /// Creates a document.
  ///
  /// @param parent  Required. The parent name.
  ///  Format: projects/{project_number}/locations/{location}.
  /// @param document  Required. The document to create.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.contentwarehouse.v1.CreateDocumentResponse])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.contentwarehouse.v1.CreateDocumentRequest]: @googleapis_reference_link{google/cloud/contentwarehouse/v1/document_service_request.proto#L46}
  /// [google.cloud.contentwarehouse.v1.CreateDocumentResponse]: @googleapis_reference_link{google/cloud/contentwarehouse/v1/document_service.proto#L144}
  ///
  // clang-format on
  StatusOr<google::cloud::contentwarehouse::v1::CreateDocumentResponse>
  CreateDocument(std::string const& parent,
                 google::cloud::contentwarehouse::v1::Document const& document,
                 Options opts = {});

  // clang-format off
  ///
  /// Creates a document.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.contentwarehouse.v1.CreateDocumentRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.contentwarehouse.v1.CreateDocumentResponse])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.contentwarehouse.v1.CreateDocumentRequest]: @googleapis_reference_link{google/cloud/contentwarehouse/v1/document_service_request.proto#L46}
  /// [google.cloud.contentwarehouse.v1.CreateDocumentResponse]: @googleapis_reference_link{google/cloud/contentwarehouse/v1/document_service.proto#L144}
  ///
  // clang-format on
  StatusOr<google::cloud::contentwarehouse::v1::CreateDocumentResponse>
  CreateDocument(
      google::cloud::contentwarehouse::v1::CreateDocumentRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Gets a document. Returns NOT_FOUND if the document does not exist.
  ///
  /// @param name  Required. The name of the document to retrieve.
  ///  Format:
  ///  projects/{project_number}/locations/{location}/documents/{document_id} or
  ///  projects/{project_number}/locations/{location}/documents/referenceId/{reference_id}.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.contentwarehouse.v1.Document])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.contentwarehouse.v1.Document]: @googleapis_reference_link{google/cloud/contentwarehouse/v1/document.proto#L34}
  /// [google.cloud.contentwarehouse.v1.GetDocumentRequest]: @googleapis_reference_link{google/cloud/contentwarehouse/v1/document_service_request.proto#L84}
  ///
  // clang-format on
  StatusOr<google::cloud::contentwarehouse::v1::Document> GetDocument(
      std::string const& name, Options opts = {});

  // clang-format off
  ///
  /// Gets a document. Returns NOT_FOUND if the document does not exist.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.contentwarehouse.v1.GetDocumentRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.contentwarehouse.v1.Document])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.contentwarehouse.v1.Document]: @googleapis_reference_link{google/cloud/contentwarehouse/v1/document.proto#L34}
  /// [google.cloud.contentwarehouse.v1.GetDocumentRequest]: @googleapis_reference_link{google/cloud/contentwarehouse/v1/document_service_request.proto#L84}
  ///
  // clang-format on
  StatusOr<google::cloud::contentwarehouse::v1::Document> GetDocument(
      google::cloud::contentwarehouse::v1::GetDocumentRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Updates a document. Returns INVALID_ARGUMENT if the name of the document
  /// is non-empty and does not equal the existing name.
  ///
  /// @param name  Required. The name of the document to update.
  ///  Format:
  ///  projects/{project_number}/locations/{location}/documents/{document_id}
  ///  or
  ///  projects/{project_number}/locations/{location}/documents/referenceId/{reference_id}.
  /// @param document  Required. The document to update.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.contentwarehouse.v1.UpdateDocumentResponse])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.contentwarehouse.v1.UpdateDocumentRequest]: @googleapis_reference_link{google/cloud/contentwarehouse/v1/document_service_request.proto#L102}
  /// [google.cloud.contentwarehouse.v1.UpdateDocumentResponse]: @googleapis_reference_link{google/cloud/contentwarehouse/v1/document_service.proto#L163}
  ///
  // clang-format on
  StatusOr<google::cloud::contentwarehouse::v1::UpdateDocumentResponse>
  UpdateDocument(std::string const& name,
                 google::cloud::contentwarehouse::v1::Document const& document,
                 Options opts = {});

  // clang-format off
  ///
  /// Updates a document. Returns INVALID_ARGUMENT if the name of the document
  /// is non-empty and does not equal the existing name.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.contentwarehouse.v1.UpdateDocumentRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.contentwarehouse.v1.UpdateDocumentResponse])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.contentwarehouse.v1.UpdateDocumentRequest]: @googleapis_reference_link{google/cloud/contentwarehouse/v1/document_service_request.proto#L102}
  /// [google.cloud.contentwarehouse.v1.UpdateDocumentResponse]: @googleapis_reference_link{google/cloud/contentwarehouse/v1/document_service.proto#L163}
  ///
  // clang-format on
  StatusOr<google::cloud::contentwarehouse::v1::UpdateDocumentResponse>
  UpdateDocument(
      google::cloud::contentwarehouse::v1::UpdateDocumentRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Deletes a document. Returns NOT_FOUND if the document does not exist.
  ///
  /// @param name  Required. The name of the document to delete.
  ///  Format:
  ///  projects/{project_number}/locations/{location}/documents/{document_id}
  ///  or
  ///  projects/{project_number}/locations/{location}/documents/referenceId/{reference_id}.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return a [`Status`] object. If the request failed, the
  ///     status contains the details of the failure.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.contentwarehouse.v1.DeleteDocumentRequest]: @googleapis_reference_link{google/cloud/contentwarehouse/v1/document_service_request.proto#L133}
  ///
  // clang-format on
  Status DeleteDocument(std::string const& name, Options opts = {});

  // clang-format off
  ///
  /// Deletes a document. Returns NOT_FOUND if the document does not exist.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.contentwarehouse.v1.DeleteDocumentRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return a [`Status`] object. If the request failed, the
  ///     status contains the details of the failure.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.contentwarehouse.v1.DeleteDocumentRequest]: @googleapis_reference_link{google/cloud/contentwarehouse/v1/document_service_request.proto#L133}
  ///
  // clang-format on
  Status DeleteDocument(
      google::cloud::contentwarehouse::v1::DeleteDocumentRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Searches for documents using provided
  /// [SearchDocumentsRequest][google.cloud.contentwarehouse.v1.SearchDocumentsRequest].
  /// This call only returns documents that the caller has permission to search
  /// against.
  ///
  /// @param parent  Required. The parent, which owns this collection of documents.
  ///  Format: projects/{project_number}/locations/{location}.
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
  ///     [google.cloud.contentwarehouse.v1.SearchDocumentsResponse.MatchingDocument], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.contentwarehouse.v1.SearchDocumentsRequest]: @googleapis_reference_link{google/cloud/contentwarehouse/v1/document_service_request.proto#L152}
  /// [google.cloud.contentwarehouse.v1.SearchDocumentsResponse.MatchingDocument]: @googleapis_reference_link{google/cloud/contentwarehouse/v1/document_service.proto#L203}
  ///
  // clang-format on
  StreamRange<google::cloud::contentwarehouse::v1::SearchDocumentsResponse::
                  MatchingDocument>
  SearchDocuments(std::string const& parent, Options opts = {});

  // clang-format off
  ///
  /// Searches for documents using provided
  /// [SearchDocumentsRequest][google.cloud.contentwarehouse.v1.SearchDocumentsRequest].
  /// This call only returns documents that the caller has permission to search
  /// against.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.contentwarehouse.v1.SearchDocumentsRequest].
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
  ///     [google.cloud.contentwarehouse.v1.SearchDocumentsResponse.MatchingDocument], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.contentwarehouse.v1.SearchDocumentsRequest]: @googleapis_reference_link{google/cloud/contentwarehouse/v1/document_service_request.proto#L152}
  /// [google.cloud.contentwarehouse.v1.SearchDocumentsResponse.MatchingDocument]: @googleapis_reference_link{google/cloud/contentwarehouse/v1/document_service.proto#L203}
  ///
  // clang-format on
  StreamRange<google::cloud::contentwarehouse::v1::SearchDocumentsResponse::
                  MatchingDocument>
  SearchDocuments(
      google::cloud::contentwarehouse::v1::SearchDocumentsRequest request,
      Options opts = {});

  // clang-format off
  ///
  /// Lock the document so the document cannot be updated by other users.
  ///
  /// @param name  Required. The name of the document to lock.
  ///  Format:
  ///  projects/{project_number}/locations/{location}/documents/{document}.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.contentwarehouse.v1.Document])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.contentwarehouse.v1.Document]: @googleapis_reference_link{google/cloud/contentwarehouse/v1/document.proto#L34}
  /// [google.cloud.contentwarehouse.v1.LockDocumentRequest]: @googleapis_reference_link{google/cloud/contentwarehouse/v1/document_service_request.proto#L280}
  ///
  // clang-format on
  StatusOr<google::cloud::contentwarehouse::v1::Document> LockDocument(
      std::string const& name, Options opts = {});

  // clang-format off
  ///
  /// Lock the document so the document cannot be updated by other users.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.contentwarehouse.v1.LockDocumentRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.contentwarehouse.v1.Document])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.contentwarehouse.v1.Document]: @googleapis_reference_link{google/cloud/contentwarehouse/v1/document.proto#L34}
  /// [google.cloud.contentwarehouse.v1.LockDocumentRequest]: @googleapis_reference_link{google/cloud/contentwarehouse/v1/document_service_request.proto#L280}
  ///
  // clang-format on
  StatusOr<google::cloud::contentwarehouse::v1::Document> LockDocument(
      google::cloud::contentwarehouse::v1::LockDocumentRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Gets the access control policy for a resource. Returns NOT_FOUND error if
  /// the resource does not exist. Returns an empty policy if the resource exists
  /// but does not have a policy set.
  ///
  /// @param resource  Required. REQUIRED: The resource for which the policy is being requested.
  ///  Format for document:
  ///  projects/{project_number}/locations/{location}/documents/{document_id}.
  ///  Format for collection:
  ///  projects/{project_number}/locations/{location}/collections/{collection_id}.
  ///  Format for project: projects/{project_number}.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.contentwarehouse.v1.FetchAclResponse])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.contentwarehouse.v1.FetchAclRequest]: @googleapis_reference_link{google/cloud/contentwarehouse/v1/document_service_request.proto#L299}
  /// [google.cloud.contentwarehouse.v1.FetchAclResponse]: @googleapis_reference_link{google/cloud/contentwarehouse/v1/document_service.proto#L254}
  ///
  // clang-format on
  StatusOr<google::cloud::contentwarehouse::v1::FetchAclResponse> FetchAcl(
      std::string const& resource, Options opts = {});

  // clang-format off
  ///
  /// Gets the access control policy for a resource. Returns NOT_FOUND error if
  /// the resource does not exist. Returns an empty policy if the resource exists
  /// but does not have a policy set.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.contentwarehouse.v1.FetchAclRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.contentwarehouse.v1.FetchAclResponse])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.contentwarehouse.v1.FetchAclRequest]: @googleapis_reference_link{google/cloud/contentwarehouse/v1/document_service_request.proto#L299}
  /// [google.cloud.contentwarehouse.v1.FetchAclResponse]: @googleapis_reference_link{google/cloud/contentwarehouse/v1/document_service.proto#L254}
  ///
  // clang-format on
  StatusOr<google::cloud::contentwarehouse::v1::FetchAclResponse> FetchAcl(
      google::cloud::contentwarehouse::v1::FetchAclRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Sets the access control policy for a resource. Replaces any existing
  /// policy.
  ///
  /// @param resource  Required. REQUIRED: The resource for which the policy is being requested.
  ///  Format for document:
  ///  projects/{project_number}/locations/{location}/documents/{document_id}.
  ///  Format for collection:
  ///  projects/{project_number}/locations/{location}/collections/{collection_id}.
  ///  Format for project: projects/{project_number}.
  /// @param policy  Required. REQUIRED: The complete policy to be applied to the `resource`.
  ///  The size of the policy is limited to a few 10s of KB. This refers to an
  ///  Identity and Access (IAM) policy, which specifies access controls for the
  ///  Document.
  ///  @n
  ///  You can set ACL with condition for projects only.
  ///  @n
  ///  Supported operators are: `=`, `!=`, `<`, `<=`, `>`, and `>=` where
  ///  the left of the operator is `DocumentSchemaId` or property name and the
  ///  right of the operator is a number or a quoted string. You must escape
  ///  backslash (\\) and quote (\") characters.
  ///  @n
  ///  Boolean expressions (AND/OR) are supported up to 3 levels of nesting (for
  ///  example, "((A AND B AND C) OR D) AND E"), a maximum of 10 comparisons are
  ///  allowed in the expression. The expression must be < 6000 bytes in length.
  ///  @n
  ///  Sample condition:
  ///      `"DocumentSchemaId = \"some schema id\" OR SchemaId.floatPropertyName
  ///      >= 10"`
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.contentwarehouse.v1.SetAclResponse])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.contentwarehouse.v1.SetAclRequest]: @googleapis_reference_link{google/cloud/contentwarehouse/v1/document_service_request.proto#L318}
  /// [google.cloud.contentwarehouse.v1.SetAclResponse]: @googleapis_reference_link{google/cloud/contentwarehouse/v1/document_service.proto#L264}
  ///
  // clang-format on
  StatusOr<google::cloud::contentwarehouse::v1::SetAclResponse> SetAcl(
      std::string const& resource, google::iam::v1::Policy const& policy,
      Options opts = {});

  // clang-format off
  ///
  /// Sets the access control policy for a resource. Replaces any existing
  /// policy.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.contentwarehouse.v1.SetAclRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.contentwarehouse.v1.SetAclResponse])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.contentwarehouse.v1.SetAclRequest]: @googleapis_reference_link{google/cloud/contentwarehouse/v1/document_service_request.proto#L318}
  /// [google.cloud.contentwarehouse.v1.SetAclResponse]: @googleapis_reference_link{google/cloud/contentwarehouse/v1/document_service.proto#L264}
  ///
  // clang-format on
  StatusOr<google::cloud::contentwarehouse::v1::SetAclResponse> SetAcl(
      google::cloud::contentwarehouse::v1::SetAclRequest const& request,
      Options opts = {});

 private:
  std::shared_ptr<DocumentServiceConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace contentwarehouse_v1
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CONTENTWAREHOUSE_V1_DOCUMENT_CLIENT_H
