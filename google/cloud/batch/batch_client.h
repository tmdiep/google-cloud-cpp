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
// source: google/cloud/batch/v1/batch.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BATCH_BATCH_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BATCH_BATCH_CLIENT_H

#include "google/cloud/batch/batch_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <map>
#include <memory>

namespace google {
namespace cloud {
namespace batch {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Google Batch Service.
/// The service manages user submitted batch jobs and allocates Google Compute
/// Engine VM instances to run the jobs.
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
class BatchServiceClient {
 public:
  explicit BatchServiceClient(
      std::shared_ptr<BatchServiceConnection> connection, Options opts = {});
  ~BatchServiceClient();

  ///@{
  /// @name Copy and move support
  BatchServiceClient(BatchServiceClient const&) = default;
  BatchServiceClient& operator=(BatchServiceClient const&) = default;
  BatchServiceClient(BatchServiceClient&&) = default;
  BatchServiceClient& operator=(BatchServiceClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(BatchServiceClient const& a,
                         BatchServiceClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(BatchServiceClient const& a,
                         BatchServiceClient const& b) {
    return !(a == b);
  }
  ///@}

  ///
  /// Create a Job.
  ///
  /// @param parent  Required. The parent resource name where the Job will be
  /// created.
  ///  Pattern: "projects/{project}/locations/{location}"
  /// @param job  Required. The Job to create.
  /// @param job_id  ID used to uniquely identify the Job within its parent
  /// scope.
  ///  This field should contain at most 63 characters and must start with
  ///  lowercase characters.
  ///  Only lowercase characters, numbers and '-' are accepted.
  ///  The '-' character cannot be the first or the last one.
  ///  A system generated ID will be used if the field is not set.
  ///  The job.name field in the request will be ignored and the created
  ///  resource name of the Job will be "{parent}/jobs/{job_id}".
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::batch::v1::Job,google/cloud/batch/v1/job.proto#L35}
  ///
  /// [google.cloud.batch.v1.CreateJobRequest]:
  /// @googleapis_reference_link{google/cloud/batch/v1/batch.proto#L102}
  /// [google.cloud.batch.v1.Job]:
  /// @googleapis_reference_link{google/cloud/batch/v1/job.proto#L35}
  ///
  StatusOr<google::cloud::batch::v1::Job> CreateJob(
      std::string const& parent, google::cloud::batch::v1::Job const& job,
      std::string const& job_id, Options opts = {});

  ///
  /// Create a Job.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::batch::v1::CreateJobRequest,google/cloud/batch/v1/batch.proto#L102}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::batch::v1::Job,google/cloud/batch/v1/job.proto#L35}
  ///
  /// [google.cloud.batch.v1.CreateJobRequest]:
  /// @googleapis_reference_link{google/cloud/batch/v1/batch.proto#L102}
  /// [google.cloud.batch.v1.Job]:
  /// @googleapis_reference_link{google/cloud/batch/v1/job.proto#L35}
  ///
  StatusOr<google::cloud::batch::v1::Job> CreateJob(
      google::cloud::batch::v1::CreateJobRequest const& request,
      Options opts = {});

  ///
  /// Get a Job specified by its resource name.
  ///
  /// @param name  Required. Job name.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::batch::v1::Job,google/cloud/batch/v1/job.proto#L35}
  ///
  /// [google.cloud.batch.v1.GetJobRequest]:
  /// @googleapis_reference_link{google/cloud/batch/v1/batch.proto#L141}
  /// [google.cloud.batch.v1.Job]:
  /// @googleapis_reference_link{google/cloud/batch/v1/job.proto#L35}
  ///
  StatusOr<google::cloud::batch::v1::Job> GetJob(std::string const& name,
                                                 Options opts = {});

  ///
  /// Get a Job specified by its resource name.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::batch::v1::GetJobRequest,google/cloud/batch/v1/batch.proto#L141}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::batch::v1::Job,google/cloud/batch/v1/job.proto#L35}
  ///
  /// [google.cloud.batch.v1.GetJobRequest]:
  /// @googleapis_reference_link{google/cloud/batch/v1/batch.proto#L141}
  /// [google.cloud.batch.v1.Job]:
  /// @googleapis_reference_link{google/cloud/batch/v1/job.proto#L35}
  ///
  StatusOr<google::cloud::batch::v1::Job> GetJob(
      google::cloud::batch::v1::GetJobRequest const& request,
      Options opts = {});

  ///
  /// Delete a Job.
  ///
  /// @param name  Job name.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::batch::v1::OperationMetadata,google/cloud/batch/v1/batch.proto#L244}
  ///
  /// [google.cloud.batch.v1.DeleteJobRequest]:
  /// @googleapis_reference_link{google/cloud/batch/v1/batch.proto#L150}
  /// [google.cloud.batch.v1.OperationMetadata]:
  /// @googleapis_reference_link{google/cloud/batch/v1/batch.proto#L244}
  ///
  future<StatusOr<google::cloud::batch::v1::OperationMetadata>> DeleteJob(
      std::string const& name, Options opts = {});

  ///
  /// Delete a Job.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::batch::v1::DeleteJobRequest,google/cloud/batch/v1/batch.proto#L150}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::batch::v1::OperationMetadata,google/cloud/batch/v1/batch.proto#L244}
  ///
  /// [google.cloud.batch.v1.DeleteJobRequest]:
  /// @googleapis_reference_link{google/cloud/batch/v1/batch.proto#L150}
  /// [google.cloud.batch.v1.OperationMetadata]:
  /// @googleapis_reference_link{google/cloud/batch/v1/batch.proto#L244}
  ///
  future<StatusOr<google::cloud::batch::v1::OperationMetadata>> DeleteJob(
      google::cloud::batch::v1::DeleteJobRequest const& request,
      Options opts = {});

  ///
  /// List all Jobs for a project within a region.
  ///
  /// @param parent  Parent path.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::batch::v1::Job,google/cloud/batch/v1/job.proto#L35}
  ///
  /// [google.cloud.batch.v1.ListJobsRequest]:
  /// @googleapis_reference_link{google/cloud/batch/v1/batch.proto#L174}
  /// [google.cloud.batch.v1.Job]:
  /// @googleapis_reference_link{google/cloud/batch/v1/job.proto#L35}
  ///
  StreamRange<google::cloud::batch::v1::Job> ListJobs(std::string const& parent,
                                                      Options opts = {});

  ///
  /// List all Jobs for a project within a region.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::batch::v1::ListJobsRequest,google/cloud/batch/v1/batch.proto#L174}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::batch::v1::Job,google/cloud/batch/v1/job.proto#L35}
  ///
  /// [google.cloud.batch.v1.ListJobsRequest]:
  /// @googleapis_reference_link{google/cloud/batch/v1/batch.proto#L174}
  /// [google.cloud.batch.v1.Job]:
  /// @googleapis_reference_link{google/cloud/batch/v1/job.proto#L35}
  ///
  StreamRange<google::cloud::batch::v1::Job> ListJobs(
      google::cloud::batch::v1::ListJobsRequest request, Options opts = {});

  ///
  /// Return a single Task.
  ///
  /// @param name  Required. Task name.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::batch::v1::Task,google/cloud/batch/v1/task.proto#L275}
  ///
  /// [google.cloud.batch.v1.GetTaskRequest]:
  /// @googleapis_reference_link{google/cloud/batch/v1/batch.proto#L235}
  /// [google.cloud.batch.v1.Task]:
  /// @googleapis_reference_link{google/cloud/batch/v1/task.proto#L275}
  ///
  StatusOr<google::cloud::batch::v1::Task> GetTask(std::string const& name,
                                                   Options opts = {});

  ///
  /// Return a single Task.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::batch::v1::GetTaskRequest,google/cloud/batch/v1/batch.proto#L235}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::batch::v1::Task,google/cloud/batch/v1/task.proto#L275}
  ///
  /// [google.cloud.batch.v1.GetTaskRequest]:
  /// @googleapis_reference_link{google/cloud/batch/v1/batch.proto#L235}
  /// [google.cloud.batch.v1.Task]:
  /// @googleapis_reference_link{google/cloud/batch/v1/task.proto#L275}
  ///
  StatusOr<google::cloud::batch::v1::Task> GetTask(
      google::cloud::batch::v1::GetTaskRequest const& request,
      Options opts = {});

  ///
  /// List Tasks associated with a job.
  ///
  /// @param parent  Required. Name of a TaskGroup from which Tasks are being
  /// requested.
  ///  Pattern:
  ///  "projects/{project}/locations/{location}/jobs/{job}/taskGroups/{task_group}"
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::batch::v1::Task,google/cloud/batch/v1/task.proto#L275}
  ///
  /// [google.cloud.batch.v1.ListTasksRequest]:
  /// @googleapis_reference_link{google/cloud/batch/v1/batch.proto#L201}
  /// [google.cloud.batch.v1.Task]:
  /// @googleapis_reference_link{google/cloud/batch/v1/task.proto#L275}
  ///
  StreamRange<google::cloud::batch::v1::Task> ListTasks(
      std::string const& parent, Options opts = {});

  ///
  /// List Tasks associated with a job.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::batch::v1::ListTasksRequest,google/cloud/batch/v1/batch.proto#L201}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::batch::v1::Task,google/cloud/batch/v1/task.proto#L275}
  ///
  /// [google.cloud.batch.v1.ListTasksRequest]:
  /// @googleapis_reference_link{google/cloud/batch/v1/batch.proto#L201}
  /// [google.cloud.batch.v1.Task]:
  /// @googleapis_reference_link{google/cloud/batch/v1/task.proto#L275}
  ///
  StreamRange<google::cloud::batch::v1::Task> ListTasks(
      google::cloud::batch::v1::ListTasksRequest request, Options opts = {});

 private:
  std::shared_ptr<BatchServiceConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace batch
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BATCH_BATCH_CLIENT_H
