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
// source: google/cloud/kms/inventory/v1/key_dashboard_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_KMS_INVENTORY_V1_KEY_DASHBOARD_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_KMS_INVENTORY_V1_KEY_DASHBOARD_CONNECTION_H

#include "google/cloud/kms/inventory/v1/internal/key_dashboard_retry_traits.h"
#include "google/cloud/kms/inventory/v1/internal/key_dashboard_stub.h"
#include "google/cloud/kms/inventory/v1/key_dashboard_connection_idempotency_policy.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace kms_inventory_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using KeyDashboardServiceRetryPolicy =
    ::google::cloud::internal::TraitBasedRetryPolicy<
        kms_inventory_v1_internal::KeyDashboardServiceRetryTraits>;

using KeyDashboardServiceLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        kms_inventory_v1_internal::KeyDashboardServiceRetryTraits>;

using KeyDashboardServiceLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        kms_inventory_v1_internal::KeyDashboardServiceRetryTraits>;

/**
 * The `KeyDashboardServiceConnection` object for `KeyDashboardServiceClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `KeyDashboardServiceClient`. This allows users to inject custom
 * behavior (e.g., with a Google Mock object) when writing tests that use
 * objects of type `KeyDashboardServiceClient`.
 *
 * To create a concrete instance, see `MakeKeyDashboardServiceConnection()`.
 *
 * For mocking, see `kms_inventory_v1_mocks::MockKeyDashboardServiceConnection`.
 */
class KeyDashboardServiceConnection {
 public:
  virtual ~KeyDashboardServiceConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StreamRange<google::cloud::kms::v1::CryptoKey> ListCryptoKeys(
      google::cloud::kms::inventory::v1::ListCryptoKeysRequest request);
};

/**
 * A factory function to construct an object of type
 * `KeyDashboardServiceConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of
 * KeyDashboardServiceClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `KeyDashboardServiceConnection`. Expected options are any of the
 * types in the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::kms_inventory_v1::KeyDashboardServicePolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param options (optional) Configure the `KeyDashboardServiceConnection`
 * created by this function.
 */
std::shared_ptr<KeyDashboardServiceConnection>
MakeKeyDashboardServiceConnection(Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace kms_inventory_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_KMS_INVENTORY_V1_KEY_DASHBOARD_CONNECTION_H
