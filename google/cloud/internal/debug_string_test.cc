// Copyright 2022 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "google/cloud/internal/debug_string.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace internal {
namespace {

TEST(DebugFormatter, SingleLine) {
  EXPECT_EQ(DebugFormatter(TracingOptions{}.SetOptions("single_line_mode=T"),
                           "message_name")
                .Field("field1", 42)
                .SubMessage("sub_message")
                .QuotedField("field2", 3.14159)
                .EndMessage()
                .StringField("field2", "foobar")
                .Field("field3", true)
                .Build(),
            R"(message_name {)"
            R"( field1: 42)"
            R"( sub_message {)"
            R"( field2: "3.14159")"
            R"( })"
            R"( field2: "foobar")"
            R"( field3: true)"
            R"( })");
}

TEST(DebugFormatter, MultiLine) {
  EXPECT_EQ(DebugFormatter(TracingOptions{}.SetOptions("single_line_mode=F"),
                           "message_name")
                .Field("field1", 42)
                .SubMessage("sub_message")
                .QuotedField("field2", 3.14159)
                .EndMessage()
                .StringField("field2", "foobar")
                .Field("field3", true)
                .Build(),
            R"(message_name {
  field1: 42
  sub_message {
    field2: "3.14159"
  }
  field2: "foobar"
  field3: true
})");
}

TEST(DebugFormatter, Truncated) {
  EXPECT_EQ(DebugFormatter(TracingOptions{}.SetOptions(
                               "truncate_string_field_longer_than=3"),
                           "message_name")
                .Field("field1", 42)
                .SubMessage("sub_message")
                .QuotedField("field2", 3.14159)
                .EndMessage()
                .StringField("field2", "foobar")
                .Field("field3", true)
                .Build(),
            R"(message_name {)"
            R"( field1: 42)"
            R"( sub_message {)"
            R"( field2: "3.14159")"
            R"( })"
            R"( field2: "foo...<truncated>...")"
            R"( field3: true)"
            R"( })");
}

TEST(DebugString, TruncateString) {
  TracingOptions tracing_options;
  tracing_options.SetOptions("truncate_string_field_longer_than=8");
  struct Case {
    std::string actual;
    std::string expected;
  } cases[] = {
      {"1234567", "1234567"},
      {"12345678", "12345678"},
      {"123456789", "12345678...<truncated>..."},
      {"1234567890", "12345678...<truncated>..."},
  };
  for (auto const& c : cases) {
    EXPECT_EQ(c.expected, DebugString(c.actual, tracing_options));
  }
}

}  // namespace
}  // namespace internal
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace cloud
}  // namespace google
