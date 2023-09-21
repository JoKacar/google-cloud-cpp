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
// source:
// google/cloud/commerce/consumer/procurement/v1/procurement_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMMERCE_CONSUMER_PROCUREMENT_V1_MOCKS_MOCK_CONSUMER_PROCUREMENT_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMMERCE_CONSUMER_PROCUREMENT_V1_MOCKS_MOCK_CONSUMER_PROCUREMENT_CONNECTION_H

#include "google/cloud/commerce/consumer/procurement/v1/consumer_procurement_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace commerce_consumer_procurement_v1_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `ConsumerProcurementServiceConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `ConsumerProcurementServiceClient`.
 * To do so, construct an object of type `ConsumerProcurementServiceClient` with
 * an instance of this class. Then use the Google Test framework functions to
 * program the behavior of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockConsumerProcurementServiceConnection
    : public commerce_consumer_procurement_v1::
          ConsumerProcurementServiceConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD(
      future<
          StatusOr<google::cloud::commerce::consumer::procurement::v1::Order>>,
      PlaceOrder,
      (google::cloud::commerce::consumer::procurement::v1::
           PlaceOrderRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::commerce::consumer::procurement::v1::Order>,
      GetOrder,
      (google::cloud::commerce::consumer::procurement::v1::
           GetOrderRequest const& request),
      (override));

  MOCK_METHOD(
      (StreamRange<google::cloud::commerce::consumer::procurement::v1::Order>),
      ListOrders,
      (google::cloud::commerce::consumer::procurement::v1::ListOrdersRequest
           request),
      (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace commerce_consumer_procurement_v1_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMMERCE_CONSUMER_PROCUREMENT_V1_MOCKS_MOCK_CONSUMER_PROCUREMENT_CONNECTION_H
