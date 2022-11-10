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
// source: google/cloud/connectors/v1/connectors_service.proto

#include "google/cloud/connectors/internal/connectors_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <google/cloud/connectors/v1/connectors_service.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace connectors_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ConnectorsLogging::ConnectorsLogging(std::shared_ptr<ConnectorsStub> child,
                                     TracingOptions tracing_options,
                                     std::set<std::string> components)
    : child_(std::move(child)),
      tracing_options_(std::move(tracing_options)),
      components_(std::move(components)) {}

StatusOr<google::cloud::connectors::v1::ListConnectionsResponse>
ConnectorsLogging::ListConnections(
    grpc::ClientContext& context,
    google::cloud::connectors::v1::ListConnectionsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::connectors::v1::ListConnectionsRequest const&
                 request) { return child_->ListConnections(context, request); },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::connectors::v1::Connection>
ConnectorsLogging::GetConnection(
    grpc::ClientContext& context,
    google::cloud::connectors::v1::GetConnectionRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context,
          google::cloud::connectors::v1::GetConnectionRequest const& request) {
        return child_->GetConnection(context, request);
      },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
ConnectorsLogging::AsyncCreateConnection(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::connectors::v1::CreateConnectionRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::cloud::connectors::v1::CreateConnectionRequest const&
                 request) {
        return child_->AsyncCreateConnection(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
ConnectorsLogging::AsyncUpdateConnection(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::connectors::v1::UpdateConnectionRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::cloud::connectors::v1::UpdateConnectionRequest const&
                 request) {
        return child_->AsyncUpdateConnection(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
ConnectorsLogging::AsyncDeleteConnection(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::connectors::v1::DeleteConnectionRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::cloud::connectors::v1::DeleteConnectionRequest const&
                 request) {
        return child_->AsyncDeleteConnection(cq, std::move(context), request);
      },
      cq, std::move(context), request, __func__, tracing_options_);
}

StatusOr<google::cloud::connectors::v1::ListProvidersResponse>
ConnectorsLogging::ListProviders(
    grpc::ClientContext& context,
    google::cloud::connectors::v1::ListProvidersRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context,
          google::cloud::connectors::v1::ListProvidersRequest const& request) {
        return child_->ListProviders(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::connectors::v1::Provider>
ConnectorsLogging::GetProvider(
    grpc::ClientContext& context,
    google::cloud::connectors::v1::GetProviderRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::connectors::v1::GetProviderRequest const& request) {
        return child_->GetProvider(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::connectors::v1::ListConnectorsResponse>
ConnectorsLogging::ListConnectors(
    grpc::ClientContext& context,
    google::cloud::connectors::v1::ListConnectorsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context,
          google::cloud::connectors::v1::ListConnectorsRequest const& request) {
        return child_->ListConnectors(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::connectors::v1::Connector>
ConnectorsLogging::GetConnector(
    grpc::ClientContext& context,
    google::cloud::connectors::v1::GetConnectorRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context,
          google::cloud::connectors::v1::GetConnectorRequest const& request) {
        return child_->GetConnector(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::connectors::v1::ListConnectorVersionsResponse>
ConnectorsLogging::ListConnectorVersions(
    grpc::ClientContext& context,
    google::cloud::connectors::v1::ListConnectorVersionsRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::connectors::v1::ListConnectorVersionsRequest const&
                 request) {
        return child_->ListConnectorVersions(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::connectors::v1::ConnectorVersion>
ConnectorsLogging::GetConnectorVersion(
    grpc::ClientContext& context,
    google::cloud::connectors::v1::GetConnectorVersionRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::connectors::v1::GetConnectorVersionRequest const&
                 request) {
        return child_->GetConnectorVersion(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::connectors::v1::ConnectionSchemaMetadata>
ConnectorsLogging::GetConnectionSchemaMetadata(
    grpc::ClientContext& context,
    google::cloud::connectors::v1::GetConnectionSchemaMetadataRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::connectors::v1::
                 GetConnectionSchemaMetadataRequest const& request) {
        return child_->GetConnectionSchemaMetadata(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::connectors::v1::ListRuntimeEntitySchemasResponse>
ConnectorsLogging::ListRuntimeEntitySchemas(
    grpc::ClientContext& context,
    google::cloud::connectors::v1::ListRuntimeEntitySchemasRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context,
          google::cloud::connectors::v1::ListRuntimeEntitySchemasRequest const&
              request) {
        return child_->ListRuntimeEntitySchemas(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::connectors::v1::ListRuntimeActionSchemasResponse>
ConnectorsLogging::ListRuntimeActionSchemas(
    grpc::ClientContext& context,
    google::cloud::connectors::v1::ListRuntimeActionSchemasRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context,
          google::cloud::connectors::v1::ListRuntimeActionSchemasRequest const&
              request) {
        return child_->ListRuntimeActionSchemas(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::connectors::v1::RuntimeConfig>
ConnectorsLogging::GetRuntimeConfig(
    grpc::ClientContext& context,
    google::cloud::connectors::v1::GetRuntimeConfigRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::connectors::v1::GetRuntimeConfigRequest const&
                 request) {
        return child_->GetRuntimeConfig(context, request);
      },
      context, request, __func__, tracing_options_);
}

future<StatusOr<google::longrunning::Operation>>
ConnectorsLogging::AsyncGetOperation(
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

future<Status> ConnectorsLogging::AsyncCancelOperation(
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
}  // namespace connectors_internal
}  // namespace cloud
}  // namespace google
