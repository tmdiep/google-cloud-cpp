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
// source: google/cloud/documentai/v1/document_processor_service.proto

#include "google/cloud/documentai/internal/document_processor_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/status_or.h"
#include <google/cloud/documentai/v1/document_processor_service.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace documentai_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DocumentProcessorServiceMetadata::DocumentProcessorServiceMetadata(
    std::shared_ptr<DocumentProcessorServiceStub> child)
    : child_(std::move(child)),
      api_client_header_(
          google::cloud::internal::ApiClientHeader("generator")) {}

StatusOr<google::cloud::documentai::v1::ProcessResponse>
DocumentProcessorServiceMetadata::ProcessDocument(
    grpc::ClientContext& context,
    google::cloud::documentai::v1::ProcessRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->ProcessDocument(context, request);
}

future<StatusOr<google::longrunning::Operation>>
DocumentProcessorServiceMetadata::AsyncBatchProcessDocuments(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::documentai::v1::BatchProcessRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncBatchProcessDocuments(cq, std::move(context), request);
}

StatusOr<google::cloud::documentai::v1::FetchProcessorTypesResponse>
DocumentProcessorServiceMetadata::FetchProcessorTypes(
    grpc::ClientContext& context,
    google::cloud::documentai::v1::FetchProcessorTypesRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->FetchProcessorTypes(context, request);
}

StatusOr<google::cloud::documentai::v1::ListProcessorTypesResponse>
DocumentProcessorServiceMetadata::ListProcessorTypes(
    grpc::ClientContext& context,
    google::cloud::documentai::v1::ListProcessorTypesRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListProcessorTypes(context, request);
}

StatusOr<google::cloud::documentai::v1::ProcessorType>
DocumentProcessorServiceMetadata::GetProcessorType(
    grpc::ClientContext& context,
    google::cloud::documentai::v1::GetProcessorTypeRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetProcessorType(context, request);
}

StatusOr<google::cloud::documentai::v1::ListProcessorsResponse>
DocumentProcessorServiceMetadata::ListProcessors(
    grpc::ClientContext& context,
    google::cloud::documentai::v1::ListProcessorsRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListProcessors(context, request);
}

StatusOr<google::cloud::documentai::v1::Processor>
DocumentProcessorServiceMetadata::GetProcessor(
    grpc::ClientContext& context,
    google::cloud::documentai::v1::GetProcessorRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetProcessor(context, request);
}

StatusOr<google::cloud::documentai::v1::ProcessorVersion>
DocumentProcessorServiceMetadata::GetProcessorVersion(
    grpc::ClientContext& context,
    google::cloud::documentai::v1::GetProcessorVersionRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetProcessorVersion(context, request);
}

StatusOr<google::cloud::documentai::v1::ListProcessorVersionsResponse>
DocumentProcessorServiceMetadata::ListProcessorVersions(
    grpc::ClientContext& context,
    google::cloud::documentai::v1::ListProcessorVersionsRequest const&
        request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListProcessorVersions(context, request);
}

future<StatusOr<google::longrunning::Operation>>
DocumentProcessorServiceMetadata::AsyncDeleteProcessorVersion(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::documentai::v1::DeleteProcessorVersionRequest const&
        request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncDeleteProcessorVersion(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
DocumentProcessorServiceMetadata::AsyncDeployProcessorVersion(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::documentai::v1::DeployProcessorVersionRequest const&
        request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncDeployProcessorVersion(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
DocumentProcessorServiceMetadata::AsyncUndeployProcessorVersion(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::documentai::v1::UndeployProcessorVersionRequest const&
        request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncUndeployProcessorVersion(cq, std::move(context), request);
}

StatusOr<google::cloud::documentai::v1::Processor>
DocumentProcessorServiceMetadata::CreateProcessor(
    grpc::ClientContext& context,
    google::cloud::documentai::v1::CreateProcessorRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->CreateProcessor(context, request);
}

future<StatusOr<google::longrunning::Operation>>
DocumentProcessorServiceMetadata::AsyncDeleteProcessor(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::documentai::v1::DeleteProcessorRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncDeleteProcessor(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
DocumentProcessorServiceMetadata::AsyncEnableProcessor(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::documentai::v1::EnableProcessorRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncEnableProcessor(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
DocumentProcessorServiceMetadata::AsyncDisableProcessor(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::documentai::v1::DisableProcessorRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncDisableProcessor(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
DocumentProcessorServiceMetadata::AsyncSetDefaultProcessorVersion(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::documentai::v1::SetDefaultProcessorVersionRequest const&
        request) {
  SetMetadata(*context, "processor=" + request.processor());
  return child_->AsyncSetDefaultProcessorVersion(cq, std::move(context),
                                                 request);
}

future<StatusOr<google::longrunning::Operation>>
DocumentProcessorServiceMetadata::AsyncReviewDocument(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::documentai::v1::ReviewDocumentRequest const& request) {
  SetMetadata(*context, "human_review_config=" + request.human_review_config());
  return child_->AsyncReviewDocument(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
DocumentProcessorServiceMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncGetOperation(cq, std::move(context), request);
}

future<Status> DocumentProcessorServiceMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncCancelOperation(cq, std::move(context), request);
}

void DocumentProcessorServiceMetadata::SetMetadata(
    grpc::ClientContext& context, std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context);
}

void DocumentProcessorServiceMetadata::SetMetadata(
    grpc::ClientContext& context) {
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
}  // namespace documentai_internal
}  // namespace cloud
}  // namespace google
