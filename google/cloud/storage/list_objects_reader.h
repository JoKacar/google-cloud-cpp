// Copyright 2018 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_STORAGE_LIST_OBJECTS_READER_H_
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_STORAGE_LIST_OBJECTS_READER_H_

#include "third_party/cloud_cpp/google/cloud/status_or.h"
#include "third_party/cloud_cpp/google/cloud/storage/internal/object_requests.h"
#include "third_party/cloud_cpp/google/cloud/storage/internal/range_from_pagination.h"
#include "third_party/cloud_cpp/google/cloud/storage/internal/raw_client.h"
#include "third_party/cloud_cpp/google/cloud/storage/version.h"
#include <iterator>

namespace google {
namespace cloud {
namespace storage {
inline namespace STORAGE_CLIENT_NS {
using ListObjectsReader =
    internal::PaginationRange<ObjectMetadata, internal::ListObjectsRequest,
                              internal::ListObjectsResponse>;

using ListObjectsIterator = ListObjectsReader::iterator;

}  // namespace STORAGE_CLIENT_NS
}  // namespace storage
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_STORAGE_LIST_OBJECTS_READER_H_
