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

#include "google/cloud/kms/inventory/v1/internal/key_dashboard_connection_impl.h"
#include "google/cloud/kms/inventory/v1/internal/key_dashboard_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>

namespace google {
namespace cloud {
namespace kms_inventory_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

KeyDashboardServiceConnectionImpl::KeyDashboardServiceConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<kms_inventory_v1_internal::KeyDashboardServiceStub> stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(
          std::move(options), KeyDashboardServiceConnection::options())) {}

StreamRange<google::cloud::kms::v1::CryptoKey>
KeyDashboardServiceConnectionImpl::ListCryptoKeys(
    google::cloud::kms::inventory::v1::ListCryptoKeysRequest request) {
  request.clear_page_token();
  auto& stub = stub_;
  auto retry =
      std::shared_ptr<kms_inventory_v1::KeyDashboardServiceRetryPolicy const>(
          retry_policy());
  auto backoff = std::shared_ptr<BackoffPolicy const>(backoff_policy());
  auto idempotency = idempotency_policy()->ListCryptoKeys(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::kms::v1::CryptoKey>>(
      std::move(request),
      [stub, retry, backoff, idempotency, function_name](
          google::cloud::kms::inventory::v1::ListCryptoKeysRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](
                grpc::ClientContext& context,
                google::cloud::kms::inventory::v1::ListCryptoKeysRequest const&
                    request) { return stub->ListCryptoKeys(context, request); },
            r, function_name);
      },
      [](google::cloud::kms::inventory::v1::ListCryptoKeysResponse r) {
        std::vector<google::cloud::kms::v1::CryptoKey> result(
            r.crypto_keys().size());
        auto& messages = *r.mutable_crypto_keys();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace kms_inventory_v1_internal
}  // namespace cloud
}  // namespace google
