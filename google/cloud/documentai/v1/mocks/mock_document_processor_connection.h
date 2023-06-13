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
// source: google/cloud/documentai/v1/document_processor_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DOCUMENTAI_V1_MOCKS_MOCK_DOCUMENT_PROCESSOR_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DOCUMENTAI_V1_MOCKS_MOCK_DOCUMENT_PROCESSOR_CONNECTION_H

#include "google/cloud/documentai/v1/document_processor_connection.h"
#include <gmock/gmock.h>

// clang-format off
#include "google/cloud/internal/port_def.inc"
// clang-format on

namespace google {
namespace cloud {
namespace documentai_v1_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `DocumentProcessorServiceConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `DocumentProcessorServiceClient`. To
 * do so, construct an object of type `DocumentProcessorServiceClient` with an
 * instance of this class. Then use the Google Test framework functions to
 * program the behavior of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockDocumentProcessorServiceConnection
    : public documentai_v1::DocumentProcessorServiceConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD(StatusOr<google::cloud::documentai::v1::ProcessResponse>,
              ProcessDocument,
              (google::cloud::documentai::v1::ProcessRequest const& request),
              (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::documentai::v1::BatchProcessResponse>>,
      BatchProcessDocuments,
      (google::cloud::documentai::v1::BatchProcessRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::documentai::v1::FetchProcessorTypesResponse>,
      FetchProcessorTypes,
      (google::cloud::documentai::v1::FetchProcessorTypesRequest const&
           request),
      (override));

  MOCK_METHOD(
      StreamRange<google::cloud::documentai::v1::ProcessorType>,
      ListProcessorTypes,
      (google::cloud::documentai::v1::ListProcessorTypesRequest request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::documentai::v1::ProcessorType>, GetProcessorType,
      (google::cloud::documentai::v1::GetProcessorTypeRequest const& request),
      (override));

  MOCK_METHOD(StreamRange<google::cloud::documentai::v1::Processor>,
              ListProcessors,
              (google::cloud::documentai::v1::ListProcessorsRequest request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::documentai::v1::Processor>, GetProcessor,
      (google::cloud::documentai::v1::GetProcessorRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<
          google::cloud::documentai::v1::TrainProcessorVersionResponse>>,
      TrainProcessorVersion,
      (google::cloud::documentai::v1::TrainProcessorVersionRequest const&
           request),
      (override));

  MOCK_METHOD(StatusOr<google::cloud::documentai::v1::ProcessorVersion>,
              GetProcessorVersion,
              (google::cloud::documentai::v1::GetProcessorVersionRequest const&
                   request),
              (override));

  MOCK_METHOD(
      StreamRange<google::cloud::documentai::v1::ProcessorVersion>,
      ListProcessorVersions,
      (google::cloud::documentai::v1::ListProcessorVersionsRequest request),
      (override));

  MOCK_METHOD(
      future<StatusOr<
          google::cloud::documentai::v1::DeleteProcessorVersionMetadata>>,
      DeleteProcessorVersion,
      (google::cloud::documentai::v1::DeleteProcessorVersionRequest const&
           request),
      (override));

  MOCK_METHOD(
      future<StatusOr<
          google::cloud::documentai::v1::DeployProcessorVersionResponse>>,
      DeployProcessorVersion,
      (google::cloud::documentai::v1::DeployProcessorVersionRequest const&
           request),
      (override));

  MOCK_METHOD(
      future<StatusOr<
          google::cloud::documentai::v1::UndeployProcessorVersionResponse>>,
      UndeployProcessorVersion,
      (google::cloud::documentai::v1::UndeployProcessorVersionRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::documentai::v1::Processor>, CreateProcessor,
      (google::cloud::documentai::v1::CreateProcessorRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::documentai::v1::DeleteProcessorMetadata>>,
      DeleteProcessor,
      (google::cloud::documentai::v1::DeleteProcessorRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::documentai::v1::EnableProcessorResponse>>,
      EnableProcessor,
      (google::cloud::documentai::v1::EnableProcessorRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::documentai::v1::DisableProcessorResponse>>,
      DisableProcessor,
      (google::cloud::documentai::v1::DisableProcessorRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<
          google::cloud::documentai::v1::SetDefaultProcessorVersionResponse>>,
      SetDefaultProcessorVersion,
      (google::cloud::documentai::v1::SetDefaultProcessorVersionRequest const&
           request),
      (override));

  MOCK_METHOD(
      future<StatusOr<google::cloud::documentai::v1::ReviewDocumentResponse>>,
      ReviewDocument,
      (google::cloud::documentai::v1::ReviewDocumentRequest const& request),
      (override));

  MOCK_METHOD(
      future<StatusOr<
          google::cloud::documentai::v1::EvaluateProcessorVersionResponse>>,
      EvaluateProcessorVersion,
      (google::cloud::documentai::v1::EvaluateProcessorVersionRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::documentai::v1::Evaluation>, GetEvaluation,
      (google::cloud::documentai::v1::GetEvaluationRequest const& request),
      (override));

  MOCK_METHOD(StreamRange<google::cloud::documentai::v1::Evaluation>,
              ListEvaluations,
              (google::cloud::documentai::v1::ListEvaluationsRequest request),
              (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace documentai_v1_mocks
}  // namespace cloud
}  // namespace google

#include "google/cloud/internal/port_undef.inc"

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DOCUMENTAI_V1_MOCKS_MOCK_DOCUMENT_PROCESSOR_CONNECTION_H
