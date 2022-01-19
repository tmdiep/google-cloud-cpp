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
// source: google/devtools/cloudbuild/v1/cloudbuild.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CLOUDBUILD_INTERNAL_CLOUD_BUILD_AUTH_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CLOUDBUILD_INTERNAL_CLOUD_BUILD_AUTH_DECORATOR_H

#include "google/cloud/cloudbuild/internal/cloud_build_stub.h"
#include "google/cloud/internal/unified_grpc_credentials.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <set>
#include <string>

namespace google {
namespace cloud {
namespace cloudbuild_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class CloudBuildAuth : public CloudBuildStub {
 public:
  ~CloudBuildAuth() override = default;
  CloudBuildAuth(
      std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
      std::shared_ptr<CloudBuildStub> child);

  future<StatusOr<google::longrunning::Operation>> AsyncCreateBuild(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::devtools::cloudbuild::v1::CreateBuildRequest const& request)
      override;

  StatusOr<google::devtools::cloudbuild::v1::Build> GetBuild(
      grpc::ClientContext& context,
      google::devtools::cloudbuild::v1::GetBuildRequest const& request)
      override;

  StatusOr<google::devtools::cloudbuild::v1::ListBuildsResponse> ListBuilds(
      grpc::ClientContext& context,
      google::devtools::cloudbuild::v1::ListBuildsRequest const& request)
      override;

  StatusOr<google::devtools::cloudbuild::v1::Build> CancelBuild(
      grpc::ClientContext& context,
      google::devtools::cloudbuild::v1::CancelBuildRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncRetryBuild(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::devtools::cloudbuild::v1::RetryBuildRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncApproveBuild(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::devtools::cloudbuild::v1::ApproveBuildRequest const& request)
      override;

  StatusOr<google::devtools::cloudbuild::v1::BuildTrigger> CreateBuildTrigger(
      grpc::ClientContext& context,
      google::devtools::cloudbuild::v1::CreateBuildTriggerRequest const&
          request) override;

  StatusOr<google::devtools::cloudbuild::v1::BuildTrigger> GetBuildTrigger(
      grpc::ClientContext& context,
      google::devtools::cloudbuild::v1::GetBuildTriggerRequest const& request)
      override;

  StatusOr<google::devtools::cloudbuild::v1::ListBuildTriggersResponse>
  ListBuildTriggers(
      grpc::ClientContext& context,
      google::devtools::cloudbuild::v1::ListBuildTriggersRequest const& request)
      override;

  Status DeleteBuildTrigger(
      grpc::ClientContext& context,
      google::devtools::cloudbuild::v1::DeleteBuildTriggerRequest const&
          request) override;

  StatusOr<google::devtools::cloudbuild::v1::BuildTrigger> UpdateBuildTrigger(
      grpc::ClientContext& context,
      google::devtools::cloudbuild::v1::UpdateBuildTriggerRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncRunBuildTrigger(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::devtools::cloudbuild::v1::RunBuildTriggerRequest const& request)
      override;

  StatusOr<google::devtools::cloudbuild::v1::ReceiveTriggerWebhookResponse>
  ReceiveTriggerWebhook(
      grpc::ClientContext& context,
      google::devtools::cloudbuild::v1::ReceiveTriggerWebhookRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateWorkerPool(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::devtools::cloudbuild::v1::CreateWorkerPoolRequest const& request)
      override;

  StatusOr<google::devtools::cloudbuild::v1::WorkerPool> GetWorkerPool(
      grpc::ClientContext& context,
      google::devtools::cloudbuild::v1::GetWorkerPoolRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteWorkerPool(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::devtools::cloudbuild::v1::DeleteWorkerPoolRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateWorkerPool(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::devtools::cloudbuild::v1::UpdateWorkerPoolRequest const& request)
      override;

  StatusOr<google::devtools::cloudbuild::v1::ListWorkerPoolsResponse>
  ListWorkerPools(
      grpc::ClientContext& context,
      google::devtools::cloudbuild::v1::ListWorkerPoolsRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth_;
  std::shared_ptr<CloudBuildStub> child_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace cloudbuild_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CLOUDBUILD_INTERNAL_CLOUD_BUILD_AUTH_DECORATOR_H
