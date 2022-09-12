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

#include "google/cloud/networkconnectivity/internal/hub_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <google/cloud/networkconnectivity/v1/hub.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace networkconnectivity_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

HubServiceLogging::HubServiceLogging(std::shared_ptr<HubServiceStub> child,
                                     TracingOptions tracing_options,
                                     std::set<std::string> components)
    : child_(std::move(child)),
      tracing_options_(std::move(tracing_options)),
      components_(std::move(components)) {}

StatusOr<google::cloud::networkconnectivity::v1::ListHubsResponse>
HubServiceLogging::ListHubs(
    grpc::ClientContext& context,
    google::cloud::networkconnectivity::v1::ListHubsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::networkconnectivity::v1::ListHubsRequest const&
                 request) { return child_->ListHubs(context, request); },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::networkconnectivity::v1::Hub> HubServiceLogging::GetHub(
    grpc::ClientContext& context,
    google::cloud::networkconnectivity::v1::GetHubRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::networkconnectivity::v1::GetHubRequest const&
                 request) { return child_->GetHub(context, request); },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
HubServiceLogging::AsyncCreateHub(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::networkconnectivity::v1::CreateHubRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::cloud::networkconnectivity::v1::CreateHubRequest const&
                 request) {
        return child_->AsyncCreateHub(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
HubServiceLogging::AsyncUpdateHub(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::networkconnectivity::v1::UpdateHubRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::cloud::networkconnectivity::v1::UpdateHubRequest const&
                 request) {
        return child_->AsyncUpdateHub(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
HubServiceLogging::AsyncDeleteHub(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::networkconnectivity::v1::DeleteHubRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::cloud::networkconnectivity::v1::DeleteHubRequest const&
                 request) {
        return child_->AsyncDeleteHub(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

StatusOr<google::cloud::networkconnectivity::v1::ListSpokesResponse>
HubServiceLogging::ListSpokes(
    grpc::ClientContext& context,
    google::cloud::networkconnectivity::v1::ListSpokesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::networkconnectivity::v1::ListSpokesRequest const&
                 request) { return child_->ListSpokes(context, request); },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::networkconnectivity::v1::Spoke>
HubServiceLogging::GetSpoke(
    grpc::ClientContext& context,
    google::cloud::networkconnectivity::v1::GetSpokeRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::networkconnectivity::v1::GetSpokeRequest const&
                 request) { return child_->GetSpoke(context, request); },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
HubServiceLogging::AsyncCreateSpoke(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::networkconnectivity::v1::CreateSpokeRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::cloud::networkconnectivity::v1::CreateSpokeRequest const&
                 request) {
        return child_->AsyncCreateSpoke(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
HubServiceLogging::AsyncUpdateSpoke(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::networkconnectivity::v1::UpdateSpokeRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::cloud::networkconnectivity::v1::UpdateSpokeRequest const&
                 request) {
        return child_->AsyncUpdateSpoke(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
HubServiceLogging::AsyncDeleteSpoke(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::networkconnectivity::v1::DeleteSpokeRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::cloud::networkconnectivity::v1::DeleteSpokeRequest const&
                 request) {
        return child_->AsyncDeleteSpoke(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
HubServiceLogging::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::longrunning::GetOperationRequest const& request) {
        return child_->AsyncGetOperation(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<Status> HubServiceLogging::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::longrunning::CancelOperationRequest const& request) {
        return child_->AsyncCancelOperation(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace networkconnectivity_internal
}  // namespace cloud
}  // namespace google
