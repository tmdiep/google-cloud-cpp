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
// source: google/cloud/pubsublite/v1/topic_stats.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_PUBSUBLITE_TOPIC_STATS_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_PUBSUBLITE_TOPIC_STATS_CONNECTION_H

#include "google/cloud/pubsublite/internal/topic_stats_retry_traits.h"
#include "google/cloud/pubsublite/internal/topic_stats_stub.h"
#include "google/cloud/pubsublite/topic_stats_connection_idempotency_policy.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace pubsublite {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using TopicStatsServiceRetryPolicy =
    ::google::cloud::internal::TraitBasedRetryPolicy<
        pubsublite_internal::TopicStatsServiceRetryTraits>;

using TopicStatsServiceLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        pubsublite_internal::TopicStatsServiceRetryTraits>;

using TopicStatsServiceLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        pubsublite_internal::TopicStatsServiceRetryTraits>;

class TopicStatsServiceConnection {
 public:
  virtual ~TopicStatsServiceConnection() = 0;

  virtual StatusOr<google::cloud::pubsublite::v1::ComputeMessageStatsResponse>
  ComputeMessageStats(
      google::cloud::pubsublite::v1::ComputeMessageStatsRequest const& request);

  virtual StatusOr<google::cloud::pubsublite::v1::ComputeHeadCursorResponse>
  ComputeHeadCursor(
      google::cloud::pubsublite::v1::ComputeHeadCursorRequest const& request);

  virtual StatusOr<google::cloud::pubsublite::v1::ComputeTimeCursorResponse>
  ComputeTimeCursor(
      google::cloud::pubsublite::v1::ComputeTimeCursorRequest const& request);
};

std::shared_ptr<TopicStatsServiceConnection> MakeTopicStatsServiceConnection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace pubsublite
}  // namespace cloud
}  // namespace google

namespace google {
namespace cloud {
namespace pubsublite_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

std::shared_ptr<pubsublite::TopicStatsServiceConnection>
MakeTopicStatsServiceConnection(std::shared_ptr<TopicStatsServiceStub> stub,
                                Options options);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace pubsublite_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_PUBSUBLITE_TOPIC_STATS_CONNECTION_H
