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
// source: google/cloud/shell/v1/cloudshell.proto

#include "google/cloud/shell/internal/cloud_shell_connection_impl.h"
#include "google/cloud/shell/internal/cloud_shell_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/async_long_running_operation.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>

namespace google {
namespace cloud {
namespace shell_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

CloudShellServiceConnectionImpl::CloudShellServiceConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<shell_internal::CloudShellServiceStub> stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(
          std::move(options), CloudShellServiceConnection::options())) {}

StatusOr<google::cloud::shell::v1::Environment>
CloudShellServiceConnectionImpl::GetEnvironment(
    google::cloud::shell::v1::GetEnvironmentRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->GetEnvironment(request),
      [this](grpc::ClientContext& context,
             google::cloud::shell::v1::GetEnvironmentRequest const& request) {
        return stub_->GetEnvironment(context, request);
      },
      request, __func__);
}

future<StatusOr<google::cloud::shell::v1::StartEnvironmentResponse>>
CloudShellServiceConnectionImpl::StartEnvironment(
    google::cloud::shell::v1::StartEnvironmentRequest const& request) {
  auto& stub = stub_;
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::shell::v1::StartEnvironmentResponse>(
      background_->cq(), request,
      [stub](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::cloud::shell::v1::StartEnvironmentRequest const& request) {
        return stub->AsyncStartEnvironment(cq, std::move(context), request);
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
          google::cloud::shell::v1::StartEnvironmentResponse>,
      retry_policy(), backoff_policy(),
      idempotency_policy()->StartEnvironment(request), polling_policy(),
      __func__);
}

future<StatusOr<google::cloud::shell::v1::AuthorizeEnvironmentResponse>>
CloudShellServiceConnectionImpl::AuthorizeEnvironment(
    google::cloud::shell::v1::AuthorizeEnvironmentRequest const& request) {
  auto& stub = stub_;
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::shell::v1::AuthorizeEnvironmentResponse>(
      background_->cq(), request,
      [stub](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::cloud::shell::v1::AuthorizeEnvironmentRequest const&
                 request) {
        return stub->AsyncAuthorizeEnvironment(cq, std::move(context), request);
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
          google::cloud::shell::v1::AuthorizeEnvironmentResponse>,
      retry_policy(), backoff_policy(),
      idempotency_policy()->AuthorizeEnvironment(request), polling_policy(),
      __func__);
}

future<StatusOr<google::cloud::shell::v1::AddPublicKeyResponse>>
CloudShellServiceConnectionImpl::AddPublicKey(
    google::cloud::shell::v1::AddPublicKeyRequest const& request) {
  auto& stub = stub_;
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::shell::v1::AddPublicKeyResponse>(
      background_->cq(), request,
      [stub](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::cloud::shell::v1::AddPublicKeyRequest const& request) {
        return stub->AsyncAddPublicKey(cq, std::move(context), request);
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
          google::cloud::shell::v1::AddPublicKeyResponse>,
      retry_policy(), backoff_policy(),
      idempotency_policy()->AddPublicKey(request), polling_policy(), __func__);
}

future<StatusOr<google::cloud::shell::v1::RemovePublicKeyResponse>>
CloudShellServiceConnectionImpl::RemovePublicKey(
    google::cloud::shell::v1::RemovePublicKeyRequest const& request) {
  auto& stub = stub_;
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::shell::v1::RemovePublicKeyResponse>(
      background_->cq(), request,
      [stub](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::cloud::shell::v1::RemovePublicKeyRequest const& request) {
        return stub->AsyncRemovePublicKey(cq, std::move(context), request);
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
          google::cloud::shell::v1::RemovePublicKeyResponse>,
      retry_policy(), backoff_policy(),
      idempotency_policy()->RemovePublicKey(request), polling_policy(),
      __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace shell_internal
}  // namespace cloud
}  // namespace google
