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
// source: google/cloud/bigquery/connection/v1/connection.proto

#include "google/cloud/bigquery/connection_connection_idempotency_policy.h"
#include "absl/memory/memory.h"
#include <memory>

namespace google {
namespace cloud {
namespace bigquery {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

ConnectionServiceConnectionIdempotencyPolicy::
    ~ConnectionServiceConnectionIdempotencyPolicy() = default;

std::unique_ptr<ConnectionServiceConnectionIdempotencyPolicy>
ConnectionServiceConnectionIdempotencyPolicy::clone() const {
  return absl::make_unique<ConnectionServiceConnectionIdempotencyPolicy>(*this);
}

Idempotency ConnectionServiceConnectionIdempotencyPolicy::CreateConnection(
    google::cloud::bigquery::connection::v1::CreateConnectionRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ConnectionServiceConnectionIdempotencyPolicy::GetConnection(
    google::cloud::bigquery::connection::v1::GetConnectionRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency ConnectionServiceConnectionIdempotencyPolicy::ListConnections(
    google::cloud::bigquery::connection::v1::
        ListConnectionsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency ConnectionServiceConnectionIdempotencyPolicy::UpdateConnection(
    google::cloud::bigquery::connection::v1::UpdateConnectionRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ConnectionServiceConnectionIdempotencyPolicy::DeleteConnection(
    google::cloud::bigquery::connection::v1::DeleteConnectionRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ConnectionServiceConnectionIdempotencyPolicy::GetIamPolicy(
    google::iam::v1::GetIamPolicyRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ConnectionServiceConnectionIdempotencyPolicy::SetIamPolicy(
    google::iam::v1::SetIamPolicyRequest const& request) {
  return request.policy().etag().empty() ? Idempotency::kNonIdempotent
                                         : Idempotency::kIdempotent;
}

Idempotency ConnectionServiceConnectionIdempotencyPolicy::TestIamPermissions(
    google::iam::v1::TestIamPermissionsRequest const&) {
  return Idempotency::kNonIdempotent;
}

std::unique_ptr<ConnectionServiceConnectionIdempotencyPolicy>
MakeDefaultConnectionServiceConnectionIdempotencyPolicy() {
  return absl::make_unique<ConnectionServiceConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigquery
}  // namespace cloud
}  // namespace google
