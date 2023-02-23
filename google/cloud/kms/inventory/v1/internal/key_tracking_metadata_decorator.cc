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
// source: google/cloud/kms/inventory/v1/key_tracking_service.proto

#include "google/cloud/kms/inventory/v1/internal/key_tracking_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/status_or.h"
#include <google/cloud/kms/inventory/v1/key_tracking_service.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace kms_inventory_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

KeyTrackingServiceMetadata::KeyTrackingServiceMetadata(
    std::shared_ptr<KeyTrackingServiceStub> child)
    : child_(std::move(child)),
      api_client_header_(
          google::cloud::internal::ApiClientHeader("generator")) {}

StatusOr<google::cloud::kms::inventory::v1::ProtectedResourcesSummary>
KeyTrackingServiceMetadata::GetProtectedResourcesSummary(
    grpc::ClientContext& context,
    google::cloud::kms::inventory::v1::
        GetProtectedResourcesSummaryRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetProtectedResourcesSummary(context, request);
}

StatusOr<google::cloud::kms::inventory::v1::SearchProtectedResourcesResponse>
KeyTrackingServiceMetadata::SearchProtectedResources(
    grpc::ClientContext& context,
    google::cloud::kms::inventory::v1::SearchProtectedResourcesRequest const&
        request) {
  SetMetadata(context, "scope=" + request.scope());
  return child_->SearchProtectedResources(context, request);
}

void KeyTrackingServiceMetadata::SetMetadata(
    grpc::ClientContext& context, std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context);
}

void KeyTrackingServiceMetadata::SetMetadata(grpc::ClientContext& context) {
  context.AddMetadata("x-goog-api-client", api_client_header_);
  auto const& options = internal::CurrentOptions();
  if (options.has<UserProjectOption>()) {
    context.AddMetadata("x-goog-user-project",
                        options.get<UserProjectOption>());
  }
  auto const& authority = options.get<AuthorityOption>();
  if (!authority.empty()) context.set_authority(authority);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace kms_inventory_v1_internal
}  // namespace cloud
}  // namespace google
