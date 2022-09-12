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
// source: google/cloud/networkconnectivity/v1/hub.proto

#include "google/cloud/networkconnectivity/hub_connection_idempotency_policy.h"
#include "absl/memory/memory.h"
#include <memory>

namespace google {
namespace cloud {
namespace networkconnectivity {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

HubServiceConnectionIdempotencyPolicy::
    ~HubServiceConnectionIdempotencyPolicy() = default;

namespace {
class DefaultHubServiceConnectionIdempotencyPolicy
    : public HubServiceConnectionIdempotencyPolicy {
 public:
  ~DefaultHubServiceConnectionIdempotencyPolicy() override = default;

  /// Create a new copy of this object.
  std::unique_ptr<HubServiceConnectionIdempotencyPolicy> clone()
      const override {
    return absl::make_unique<DefaultHubServiceConnectionIdempotencyPolicy>(
        *this);
  }

  Idempotency ListHubs(
      google::cloud::networkconnectivity::v1::ListHubsRequest) override {
    return Idempotency::kIdempotent;
  }

  Idempotency GetHub(
      google::cloud::networkconnectivity::v1::GetHubRequest const&) override {
    return Idempotency::kIdempotent;
  }

  Idempotency CreateHub(
      google::cloud::networkconnectivity::v1::CreateHubRequest const&)
      override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency UpdateHub(
      google::cloud::networkconnectivity::v1::UpdateHubRequest const&)
      override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency DeleteHub(
      google::cloud::networkconnectivity::v1::DeleteHubRequest const&)
      override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency ListSpokes(
      google::cloud::networkconnectivity::v1::ListSpokesRequest) override {
    return Idempotency::kIdempotent;
  }

  Idempotency GetSpoke(
      google::cloud::networkconnectivity::v1::GetSpokeRequest const&) override {
    return Idempotency::kIdempotent;
  }

  Idempotency CreateSpoke(
      google::cloud::networkconnectivity::v1::CreateSpokeRequest const&)
      override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency UpdateSpoke(
      google::cloud::networkconnectivity::v1::UpdateSpokeRequest const&)
      override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency DeleteSpoke(
      google::cloud::networkconnectivity::v1::DeleteSpokeRequest const&)
      override {
    return Idempotency::kNonIdempotent;
  }
};
}  // namespace

std::unique_ptr<HubServiceConnectionIdempotencyPolicy>
MakeDefaultHubServiceConnectionIdempotencyPolicy() {
  return absl::make_unique<DefaultHubServiceConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace networkconnectivity
}  // namespace cloud
}  // namespace google
