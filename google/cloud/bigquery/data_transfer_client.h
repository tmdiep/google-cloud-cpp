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
// source: google/cloud/bigquery/datatransfer/v1/datatransfer.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_DATA_TRANSFER_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_DATA_TRANSFER_CLIENT_H

#include "google/cloud/bigquery/data_transfer_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace bigquery {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// This API allows users to manage their data transfers into BigQuery.
///
/// @par Equality
///
/// Instances of this class created via copy-construction or copy-assignment
/// always compare equal. Instances created with equal
/// `std::shared_ptr<*Connection>` objects compare equal. Objects that compare
/// equal share the same underlying resources.
///
/// @par Performance
///
/// Creating a new instance of this class is a relatively expensive operation,
/// new objects establish new connections to the service. In contrast,
/// copy-construction, move-construction, and the corresponding assignment
/// operations are relatively efficient as the copies share all underlying
/// resources.
///
/// @par Thread Safety
///
/// Concurrent access to different instances of this class, even if they compare
/// equal, is guaranteed to work. Two or more threads operating on the same
/// instance of this class is not guaranteed to work. Since copy-construction
/// and move-construction is a relatively efficient operation, consider using
/// such a copy when using this class from multiple threads.
///
class DataTransferServiceClient {
 public:
  explicit DataTransferServiceClient(
      std::shared_ptr<DataTransferServiceConnection> connection,
      Options opts = {});
  ~DataTransferServiceClient();

