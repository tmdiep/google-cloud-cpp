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

#include "google/cloud/cloudbuild/cloud_build_connection.h"
#include "google/cloud/cloudbuild/cloud_build_options.h"
#include "google/cloud/cloudbuild/internal/cloud_build_option_defaults.h"
#include "google/cloud/cloudbuild/internal/cloud_build_stub_factory.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/async_long_running_operation.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>

namespace google {
namespace cloud {
namespace cloudbuild {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

CloudBuildConnection::~CloudBuildConnection() = default;

future<StatusOr<google::devtools::cloudbuild::v1::Build>>
CloudBuildConnection::CreateBuild(
    google::devtools::cloudbuild::v1::CreateBuildRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::devtools::cloudbuild::v1::Build>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::devtools::cloudbuild::v1::Build>
CloudBuildConnection::GetBuild(
    google::devtools::cloudbuild::v1::GetBuildRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::devtools::cloudbuild::v1::Build>
CloudBuildConnection::ListBuilds(
    google::devtools::cloudbuild::v1::ListBuildsRequest request) {
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::devtools::cloudbuild::v1::Build>>(
      std::move(request),
      [](google::devtools::cloudbuild::v1::ListBuildsRequest const&) {
        return StatusOr<google::devtools::cloudbuild::v1::ListBuildsResponse>{};
      },
      [](google::devtools::cloudbuild::v1::ListBuildsResponse const&) {
        return std::vector<google::devtools::cloudbuild::v1::Build>();
      });
}

StatusOr<google::devtools::cloudbuild::v1::Build>
CloudBuildConnection::CancelBuild(
    google::devtools::cloudbuild::v1::CancelBuildRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::devtools::cloudbuild::v1::Build>>
CloudBuildConnection::RetryBuild(
    google::devtools::cloudbuild::v1::RetryBuildRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::devtools::cloudbuild::v1::Build>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::devtools::cloudbuild::v1::Build>>
CloudBuildConnection::ApproveBuild(
    google::devtools::cloudbuild::v1::ApproveBuildRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::devtools::cloudbuild::v1::Build>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::devtools::cloudbuild::v1::BuildTrigger>
CloudBuildConnection::CreateBuildTrigger(
    google::devtools::cloudbuild::v1::CreateBuildTriggerRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::devtools::cloudbuild::v1::BuildTrigger>
CloudBuildConnection::GetBuildTrigger(
    google::devtools::cloudbuild::v1::GetBuildTriggerRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::devtools::cloudbuild::v1::BuildTrigger>
CloudBuildConnection::ListBuildTriggers(
    google::devtools::cloudbuild::v1::ListBuildTriggersRequest request) {
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::devtools::cloudbuild::v1::BuildTrigger>>(
      std::move(request),
      [](google::devtools::cloudbuild::v1::ListBuildTriggersRequest const&) {
        return StatusOr<
            google::devtools::cloudbuild::v1::ListBuildTriggersResponse>{};
      },
      [](google::devtools::cloudbuild::v1::ListBuildTriggersResponse const&) {
        return std::vector<google::devtools::cloudbuild::v1::BuildTrigger>();
      });
}

Status CloudBuildConnection::DeleteBuildTrigger(
    google::devtools::cloudbuild::v1::DeleteBuildTriggerRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::devtools::cloudbuild::v1::BuildTrigger>
CloudBuildConnection::UpdateBuildTrigger(
    google::devtools::cloudbuild::v1::UpdateBuildTriggerRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::devtools::cloudbuild::v1::Build>>
CloudBuildConnection::RunBuildTrigger(
    google::devtools::cloudbuild::v1::RunBuildTriggerRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::devtools::cloudbuild::v1::Build>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::devtools::cloudbuild::v1::ReceiveTriggerWebhookResponse>
CloudBuildConnection::ReceiveTriggerWebhook(
    google::devtools::cloudbuild::v1::ReceiveTriggerWebhookRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::devtools::cloudbuild::v1::WorkerPool>>
CloudBuildConnection::CreateWorkerPool(
    google::devtools::cloudbuild::v1::CreateWorkerPoolRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::devtools::cloudbuild::v1::WorkerPool>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::devtools::cloudbuild::v1::WorkerPool>
CloudBuildConnection::GetWorkerPool(
    google::devtools::cloudbuild::v1::GetWorkerPoolRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<
    google::devtools::cloudbuild::v1::DeleteWorkerPoolOperationMetadata>>
CloudBuildConnection::DeleteWorkerPool(
    google::devtools::cloudbuild::v1::DeleteWorkerPoolRequest const&) {
  return google::cloud::make_ready_future<StatusOr<
      google::devtools::cloudbuild::v1::DeleteWorkerPoolOperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::devtools::cloudbuild::v1::WorkerPool>>
CloudBuildConnection::UpdateWorkerPool(
    google::devtools::cloudbuild::v1::UpdateWorkerPoolRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::devtools::cloudbuild::v1::WorkerPool>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StreamRange<google::devtools::cloudbuild::v1::WorkerPool>
CloudBuildConnection::ListWorkerPools(
    google::devtools::cloudbuild::v1::ListWorkerPoolsRequest request) {
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::devtools::cloudbuild::v1::WorkerPool>>(
      std::move(request),
      [](google::devtools::cloudbuild::v1::ListWorkerPoolsRequest const&) {
        return StatusOr<
            google::devtools::cloudbuild::v1::ListWorkerPoolsResponse>{};
      },
      [](google::devtools::cloudbuild::v1::ListWorkerPoolsResponse const&) {
        return std::vector<google::devtools::cloudbuild::v1::WorkerPool>();
      });
}

namespace {
class CloudBuildConnectionImpl : public CloudBuildConnection {
 public:
  CloudBuildConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<cloudbuild_internal::CloudBuildStub> stub,
      Options const& options)
      : background_(std::move(background)),
        stub_(std::move(stub)),
        retry_policy_prototype_(
            options.get<CloudBuildRetryPolicyOption>()->clone()),
        backoff_policy_prototype_(
            options.get<CloudBuildBackoffPolicyOption>()->clone()),
        polling_policy_prototype_(
            options.get<CloudBuildPollingPolicyOption>()->clone()),
        idempotency_policy_(
            options.get<CloudBuildConnectionIdempotencyPolicyOption>()
                ->clone()) {}

  ~CloudBuildConnectionImpl() override = default;

  future<StatusOr<google::devtools::cloudbuild::v1::Build>> CreateBuild(
      google::devtools::cloudbuild::v1::CreateBuildRequest const& request)
      override {
    auto stub = stub_;
    return google::cloud::internal::AsyncLongRunningOperation<
        google::devtools::cloudbuild::v1::Build>(
        background_->cq(), request,
        [stub](google::cloud::CompletionQueue& cq,
               std::unique_ptr<grpc::ClientContext> context,
               google::devtools::cloudbuild::v1::CreateBuildRequest const&
                   request) {
          return stub->AsyncCreateBuild(cq, std::move(context), request);
        },
        [stub](google::cloud::CompletionQueue& cq,
               std::unique_ptr<grpc::ClientContext> context,
               google::longrunning::GetOperationRequest const& request) {
          return stub->AsyncGetOperation(cq, std::move(context), request);
        },
        [stub](google::cloud::CompletionQueue& cq,
               std::unique_ptr<grpc::ClientContext> context,
               google::longrunning::CancelOperationRequest const& request) {
          return stub->AsyncCancelOperation(cq, std::move(context), request);
        },
        &google::cloud::internal::ExtractLongRunningResultResponse<
            google::devtools::cloudbuild::v1::Build>,
        retry_policy(), backoff_policy(),
        idempotency_policy()->CreateBuild(request), polling_policy(), __func__);
  }

  StatusOr<google::devtools::cloudbuild::v1::Build> GetBuild(
      google::devtools::cloudbuild::v1::GetBuildRequest const& request)
      override {
    return google::cloud::internal::RetryLoop(
        retry_policy(), backoff_policy(),
        idempotency_policy()->GetBuild(request),
        [this](
            grpc::ClientContext& context,
            google::devtools::cloudbuild::v1::GetBuildRequest const& request) {
          return stub_->GetBuild(context, request);
        },
        request, __func__);
  }

  StreamRange<google::devtools::cloudbuild::v1::Build> ListBuilds(
      google::devtools::cloudbuild::v1::ListBuildsRequest request) override {
    request.clear_page_token();
    auto stub = stub_;
    auto retry = std::shared_ptr<CloudBuildRetryPolicy const>(retry_policy());
    auto backoff = std::shared_ptr<BackoffPolicy const>(backoff_policy());
    auto idempotency = idempotency_policy()->ListBuilds(request);
    char const* function_name = __func__;
    return google::cloud::internal::MakePaginationRange<
        StreamRange<google::devtools::cloudbuild::v1::Build>>(
        std::move(request),
        [stub, retry, backoff, idempotency, function_name](
            google::devtools::cloudbuild::v1::ListBuildsRequest const& r) {
          return google::cloud::internal::RetryLoop(
              retry->clone(), backoff->clone(), idempotency,
              [stub](grpc::ClientContext& context,
                     google::devtools::cloudbuild::v1::ListBuildsRequest const&
                         request) {
                return stub->ListBuilds(context, request);
              },
              r, function_name);
        },
        [](google::devtools::cloudbuild::v1::ListBuildsResponse r) {
          std::vector<google::devtools::cloudbuild::v1::Build> result(
              r.builds().size());
          auto& messages = *r.mutable_builds();
          std::move(messages.begin(), messages.end(), result.begin());
          return result;
        });
  }

  StatusOr<google::devtools::cloudbuild::v1::Build> CancelBuild(
      google::devtools::cloudbuild::v1::CancelBuildRequest const& request)
      override {
    return google::cloud::internal::RetryLoop(
        retry_policy(), backoff_policy(),
        idempotency_policy()->CancelBuild(request),
        [this](grpc::ClientContext& context,
               google::devtools::cloudbuild::v1::CancelBuildRequest const&
                   request) { return stub_->CancelBuild(context, request); },
        request, __func__);
  }

  future<StatusOr<google::devtools::cloudbuild::v1::Build>> RetryBuild(
      google::devtools::cloudbuild::v1::RetryBuildRequest const& request)
      override {
    auto stub = stub_;
    return google::cloud::internal::AsyncLongRunningOperation<
        google::devtools::cloudbuild::v1::Build>(
        background_->cq(), request,
        [stub](google::cloud::CompletionQueue& cq,
               std::unique_ptr<grpc::ClientContext> context,
               google::devtools::cloudbuild::v1::RetryBuildRequest const&
                   request) {
          return stub->AsyncRetryBuild(cq, std::move(context), request);
        },
        [stub](google::cloud::CompletionQueue& cq,
               std::unique_ptr<grpc::ClientContext> context,
               google::longrunning::GetOperationRequest const& request) {
          return stub->AsyncGetOperation(cq, std::move(context), request);
        },
        [stub](google::cloud::CompletionQueue& cq,
               std::unique_ptr<grpc::ClientContext> context,
               google::longrunning::CancelOperationRequest const& request) {
          return stub->AsyncCancelOperation(cq, std::move(context), request);
        },
        &google::cloud::internal::ExtractLongRunningResultResponse<
            google::devtools::cloudbuild::v1::Build>,
        retry_policy(), backoff_policy(),
        idempotency_policy()->RetryBuild(request), polling_policy(), __func__);
  }

  future<StatusOr<google::devtools::cloudbuild::v1::Build>> ApproveBuild(
      google::devtools::cloudbuild::v1::ApproveBuildRequest const& request)
      override {
    auto stub = stub_;
    return google::cloud::internal::AsyncLongRunningOperation<
        google::devtools::cloudbuild::v1::Build>(
        background_->cq(), request,
        [stub](google::cloud::CompletionQueue& cq,
               std::unique_ptr<grpc::ClientContext> context,
               google::devtools::cloudbuild::v1::ApproveBuildRequest const&
                   request) {
          return stub->AsyncApproveBuild(cq, std::move(context), request);
        },
        [stub](google::cloud::CompletionQueue& cq,
               std::unique_ptr<grpc::ClientContext> context,
               google::longrunning::GetOperationRequest const& request) {
          return stub->AsyncGetOperation(cq, std::move(context), request);
        },
        [stub](google::cloud::CompletionQueue& cq,
               std::unique_ptr<grpc::ClientContext> context,
               google::longrunning::CancelOperationRequest const& request) {
          return stub->AsyncCancelOperation(cq, std::move(context), request);
        },
        &google::cloud::internal::ExtractLongRunningResultResponse<
            google::devtools::cloudbuild::v1::Build>,
        retry_policy(), backoff_policy(),
        idempotency_policy()->ApproveBuild(request), polling_policy(),
        __func__);
  }

  StatusOr<google::devtools::cloudbuild::v1::BuildTrigger> CreateBuildTrigger(
      google::devtools::cloudbuild::v1::CreateBuildTriggerRequest const&
          request) override {
    return google::cloud::internal::RetryLoop(
        retry_policy(), backoff_policy(),
        idempotency_policy()->CreateBuildTrigger(request),
        [this](
            grpc::ClientContext& context,
            google::devtools::cloudbuild::v1::CreateBuildTriggerRequest const&
                request) {
          return stub_->CreateBuildTrigger(context, request);
        },
        request, __func__);
  }

  StatusOr<google::devtools::cloudbuild::v1::BuildTrigger> GetBuildTrigger(
      google::devtools::cloudbuild::v1::GetBuildTriggerRequest const& request)
      override {
    return google::cloud::internal::RetryLoop(
        retry_policy(), backoff_policy(),
        idempotency_policy()->GetBuildTrigger(request),
        [this](grpc::ClientContext& context,
               google::devtools::cloudbuild::v1::GetBuildTriggerRequest const&
                   request) {
          return stub_->GetBuildTrigger(context, request);
        },
        request, __func__);
  }

  StreamRange<google::devtools::cloudbuild::v1::BuildTrigger> ListBuildTriggers(
      google::devtools::cloudbuild::v1::ListBuildTriggersRequest request)
      override {
    request.clear_page_token();
    auto stub = stub_;
    auto retry = std::shared_ptr<CloudBuildRetryPolicy const>(retry_policy());
    auto backoff = std::shared_ptr<BackoffPolicy const>(backoff_policy());
    auto idempotency = idempotency_policy()->ListBuildTriggers(request);
    char const* function_name = __func__;
    return google::cloud::internal::MakePaginationRange<
        StreamRange<google::devtools::cloudbuild::v1::BuildTrigger>>(
        std::move(request),
        [stub, retry, backoff, idempotency, function_name](
            google::devtools::cloudbuild::v1::ListBuildTriggersRequest const&
                r) {
          return google::cloud::internal::RetryLoop(
              retry->clone(), backoff->clone(), idempotency,
              [stub](grpc::ClientContext& context,
                     google::devtools::cloudbuild::v1::
                         ListBuildTriggersRequest const& request) {
                return stub->ListBuildTriggers(context, request);
              },
              r, function_name);
        },
        [](google::devtools::cloudbuild::v1::ListBuildTriggersResponse r) {
          std::vector<google::devtools::cloudbuild::v1::BuildTrigger> result(
              r.triggers().size());
          auto& messages = *r.mutable_triggers();
          std::move(messages.begin(), messages.end(), result.begin());
          return result;
        });
  }

  Status DeleteBuildTrigger(
      google::devtools::cloudbuild::v1::DeleteBuildTriggerRequest const&
          request) override {
    return google::cloud::internal::RetryLoop(
        retry_policy(), backoff_policy(),
        idempotency_policy()->DeleteBuildTrigger(request),
        [this](
            grpc::ClientContext& context,
            google::devtools::cloudbuild::v1::DeleteBuildTriggerRequest const&
                request) {
          return stub_->DeleteBuildTrigger(context, request);
        },
        request, __func__);
  }

  StatusOr<google::devtools::cloudbuild::v1::BuildTrigger> UpdateBuildTrigger(
      google::devtools::cloudbuild::v1::UpdateBuildTriggerRequest const&
          request) override {
    return google::cloud::internal::RetryLoop(
        retry_policy(), backoff_policy(),
        idempotency_policy()->UpdateBuildTrigger(request),
        [this](
            grpc::ClientContext& context,
            google::devtools::cloudbuild::v1::UpdateBuildTriggerRequest const&
                request) {
          return stub_->UpdateBuildTrigger(context, request);
        },
        request, __func__);
  }

  future<StatusOr<google::devtools::cloudbuild::v1::Build>> RunBuildTrigger(
      google::devtools::cloudbuild::v1::RunBuildTriggerRequest const& request)
      override {
    auto stub = stub_;
    return google::cloud::internal::AsyncLongRunningOperation<
        google::devtools::cloudbuild::v1::Build>(
        background_->cq(), request,
        [stub](google::cloud::CompletionQueue& cq,
               std::unique_ptr<grpc::ClientContext> context,
               google::devtools::cloudbuild::v1::RunBuildTriggerRequest const&
                   request) {
          return stub->AsyncRunBuildTrigger(cq, std::move(context), request);
        },
        [stub](google::cloud::CompletionQueue& cq,
               std::unique_ptr<grpc::ClientContext> context,
               google::longrunning::GetOperationRequest const& request) {
          return stub->AsyncGetOperation(cq, std::move(context), request);
        },
        [stub](google::cloud::CompletionQueue& cq,
               std::unique_ptr<grpc::ClientContext> context,
               google::longrunning::CancelOperationRequest const& request) {
          return stub->AsyncCancelOperation(cq, std::move(context), request);
        },
        &google::cloud::internal::ExtractLongRunningResultResponse<
            google::devtools::cloudbuild::v1::Build>,
        retry_policy(), backoff_policy(),
        idempotency_policy()->RunBuildTrigger(request), polling_policy(),
        __func__);
  }

  StatusOr<google::devtools::cloudbuild::v1::ReceiveTriggerWebhookResponse>
  ReceiveTriggerWebhook(
      google::devtools::cloudbuild::v1::ReceiveTriggerWebhookRequest const&
          request) override {
    return google::cloud::internal::RetryLoop(
        retry_policy(), backoff_policy(),
        idempotency_policy()->ReceiveTriggerWebhook(request),
        [this](grpc::ClientContext& context,
               google::devtools::cloudbuild::v1::
                   ReceiveTriggerWebhookRequest const& request) {
          return stub_->ReceiveTriggerWebhook(context, request);
        },
        request, __func__);
  }

  future<StatusOr<google::devtools::cloudbuild::v1::WorkerPool>>
  CreateWorkerPool(
      google::devtools::cloudbuild::v1::CreateWorkerPoolRequest const& request)
      override {
    auto stub = stub_;
    return google::cloud::internal::AsyncLongRunningOperation<
        google::devtools::cloudbuild::v1::WorkerPool>(
        background_->cq(), request,
        [stub](google::cloud::CompletionQueue& cq,
               std::unique_ptr<grpc::ClientContext> context,
               google::devtools::cloudbuild::v1::CreateWorkerPoolRequest const&
                   request) {
          return stub->AsyncCreateWorkerPool(cq, std::move(context), request);
        },
        [stub](google::cloud::CompletionQueue& cq,
               std::unique_ptr<grpc::ClientContext> context,
               google::longrunning::GetOperationRequest const& request) {
          return stub->AsyncGetOperation(cq, std::move(context), request);
        },
        [stub](google::cloud::CompletionQueue& cq,
               std::unique_ptr<grpc::ClientContext> context,
               google::longrunning::CancelOperationRequest const& request) {
          return stub->AsyncCancelOperation(cq, std::move(context), request);
        },
        &google::cloud::internal::ExtractLongRunningResultResponse<
            google::devtools::cloudbuild::v1::WorkerPool>,
        retry_policy(), backoff_policy(),
        idempotency_policy()->CreateWorkerPool(request), polling_policy(),
        __func__);
  }

  StatusOr<google::devtools::cloudbuild::v1::WorkerPool> GetWorkerPool(
      google::devtools::cloudbuild::v1::GetWorkerPoolRequest const& request)
      override {
    return google::cloud::internal::RetryLoop(
        retry_policy(), backoff_policy(),
        idempotency_policy()->GetWorkerPool(request),
        [this](grpc::ClientContext& context,
               google::devtools::cloudbuild::v1::GetWorkerPoolRequest const&
                   request) { return stub_->GetWorkerPool(context, request); },
        request, __func__);
  }

  future<StatusOr<
      google::devtools::cloudbuild::v1::DeleteWorkerPoolOperationMetadata>>
  DeleteWorkerPool(
      google::devtools::cloudbuild::v1::DeleteWorkerPoolRequest const& request)
      override {
    auto stub = stub_;
    return google::cloud::internal::AsyncLongRunningOperation<
        google::devtools::cloudbuild::v1::DeleteWorkerPoolOperationMetadata>(
        background_->cq(), request,
        [stub](google::cloud::CompletionQueue& cq,
               std::unique_ptr<grpc::ClientContext> context,
               google::devtools::cloudbuild::v1::DeleteWorkerPoolRequest const&
                   request) {
          return stub->AsyncDeleteWorkerPool(cq, std::move(context), request);
        },
        [stub](google::cloud::CompletionQueue& cq,
               std::unique_ptr<grpc::ClientContext> context,
               google::longrunning::GetOperationRequest const& request) {
          return stub->AsyncGetOperation(cq, std::move(context), request);
        },
        [stub](google::cloud::CompletionQueue& cq,
               std::unique_ptr<grpc::ClientContext> context,
               google::longrunning::CancelOperationRequest const& request) {
          return stub->AsyncCancelOperation(cq, std::move(context), request);
        },
        &google::cloud::internal::ExtractLongRunningResultMetadata<
            google::devtools::cloudbuild::v1::
                DeleteWorkerPoolOperationMetadata>,
        retry_policy(), backoff_policy(),
        idempotency_policy()->DeleteWorkerPool(request), polling_policy(),
        __func__);
  }

  future<StatusOr<google::devtools::cloudbuild::v1::WorkerPool>>
  UpdateWorkerPool(
      google::devtools::cloudbuild::v1::UpdateWorkerPoolRequest const& request)
      override {
    auto stub = stub_;
    return google::cloud::internal::AsyncLongRunningOperation<
        google::devtools::cloudbuild::v1::WorkerPool>(
        background_->cq(), request,
        [stub](google::cloud::CompletionQueue& cq,
               std::unique_ptr<grpc::ClientContext> context,
               google::devtools::cloudbuild::v1::UpdateWorkerPoolRequest const&
                   request) {
          return stub->AsyncUpdateWorkerPool(cq, std::move(context), request);
        },
        [stub](google::cloud::CompletionQueue& cq,
               std::unique_ptr<grpc::ClientContext> context,
               google::longrunning::GetOperationRequest const& request) {
          return stub->AsyncGetOperation(cq, std::move(context), request);
        },
        [stub](google::cloud::CompletionQueue& cq,
               std::unique_ptr<grpc::ClientContext> context,
               google::longrunning::CancelOperationRequest const& request) {
          return stub->AsyncCancelOperation(cq, std::move(context), request);
        },
        &google::cloud::internal::ExtractLongRunningResultResponse<
            google::devtools::cloudbuild::v1::WorkerPool>,
        retry_policy(), backoff_policy(),
        idempotency_policy()->UpdateWorkerPool(request), polling_policy(),
        __func__);
  }

  StreamRange<google::devtools::cloudbuild::v1::WorkerPool> ListWorkerPools(
      google::devtools::cloudbuild::v1::ListWorkerPoolsRequest request)
      override {
    request.clear_page_token();
    auto stub = stub_;
    auto retry = std::shared_ptr<CloudBuildRetryPolicy const>(retry_policy());
    auto backoff = std::shared_ptr<BackoffPolicy const>(backoff_policy());
    auto idempotency = idempotency_policy()->ListWorkerPools(request);
    char const* function_name = __func__;
    return google::cloud::internal::MakePaginationRange<
        StreamRange<google::devtools::cloudbuild::v1::WorkerPool>>(
        std::move(request),
        [stub, retry, backoff, idempotency, function_name](
            google::devtools::cloudbuild::v1::ListWorkerPoolsRequest const& r) {
          return google::cloud::internal::RetryLoop(
              retry->clone(), backoff->clone(), idempotency,
              [stub](grpc::ClientContext& context,
                     google::devtools::cloudbuild::v1::
                         ListWorkerPoolsRequest const& request) {
                return stub->ListWorkerPools(context, request);
              },
              r, function_name);
        },
        [](google::devtools::cloudbuild::v1::ListWorkerPoolsResponse r) {
          std::vector<google::devtools::cloudbuild::v1::WorkerPool> result(
              r.worker_pools().size());
          auto& messages = *r.mutable_worker_pools();
          std::move(messages.begin(), messages.end(), result.begin());
          return result;
        });
  }

 private:
  std::unique_ptr<CloudBuildRetryPolicy> retry_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<CloudBuildRetryPolicyOption>()) {
      return options.get<CloudBuildRetryPolicyOption>()->clone();
    }
    return retry_policy_prototype_->clone();
  }

  std::unique_ptr<BackoffPolicy> backoff_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<CloudBuildBackoffPolicyOption>()) {
      return options.get<CloudBuildBackoffPolicyOption>()->clone();
    }
    return backoff_policy_prototype_->clone();
  }

  std::unique_ptr<PollingPolicy> polling_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<CloudBuildPollingPolicyOption>()) {
      return options.get<CloudBuildPollingPolicyOption>()->clone();
    }
    return polling_policy_prototype_->clone();
  }

  std::unique_ptr<CloudBuildConnectionIdempotencyPolicy> idempotency_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<CloudBuildConnectionIdempotencyPolicyOption>()) {
      return options.get<CloudBuildConnectionIdempotencyPolicyOption>()
          ->clone();
    }
    return idempotency_policy_->clone();
  }

  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<cloudbuild_internal::CloudBuildStub> stub_;
  std::unique_ptr<CloudBuildRetryPolicy const> retry_policy_prototype_;
  std::unique_ptr<BackoffPolicy const> backoff_policy_prototype_;
  std::unique_ptr<PollingPolicy const> polling_policy_prototype_;
  std::unique_ptr<CloudBuildConnectionIdempotencyPolicy> idempotency_policy_;
};
}  // namespace

std::shared_ptr<CloudBuildConnection> MakeCloudBuildConnection(
    Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 CloudBuildPolicyOptionList>(options, __func__);
  options = cloudbuild_internal::CloudBuildDefaultOptions(std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto stub = cloudbuild_internal::CreateDefaultCloudBuildStub(background->cq(),
                                                               options);
  return std::make_shared<CloudBuildConnectionImpl>(std::move(background),
                                                    std::move(stub), options);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace cloudbuild
}  // namespace cloud
}  // namespace google

namespace google {
namespace cloud {
namespace cloudbuild_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

std::shared_ptr<cloudbuild::CloudBuildConnection> MakeCloudBuildConnection(
    std::shared_ptr<CloudBuildStub> stub, Options options) {
  options = CloudBuildDefaultOptions(std::move(options));
  return std::make_shared<cloudbuild::CloudBuildConnectionImpl>(
      internal::MakeBackgroundThreadsFactory(options)(), std::move(stub),
      std::move(options));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace cloudbuild_internal
}  // namespace cloud
}  // namespace google