  ///@{
  /// @name Copy and move support
  DataTransferServiceClient(DataTransferServiceClient const&) = default;
  DataTransferServiceClient& operator=(DataTransferServiceClient const&) =
      default;
  DataTransferServiceClient(DataTransferServiceClient&&) = default;
  DataTransferServiceClient& operator=(DataTransferServiceClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(DataTransferServiceClient const& a,
                         DataTransferServiceClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(DataTransferServiceClient const& a,
                         DataTransferServiceClient const& b) {
    return !(a == b);
  }
  ///@}

  ///
  /// Retrieves a supported data source and returns its settings.
  ///
  /// @param name  Required. The field will contain name of the resource
  /// requested, for
  ///  example: `projects/{project_id}/dataSources/{data_source_id}` or
  ///  `projects/{project_id}/locations/{location_id}/dataSources/{data_source_id}`
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::bigquery::datatransfer::v1::DataSource,google/cloud/bigquery/datatransfer/v1/datatransfer.proto#L320}
  ///
  /// [google.cloud.bigquery.datatransfer.v1.GetDataSourceRequest]:
  /// @googleapis_reference_link{google/cloud/bigquery/datatransfer/v1/datatransfer.proto#L430}
  /// [google.cloud.bigquery.datatransfer.v1.DataSource]:
  /// @googleapis_reference_link{google/cloud/bigquery/datatransfer/v1/datatransfer.proto#L320}
  ///
  StatusOr<google::cloud::bigquery::datatransfer::v1::DataSource> GetDataSource(
      std::string const& name, Options opts = {});

  ///
  /// Retrieves a supported data source and returns its settings.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::bigquery::datatransfer::v1::GetDataSourceRequest,google/cloud/bigquery/datatransfer/v1/datatransfer.proto#L430}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::bigquery::datatransfer::v1::DataSource,google/cloud/bigquery/datatransfer/v1/datatransfer.proto#L320}
  ///
  /// [google.cloud.bigquery.datatransfer.v1.GetDataSourceRequest]:
  /// @googleapis_reference_link{google/cloud/bigquery/datatransfer/v1/datatransfer.proto#L430}
  /// [google.cloud.bigquery.datatransfer.v1.DataSource]:
  /// @googleapis_reference_link{google/cloud/bigquery/datatransfer/v1/datatransfer.proto#L320}
  ///
  StatusOr<google::cloud::bigquery::datatransfer::v1::DataSource> GetDataSource(
      google::cloud::bigquery::datatransfer::v1::GetDataSourceRequest const&
          request,
      Options opts = {});

  ///
  /// Lists supported data sources and returns their settings.
  ///
  /// @param parent  Required. The BigQuery project id for which data sources
  /// should be
  ///  returned. Must be in the form: `projects/{project_id}` or
  ///  `projects/{project_id}/locations/{location_id}`
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::bigquery::datatransfer::v1::DataSource,google/cloud/bigquery/datatransfer/v1/datatransfer.proto#L320}
  ///
  /// [google.cloud.bigquery.datatransfer.v1.ListDataSourcesRequest]:
  /// @googleapis_reference_link{google/cloud/bigquery/datatransfer/v1/datatransfer.proto#L443}
  /// [google.cloud.bigquery.datatransfer.v1.DataSource]:
  /// @googleapis_reference_link{google/cloud/bigquery/datatransfer/v1/datatransfer.proto#L320}
  ///
  StreamRange<google::cloud::bigquery::datatransfer::v1::DataSource>
  ListDataSources(std::string const& parent, Options opts = {});

  ///
  /// Lists supported data sources and returns their settings.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::bigquery::datatransfer::v1::ListDataSourcesRequest,google/cloud/bigquery/datatransfer/v1/datatransfer.proto#L443}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::bigquery::datatransfer::v1::DataSource,google/cloud/bigquery/datatransfer/v1/datatransfer.proto#L320}
  ///
  /// [google.cloud.bigquery.datatransfer.v1.ListDataSourcesRequest]:
  /// @googleapis_reference_link{google/cloud/bigquery/datatransfer/v1/datatransfer.proto#L443}
  /// [google.cloud.bigquery.datatransfer.v1.DataSource]:
  /// @googleapis_reference_link{google/cloud/bigquery/datatransfer/v1/datatransfer.proto#L320}
  ///
  StreamRange<google::cloud::bigquery::datatransfer::v1::DataSource>
  ListDataSources(
      google::cloud::bigquery::datatransfer::v1::ListDataSourcesRequest request,
      Options opts = {});

  ///
  /// Creates a new data transfer configuration.
  ///
  /// @param parent  Required. The BigQuery project id where the transfer
  /// configuration should
  ///  be created. Must be in the format
  ///  projects/{project_id}/locations/{location_id} or projects/{project_id}.
  ///  If specified location and location of the destination bigquery dataset do
  ///  not match - the request will fail.
  /// @param transfer_config  Required. Data transfer configuration to create.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::bigquery::datatransfer::v1::TransferConfig,google/cloud/bigquery/datatransfer/v1/transfer.proto#L112}
  ///
  /// [google.cloud.bigquery.datatransfer.v1.CreateTransferConfigRequest]:
  /// @googleapis_reference_link{google/cloud/bigquery/datatransfer/v1/datatransfer.proto#L483}
  /// [google.cloud.bigquery.datatransfer.v1.TransferConfig]:
  /// @googleapis_reference_link{google/cloud/bigquery/datatransfer/v1/transfer.proto#L112}
  ///
  StatusOr<google::cloud::bigquery::datatransfer::v1::TransferConfig>
  CreateTransferConfig(
      std::string const& parent,
      google::cloud::bigquery::datatransfer::v1::TransferConfig const&
          transfer_config,
      Options opts = {});

  ///
  /// Creates a new data transfer configuration.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::bigquery::datatransfer::v1::CreateTransferConfigRequest,google/cloud/bigquery/datatransfer/v1/datatransfer.proto#L483}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::bigquery::datatransfer::v1::TransferConfig,google/cloud/bigquery/datatransfer/v1/transfer.proto#L112}
  ///
  /// [google.cloud.bigquery.datatransfer.v1.CreateTransferConfigRequest]:
  /// @googleapis_reference_link{google/cloud/bigquery/datatransfer/v1/datatransfer.proto#L483}
  /// [google.cloud.bigquery.datatransfer.v1.TransferConfig]:
  /// @googleapis_reference_link{google/cloud/bigquery/datatransfer/v1/transfer.proto#L112}
  ///
  StatusOr<google::cloud::bigquery::datatransfer::v1::TransferConfig>
  CreateTransferConfig(google::cloud::bigquery::datatransfer::v1::
                           CreateTransferConfigRequest const& request,
                       Options opts = {});

  ///
  /// Updates a data transfer configuration.
  /// All fields must be set, even if they are not updated.
  ///
  /// @param transfer_config  Required. Data transfer configuration to create.
  /// @param update_mask  Required. Required list of fields to be updated in
  /// this request.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::bigquery::datatransfer::v1::TransferConfig,google/cloud/bigquery/datatransfer/v1/transfer.proto#L112}
  ///
  /// [google.cloud.bigquery.datatransfer.v1.UpdateTransferConfigRequest]:
  /// @googleapis_reference_link{google/cloud/bigquery/datatransfer/v1/datatransfer.proto#L545}
  /// [google.cloud.bigquery.datatransfer.v1.TransferConfig]:
  /// @googleapis_reference_link{google/cloud/bigquery/datatransfer/v1/transfer.proto#L112}
  ///
  StatusOr<google::cloud::bigquery::datatransfer::v1::TransferConfig>
  UpdateTransferConfig(
      google::cloud::bigquery::datatransfer::v1::TransferConfig const&
          transfer_config,
      google::protobuf::FieldMask const& update_mask, Options opts = {});

  ///
  /// Updates a data transfer configuration.
  /// All fields must be set, even if they are not updated.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::bigquery::datatransfer::v1::UpdateTransferConfigRequest,google/cloud/bigquery/datatransfer/v1/datatransfer.proto#L545}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::bigquery::datatransfer::v1::TransferConfig,google/cloud/bigquery/datatransfer/v1/transfer.proto#L112}
  ///
  /// [google.cloud.bigquery.datatransfer.v1.UpdateTransferConfigRequest]:
  /// @googleapis_reference_link{google/cloud/bigquery/datatransfer/v1/datatransfer.proto#L545}
  /// [google.cloud.bigquery.datatransfer.v1.TransferConfig]:
  /// @googleapis_reference_link{google/cloud/bigquery/datatransfer/v1/transfer.proto#L112}
  ///
  StatusOr<google::cloud::bigquery::datatransfer::v1::TransferConfig>
  UpdateTransferConfig(google::cloud::bigquery::datatransfer::v1::
                           UpdateTransferConfigRequest const& request,
                       Options opts = {});

  ///
  /// Deletes a data transfer configuration, including any associated transfer
  /// runs and logs.
  ///
  /// @param name  Required. The field will contain name of the resource
  /// requested, for
  ///  example: `projects/{project_id}/transferConfigs/{config_id}` or
  ///  `projects/{project_id}/locations/{location_id}/transferConfigs/{config_id}`
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  ///
  /// [google.cloud.bigquery.datatransfer.v1.DeleteTransferConfigRequest]:
  /// @googleapis_reference_link{google/cloud/bigquery/datatransfer/v1/datatransfer.proto#L612}
  ///
  Status DeleteTransferConfig(std::string const& name, Options opts = {});

  ///
  /// Deletes a data transfer configuration, including any associated transfer
  /// runs and logs.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::bigquery::datatransfer::v1::DeleteTransferConfigRequest,google/cloud/bigquery/datatransfer/v1/datatransfer.proto#L612}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  ///
  /// [google.cloud.bigquery.datatransfer.v1.DeleteTransferConfigRequest]:
  /// @googleapis_reference_link{google/cloud/bigquery/datatransfer/v1/datatransfer.proto#L612}
  ///
  Status DeleteTransferConfig(google::cloud::bigquery::datatransfer::v1::
                                  DeleteTransferConfigRequest const& request,
                              Options opts = {});

  ///
  /// Returns information about a data transfer config.
  ///
  /// @param name  Required. The field will contain name of the resource
  /// requested, for
  ///  example: `projects/{project_id}/transferConfigs/{config_id}` or
  ///  `projects/{project_id}/locations/{location_id}/transferConfigs/{config_id}`
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::bigquery::datatransfer::v1::TransferConfig,google/cloud/bigquery/datatransfer/v1/transfer.proto#L112}
  ///
  /// [google.cloud.bigquery.datatransfer.v1.GetTransferConfigRequest]:
  /// @googleapis_reference_link{google/cloud/bigquery/datatransfer/v1/datatransfer.proto#L598}
  /// [google.cloud.bigquery.datatransfer.v1.TransferConfig]:
  /// @googleapis_reference_link{google/cloud/bigquery/datatransfer/v1/transfer.proto#L112}
  ///
  StatusOr<google::cloud::bigquery::datatransfer::v1::TransferConfig>
  GetTransferConfig(std::string const& name, Options opts = {});

  ///
  /// Returns information about a data transfer config.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::bigquery::datatransfer::v1::GetTransferConfigRequest,google/cloud/bigquery/datatransfer/v1/datatransfer.proto#L598}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::bigquery::datatransfer::v1::TransferConfig,google/cloud/bigquery/datatransfer/v1/transfer.proto#L112}
  ///
  /// [google.cloud.bigquery.datatransfer.v1.GetTransferConfigRequest]:
  /// @googleapis_reference_link{google/cloud/bigquery/datatransfer/v1/datatransfer.proto#L598}
  /// [google.cloud.bigquery.datatransfer.v1.TransferConfig]:
  /// @googleapis_reference_link{google/cloud/bigquery/datatransfer/v1/transfer.proto#L112}
  ///
  StatusOr<google::cloud::bigquery::datatransfer::v1::TransferConfig>
  GetTransferConfig(
      google::cloud::bigquery::datatransfer::v1::GetTransferConfigRequest const&
          request,
      Options opts = {});

  ///
  /// Returns information about all transfer configs owned by a project in the
  /// specified location.
  ///
  /// @param parent  Required. The BigQuery project id for which transfer
  /// configs
  ///  should be returned: `projects/{project_id}` or
  ///  `projects/{project_id}/locations/{location_id}`
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::bigquery::datatransfer::v1::TransferConfig,google/cloud/bigquery/datatransfer/v1/transfer.proto#L112}
  ///
  /// [google.cloud.bigquery.datatransfer.v1.ListTransferConfigsRequest]:
  /// @googleapis_reference_link{google/cloud/bigquery/datatransfer/v1/datatransfer.proto#L653}
  /// [google.cloud.bigquery.datatransfer.v1.TransferConfig]:
  /// @googleapis_reference_link{google/cloud/bigquery/datatransfer/v1/transfer.proto#L112}
  ///
  StreamRange<google::cloud::bigquery::datatransfer::v1::TransferConfig>
  ListTransferConfigs(std::string const& parent, Options opts = {});

  ///
  /// Returns information about all transfer configs owned by a project in the
  /// specified location.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::bigquery::datatransfer::v1::ListTransferConfigsRequest,google/cloud/bigquery/datatransfer/v1/datatransfer.proto#L653}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::bigquery::datatransfer::v1::TransferConfig,google/cloud/bigquery/datatransfer/v1/transfer.proto#L112}
  ///
  /// [google.cloud.bigquery.datatransfer.v1.ListTransferConfigsRequest]:
  /// @googleapis_reference_link{google/cloud/bigquery/datatransfer/v1/datatransfer.proto#L653}
  /// [google.cloud.bigquery.datatransfer.v1.TransferConfig]:
  /// @googleapis_reference_link{google/cloud/bigquery/datatransfer/v1/transfer.proto#L112}
  ///
  StreamRange<google::cloud::bigquery::datatransfer::v1::TransferConfig>
  ListTransferConfigs(
      google::cloud::bigquery::datatransfer::v1::ListTransferConfigsRequest
          request,
      Options opts = {});

  ///
  /// Creates transfer runs for a time range [start_time, end_time].
  /// For each date - or whatever granularity the data source supports - in the
  /// range, one transfer run is created.
  /// Note that runs are created per UTC time in the time range.
  /// DEPRECATED: use StartManualTransferRuns instead.
  ///
  /// @param parent  Required. Transfer configuration name in the form:
  ///  `projects/{project_id}/transferConfigs/{config_id}` or
  ///  `projects/{project_id}/locations/{location_id}/transferConfigs/{config_id}`.
  /// @param start_time  Required. Start time of the range of transfer runs. For
  /// example,
  ///  `"2017-05-25T00:00:00+00:00"`.
  /// @param end_time  Required. End time of the range of transfer runs. For
  /// example,
  ///  `"2017-05-30T00:00:00+00:00"`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::bigquery::datatransfer::v1::ScheduleTransferRunsResponse,google/cloud/bigquery/datatransfer/v1/datatransfer.proto#L831}
  ///
  /// [google.cloud.bigquery.datatransfer.v1.ScheduleTransferRunsRequest]:
  /// @googleapis_reference_link{google/cloud/bigquery/datatransfer/v1/datatransfer.proto#L808}
  /// [google.cloud.bigquery.datatransfer.v1.ScheduleTransferRunsResponse]:
  /// @googleapis_reference_link{google/cloud/bigquery/datatransfer/v1/datatransfer.proto#L831}
  ///
  StatusOr<
      google::cloud::bigquery::datatransfer::v1::ScheduleTransferRunsResponse>
  ScheduleTransferRuns(std::string const& parent,
                       google::protobuf::Timestamp const& start_time,
                       google::protobuf::Timestamp const& end_time,
                       Options opts = {});

  ///
  /// Creates transfer runs for a time range [start_time, end_time].
  /// For each date - or whatever granularity the data source supports - in the
  /// range, one transfer run is created.
  /// Note that runs are created per UTC time in the time range.
  /// DEPRECATED: use StartManualTransferRuns instead.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::bigquery::datatransfer::v1::ScheduleTransferRunsRequest,google/cloud/bigquery/datatransfer/v1/datatransfer.proto#L808}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::bigquery::datatransfer::v1::ScheduleTransferRunsResponse,google/cloud/bigquery/datatransfer/v1/datatransfer.proto#L831}
  ///
  /// [google.cloud.bigquery.datatransfer.v1.ScheduleTransferRunsRequest]:
  /// @googleapis_reference_link{google/cloud/bigquery/datatransfer/v1/datatransfer.proto#L808}
  /// [google.cloud.bigquery.datatransfer.v1.ScheduleTransferRunsResponse]:
  /// @googleapis_reference_link{google/cloud/bigquery/datatransfer/v1/datatransfer.proto#L831}
  ///
  StatusOr<
      google::cloud::bigquery::datatransfer::v1::ScheduleTransferRunsResponse>
  ScheduleTransferRuns(google::cloud::bigquery::datatransfer::v1::
                           ScheduleTransferRunsRequest const& request,
                       Options opts = {});

  ///
  /// Start manual transfer runs to be executed now with schedule_time equal to
  /// current time. The transfer runs can be created for a time range where the
  /// run_time is between start_time (inclusive) and end_time (exclusive), or
  /// for a specific run_time.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::bigquery::datatransfer::v1::StartManualTransferRunsRequest,google/cloud/bigquery/datatransfer/v1/datatransfer.proto#L837}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::bigquery::datatransfer::v1::StartManualTransferRunsResponse,google/cloud/bigquery/datatransfer/v1/datatransfer.proto#L874}
  ///
  /// [google.cloud.bigquery.datatransfer.v1.StartManualTransferRunsRequest]:
  /// @googleapis_reference_link{google/cloud/bigquery/datatransfer/v1/datatransfer.proto#L837}
  /// [google.cloud.bigquery.datatransfer.v1.StartManualTransferRunsResponse]:
  /// @googleapis_reference_link{google/cloud/bigquery/datatransfer/v1/datatransfer.proto#L874}
  ///
  StatusOr<google::cloud::bigquery::datatransfer::v1::
               StartManualTransferRunsResponse>
  StartManualTransferRuns(google::cloud::bigquery::datatransfer::v1::
                              StartManualTransferRunsRequest const& request,
                          Options opts = {});

  ///
  /// Returns information about the particular transfer run.
  ///
  /// @param name  Required. The field will contain name of the resource
  /// requested, for
  ///  example:
  ///  `projects/{project_id}/transferConfigs/{config_id}/runs/{run_id}` or
  ///  `projects/{project_id}/locations/{location_id}/transferConfigs/{config_id}/runs/{run_id}`
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::bigquery::datatransfer::v1::TransferRun,google/cloud/bigquery/datatransfer/v1/transfer.proto#L213}
  ///
  /// [google.cloud.bigquery.datatransfer.v1.GetTransferRunRequest]:
  /// @googleapis_reference_link{google/cloud/bigquery/datatransfer/v1/datatransfer.proto#L625}
  /// [google.cloud.bigquery.datatransfer.v1.TransferRun]:
  /// @googleapis_reference_link{google/cloud/bigquery/datatransfer/v1/transfer.proto#L213}
  ///
  StatusOr<google::cloud::bigquery::datatransfer::v1::TransferRun>
  GetTransferRun(std::string const& name, Options opts = {});

  ///
  /// Returns information about the particular transfer run.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::bigquery::datatransfer::v1::GetTransferRunRequest,google/cloud/bigquery/datatransfer/v1/datatransfer.proto#L625}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::bigquery::datatransfer::v1::TransferRun,google/cloud/bigquery/datatransfer/v1/transfer.proto#L213}
  ///
  /// [google.cloud.bigquery.datatransfer.v1.GetTransferRunRequest]:
  /// @googleapis_reference_link{google/cloud/bigquery/datatransfer/v1/datatransfer.proto#L625}
  /// [google.cloud.bigquery.datatransfer.v1.TransferRun]:
  /// @googleapis_reference_link{google/cloud/bigquery/datatransfer/v1/transfer.proto#L213}
  ///
  StatusOr<google::cloud::bigquery::datatransfer::v1::TransferRun>
  GetTransferRun(
      google::cloud::bigquery::datatransfer::v1::GetTransferRunRequest const&
          request,
      Options opts = {});

  ///
  /// Deletes the specified transfer run.
  ///
  /// @param name  Required. The field will contain name of the resource
  /// requested, for
  ///  example:
  ///  `projects/{project_id}/transferConfigs/{config_id}/runs/{run_id}` or
  ///  `projects/{project_id}/locations/{location_id}/transferConfigs/{config_id}/runs/{run_id}`
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  ///
  /// [google.cloud.bigquery.datatransfer.v1.DeleteTransferRunRequest]:
  /// @googleapis_reference_link{google/cloud/bigquery/datatransfer/v1/datatransfer.proto#L639}
  ///
  Status DeleteTransferRun(std::string const& name, Options opts = {});

  ///
  /// Deletes the specified transfer run.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::bigquery::datatransfer::v1::DeleteTransferRunRequest,google/cloud/bigquery/datatransfer/v1/datatransfer.proto#L639}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  ///
  /// [google.cloud.bigquery.datatransfer.v1.DeleteTransferRunRequest]:
  /// @googleapis_reference_link{google/cloud/bigquery/datatransfer/v1/datatransfer.proto#L639}
  ///
  Status DeleteTransferRun(
      google::cloud::bigquery::datatransfer::v1::DeleteTransferRunRequest const&
          request,
      Options opts = {});

  ///
  /// Returns information about running and completed transfer runs.
  ///
  /// @param parent  Required. Name of transfer configuration for which transfer
  /// runs should be
  ///  retrieved. Format of transfer configuration resource name is:
  ///  `projects/{project_id}/transferConfigs/{config_id}` or
  ///  `projects/{project_id}/locations/{location_id}/transferConfigs/{config_id}`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::bigquery::datatransfer::v1::TransferRun,google/cloud/bigquery/datatransfer/v1/transfer.proto#L213}
  ///
  /// [google.cloud.bigquery.datatransfer.v1.ListTransferRunsRequest]:
  /// @googleapis_reference_link{google/cloud/bigquery/datatransfer/v1/datatransfer.proto#L692}
  /// [google.cloud.bigquery.datatransfer.v1.TransferRun]:
  /// @googleapis_reference_link{google/cloud/bigquery/datatransfer/v1/transfer.proto#L213}
  ///
  StreamRange<google::cloud::bigquery::datatransfer::v1::TransferRun>
  ListTransferRuns(std::string const& parent, Options opts = {});

  ///
  /// Returns information about running and completed transfer runs.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::bigquery::datatransfer::v1::ListTransferRunsRequest,google/cloud/bigquery/datatransfer/v1/datatransfer.proto#L692}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::bigquery::datatransfer::v1::TransferRun,google/cloud/bigquery/datatransfer/v1/transfer.proto#L213}
  ///
  /// [google.cloud.bigquery.datatransfer.v1.ListTransferRunsRequest]:
  /// @googleapis_reference_link{google/cloud/bigquery/datatransfer/v1/datatransfer.proto#L692}
  /// [google.cloud.bigquery.datatransfer.v1.TransferRun]:
  /// @googleapis_reference_link{google/cloud/bigquery/datatransfer/v1/transfer.proto#L213}
  ///
  StreamRange<google::cloud::bigquery::datatransfer::v1::TransferRun>
  ListTransferRuns(
      google::cloud::bigquery::datatransfer::v1::ListTransferRunsRequest
          request,
      Options opts = {});

  ///
  /// Returns log messages for the transfer run.
  ///
  /// @param parent  Required. Transfer run name in the form:
  ///  `projects/{project_id}/transferConfigs/{config_id}/runs/{run_id}` or
  ///  `projects/{project_id}/locations/{location_id}/transferConfigs/{config_id}/runs/{run_id}`
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::bigquery::datatransfer::v1::TransferMessage,google/cloud/bigquery/datatransfer/v1/transfer.proto#L296}
  ///
  /// [google.cloud.bigquery.datatransfer.v1.ListTransferLogsRequest]:
  /// @googleapis_reference_link{google/cloud/bigquery/datatransfer/v1/datatransfer.proto#L744}
  /// [google.cloud.bigquery.datatransfer.v1.TransferMessage]:
  /// @googleapis_reference_link{google/cloud/bigquery/datatransfer/v1/transfer.proto#L296}
  ///
  StreamRange<google::cloud::bigquery::datatransfer::v1::TransferMessage>
  ListTransferLogs(std::string const& parent, Options opts = {});

  ///
  /// Returns log messages for the transfer run.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::bigquery::datatransfer::v1::ListTransferLogsRequest,google/cloud/bigquery/datatransfer/v1/datatransfer.proto#L744}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::bigquery::datatransfer::v1::TransferMessage,google/cloud/bigquery/datatransfer/v1/transfer.proto#L296}
  ///
  /// [google.cloud.bigquery.datatransfer.v1.ListTransferLogsRequest]:
  /// @googleapis_reference_link{google/cloud/bigquery/datatransfer/v1/datatransfer.proto#L744}
  /// [google.cloud.bigquery.datatransfer.v1.TransferMessage]:
  /// @googleapis_reference_link{google/cloud/bigquery/datatransfer/v1/transfer.proto#L296}
  ///
  StreamRange<google::cloud::bigquery::datatransfer::v1::TransferMessage>
  ListTransferLogs(
      google::cloud::bigquery::datatransfer::v1::ListTransferLogsRequest
          request,
      Options opts = {});

  ///
  /// Returns true if valid credentials exist for the given data source and
  /// requesting user.
  ///
  /// @param name  Required. The data source in the form:
  ///  `projects/{project_id}/dataSources/{data_source_id}` or
  ///  `projects/{project_id}/locations/{location_id}/dataSources/{data_source_id}`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::bigquery::datatransfer::v1::CheckValidCredsResponse,google/cloud/bigquery/datatransfer/v1/datatransfer.proto#L802}
  ///
  /// [google.cloud.bigquery.datatransfer.v1.CheckValidCredsRequest]:
  /// @googleapis_reference_link{google/cloud/bigquery/datatransfer/v1/datatransfer.proto#L789}
  /// [google.cloud.bigquery.datatransfer.v1.CheckValidCredsResponse]:
  /// @googleapis_reference_link{google/cloud/bigquery/datatransfer/v1/datatransfer.proto#L802}
  ///
  StatusOr<google::cloud::bigquery::datatransfer::v1::CheckValidCredsResponse>
  CheckValidCreds(std::string const& name, Options opts = {});

  ///
  /// Returns true if valid credentials exist for the given data source and
  /// requesting user.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::bigquery::datatransfer::v1::CheckValidCredsRequest,google/cloud/bigquery/datatransfer/v1/datatransfer.proto#L789}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::bigquery::datatransfer::v1::CheckValidCredsResponse,google/cloud/bigquery/datatransfer/v1/datatransfer.proto#L802}
  ///
  /// [google.cloud.bigquery.datatransfer.v1.CheckValidCredsRequest]:
  /// @googleapis_reference_link{google/cloud/bigquery/datatransfer/v1/datatransfer.proto#L789}
  /// [google.cloud.bigquery.datatransfer.v1.CheckValidCredsResponse]:
  /// @googleapis_reference_link{google/cloud/bigquery/datatransfer/v1/datatransfer.proto#L802}
  ///
  StatusOr<google::cloud::bigquery::datatransfer::v1::CheckValidCredsResponse>
  CheckValidCreds(
      google::cloud::bigquery::datatransfer::v1::CheckValidCredsRequest const&
          request,
      Options opts = {});

  ///
  /// Enroll data sources in a user project. This allows users to create
  /// transfer configurations for these data sources. They will also appear in
  /// the ListDataSources RPC and as such, will appear in the [BigQuery
  /// UI](https://console.cloud.google.com/bigquery), and the documents can be
  /// found in the public guide for [BigQuery Web
  /// UI](https://cloud.google.com/bigquery/bigquery-web-ui) and [Data Transfer
  /// Service](https://cloud.google.com/bigquery/docs/working-with-transfers).
  ///
  /// @param request
  /// @googleapis_link{google::cloud::bigquery::datatransfer::v1::EnrollDataSourcesRequest,google/cloud/bigquery/datatransfer/v1/datatransfer.proto#L881}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  ///
  /// [google.cloud.bigquery.datatransfer.v1.EnrollDataSourcesRequest]:
  /// @googleapis_reference_link{google/cloud/bigquery/datatransfer/v1/datatransfer.proto#L881}
  ///
  Status EnrollDataSources(
      google::cloud::bigquery::datatransfer::v1::EnrollDataSourcesRequest const&
          request,
      Options opts = {});

 private:
  std::shared_ptr<DataTransferServiceConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigquery
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_DATA_TRANSFER_CLIENT_H
