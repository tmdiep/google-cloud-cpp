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

#include "generator/internal/connection_impl_generator.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "generator/internal/codegen_utils.h"
#include "generator/internal/predicate_utils.h"
#include "generator/internal/printer.h"
#include <google/protobuf/descriptor.h>

namespace google {
namespace cloud {
namespace generator_internal {

ConnectionImplGenerator::ConnectionImplGenerator(
    google::protobuf::ServiceDescriptor const* service_descriptor,
    VarsDictionary service_vars,
    std::map<std::string, VarsDictionary> service_method_vars,
    google::protobuf::compiler::GeneratorContext* context)
    : ServiceCodeGenerator("connection_impl_header_path",
                           "connection_impl_cc_path", service_descriptor,
                           std::move(service_vars),
                           std::move(service_method_vars), context) {}

Status ConnectionImplGenerator::GenerateHeader() {
  HeaderPrint(CopyrightLicenseFileHeader());
  HeaderPrint(R"""(
// Generated by the Codegen C++ plugin.
// If you make any local changes, they will be lost.
// source: $proto_file_name$

#ifndef $header_include_guard$
#define $header_include_guard$
)""");

  // includes
  HeaderPrint("\n");
  HeaderLocalIncludes(
      {vars("idempotency_policy_header_path"), vars("options_header_path"),
       vars("stub_header_path"), vars("connection_header_path"),
       vars("retry_traits_header_path"),
       HasBidirStreamingMethod()
           ? "google/cloud/async_streaming_read_write_rpc.h"
           : "",
       "google/cloud/background_threads.h", "google/cloud/backoff_policy.h",
       HasLongrunningMethod() ? "google/cloud/future.h" : "",
       "google/cloud/options.h",
       HasLongrunningMethod() ? "google/cloud/polling_policy.h" : "",
       "google/cloud/status_or.h",
       HasStreamingReadMethod() || HasPaginatedMethod()
           ? "google/cloud/stream_range.h"
           : "",
       "google/cloud/version.h"});
  HeaderSystemIncludes(
      {HasLongrunningMethod() ? "google/longrunning/operations.grpc.pb.h" : "",
       "memory"});

  auto result = HeaderOpenNamespaces(NamespaceType::kInternal);
  if (!result.ok()) return result;

  // streaming updater functions
  for (auto const& method : methods()) {
    HeaderPrintMethod(
        method,
        {MethodPattern(
            {// clang-format off
   {"\n"
    "void $service_name$$method_name$StreamingUpdater(\n"
    "    $response_type$ const& response,\n"
    "    $request_type$& request);\n"}
     }, IsStreamingRead)},
             // clang-format on
        __FILE__, __LINE__);
  }

  HeaderPrint(R"""(
class $connection_class_name$Impl
    : public $product_namespace$::$connection_class_name$ {
 public:
  ~$connection_class_name$Impl() override = default;

  $connection_class_name$Impl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<$product_internal_namespace$::$stub_class_name$> stub,
    Options options);
)""");

  HeaderPrint(R"""(
  Options options() override { return options_; }
)""");

  for (auto const& method : methods()) {
    HeaderPrintMethod(method, __FILE__, __LINE__, MethodDeclaration(method));
  }

  for (auto const& method : async_methods()) {
    HeaderPrintMethod(method, __FILE__, __LINE__,
                      AsyncMethodDeclaration(method));
  }

  // `CurrentOptions()` may not have the service default options because we
  // could be running in a test that calls the ConnectionImpl layer directly,
  // and it does not create an `internal::OptionsSpan` like the Client layer.
  // So, we have to fallback to `options_`, which we know has the service
  // default options because we added them.
  HeaderPrint(R"""(
 private:
  std::unique_ptr<$product_namespace$::$retry_policy_name$> retry_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<$product_namespace$::$retry_policy_name$Option>()) {
      return options.get<$product_namespace$::$retry_policy_name$Option>()->clone();
    }
    return options_.get<$product_namespace$::$retry_policy_name$Option>()->clone();
  }

  std::unique_ptr<BackoffPolicy> backoff_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<$product_namespace$::$service_name$BackoffPolicyOption>()) {
      return options.get<$product_namespace$::$service_name$BackoffPolicyOption>()->clone();
    }
    return options_.get<$product_namespace$::$service_name$BackoffPolicyOption>()->clone();
  }

  std::unique_ptr<$product_namespace$::$idempotency_class_name$> idempotency_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<$product_namespace$::$idempotency_class_name$Option>()) {
      return options.get<$product_namespace$::$idempotency_class_name$Option>()->clone();
    }
    return options_.get<$product_namespace$::$idempotency_class_name$Option>()->
clone();
  }
)""");
  if (HasLongrunningMethod()) {
    HeaderPrint(R"""(
  std::unique_ptr<PollingPolicy> polling_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<$product_namespace$::$service_name$PollingPolicyOption>()) {
      return options.get<$product_namespace$::$service_name$PollingPolicyOption>()->clone();
    }
    return options_.get<$product_namespace$::$service_name$PollingPolicyOption>()->clone();
  }
)""");
  }

  HeaderPrint(R"""(
  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<$product_internal_namespace$::$stub_class_name$> stub_;
  Options options_;
)""");

  // This closes the *ConnectionImpl class definition.
  HeaderPrint("};\n");

  HeaderCloseNamespaces();

  // close header guard
  HeaderPrint("\n#endif  // $header_include_guard$\n");
  return {};
}

Status ConnectionImplGenerator::GenerateCc() {
  CcPrint(CopyrightLicenseFileHeader());
  CcPrint(R"""(
// Generated by the Codegen C++ plugin.
// If you make any local changes, they will be lost.
// source: $proto_file_name$

)""");

  // includes
  CcLocalIncludes(
      {vars("connection_impl_header_path"), vars("option_defaults_header_path"),
       "google/cloud/background_threads.h", "google/cloud/common_options.h",
       "google/cloud/grpc_options.h",
       HasPaginatedMethod() ? "google/cloud/internal/pagination_range.h" : "",
       HasLongrunningMethod()
           ? "google/cloud/internal/async_long_running_operation.h"
           : "",
       HasStreamingReadMethod()
           ? "google/cloud/internal/resumable_streaming_read_rpc.h"
           : "",
       "google/cloud/internal/retry_loop.h",
       HasStreamingReadMethod()
           ? "google/cloud/internal/streaming_read_rpc_logging.h"
           : ""});
  CcSystemIncludes({"memory"});

  auto result = CcOpenNamespaces(NamespaceType::kInternal);
  if (!result.ok()) return result;

  CcPrint(R"""(
$connection_class_name$Impl::$connection_class_name$Impl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<$product_internal_namespace$::$stub_class_name$> stub,
    Options options)
  : background_(std::move(background)), stub_(std::move(stub)),
    options_(internal::MergeOptions(std::move(options),
      $product_internal_namespace$::$service_name$DefaultOptions(
        $connection_class_name$::options()))) {}
)""");

  for (auto const& method : methods()) {
    CcPrintMethod(method, __FILE__, __LINE__, MethodDefinition(method));
  }

  for (auto const& method : async_methods()) {
    CcPrintMethod(method, __FILE__, __LINE__, AsyncMethodDefinition(method));
  }

  CcCloseNamespaces();
  return {};
}

std::string ConnectionImplGenerator::MethodDeclaration(
    google::protobuf::MethodDescriptor const& method) {
  if (IsBidirStreaming(method)) {
    return R"""(
  std::unique_ptr<::google::cloud::AsyncStreamingReadWriteRpc<
      $request_type$,
      $response_type$>>
  Async$method_name$(ExperimentalTag) override;
)""";
  }

  if (IsStreamingRead(method)) {
    return R"""(
  StreamRange<$response_type$>
  $method_name$($request_type$ const& request) override;
)""";
  }

  if (IsStreamingWrite(method)) {
    // Streaming writes are only used in services that need hand-crafted
    // connection and client classes, they are not supported.
    return {};
  }

  if (IsPaginated(method)) {
    return R"""(
  StreamRange<$range_output_type$>
  $method_name$($request_type$ request) override;
)""";
  }

  if (IsLongrunningOperation(method)) {
    if (IsResponseTypeEmpty(method)) {
      return R"""(
  future<Status>
  $method_name$($request_type$ const& request) override;
)""";
    }
    return R"""(
  future<StatusOr<$longrunning_deduced_response_type$>>
  $method_name$($request_type$ const& request) override;
)""";
  }

  if (IsResponseTypeEmpty(method)) {
    return R"""(
  Status
  $method_name$($request_type$ const& request) override;
)""";
  }
  return R"""(
  StatusOr<$response_type$>
  $method_name$($request_type$ const& request) override;
)""";
}

std::string ConnectionImplGenerator::AsyncMethodDeclaration(
    google::protobuf::MethodDescriptor const& method) {
  if (IsResponseTypeEmpty(method)) {
    return R"""(
  future<Status>
  Async$method_name$($request_type$ const& request) override;
)""";
  }

  return R"""(
  future<StatusOr<$response_type$>>
  Async$method_name$($request_type$ const& request) override;
)""";
}

std::string ConnectionImplGenerator::MethodDefinition(
    google::protobuf::MethodDescriptor const& method) {
  if (IsBidirStreaming(method)) {
    // We do not generate definitions for bidir streaming RPCs. Their retry or
    // resume loops are so custom (if possible at all), and their usage so rare,
    // that it is easier to hand-craft these functions in a streaming.cc file.
    return R"""()""";
  }

  if (IsStreamingRead(method)) {
    return R"""(
StreamRange<$response_type$>
$connection_class_name$Impl::$method_name$($request_type$ const& request) {
  auto stub = stub_;
  auto retry = std::shared_ptr<$product_namespace$::$retry_policy_name$ const>(retry_policy());
  auto backoff = std::shared_ptr<BackoffPolicy const>(backoff_policy());

  auto factory = [stub]($request_type$ const& request) {
    return stub->$method_name$(absl::make_unique<grpc::ClientContext>(), request);
  };
  auto resumable =
      internal::MakeResumableStreamingReadRpc<$response_type$, $request_type$>(
          retry->clone(), backoff->clone(), [](std::chrono::milliseconds) {},
          factory,
          $service_name$$method_name$StreamingUpdater,
          request);
  return internal::MakeStreamRange(internal::StreamReader<$response_type$>(
      [resumable]{return resumable->Read();}));
})""";
  }

  if (IsStreamingWrite(method)) {
    // Streaming writes are only used in services that need hand-crafted
    // connection and client classes, they are not supported.
    return {};
  }

  if (IsPaginated(method)) {
    return R"""(
StreamRange<$range_output_type$>
$connection_class_name$Impl::$method_name$($request_type$ request) {
  request.clear_page_token();
  auto stub = stub_;
  auto retry = std::shared_ptr<$product_namespace$::$retry_policy_name$ const>(retry_policy());
  auto backoff = std::shared_ptr<BackoffPolicy const>(backoff_policy());
  auto idempotency = idempotency_policy()->$method_name$(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<StreamRange<$range_output_type$>>(
      std::move(request),
      [stub, retry, backoff, idempotency, function_name]
        ($request_type$ const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context, $request_type$ const& request) {
              return stub->$method_name$(context, request);
            },
            r, function_name);
      },
      []($response_type$ r) {
        std::vector<$range_output_type$> result(r.$range_output_field_name$().size());
        auto& messages = *r.mutable_$range_output_field_name$();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}
)""";
  }

  if (IsLongrunningOperation(method)) {
    return absl::StrCat(
        // The return type may be a simple `Status` or the
        // computed type of the long-running operation
        IsResponseTypeEmpty(method) ?
                                    R"""(
future<Status>)"""
                                    :
                                    R"""(
future<StatusOr<$longrunning_deduced_response_type$>>)""",
        // The body of the function is basically a call to
        // internal::AsyncLongRunningOperation, a helper template function in
        // `google::cloud::internal`.
        R"""(
$connection_class_name$Impl::$method_name$($request_type$ const& request) {
  auto stub = stub_;
  return google::cloud::internal::AsyncLongRunningOperation<$longrunning_deduced_response_type$>(
    background_->cq(), request,
    [stub](google::cloud::CompletionQueue& cq,
          std::unique_ptr<grpc::ClientContext> context,
          $request_type$ const& request) {
     return stub->Async$method_name$(cq, std::move(context), request);
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
    },)""",
        // One of the variations is how to extract the value from the operation
        // result, some operations use the metadata, some the data. We need to
        // provide the right function to internal::AsyncLongRunningOperation.
        IsLongrunningMetadataTypeUsedAsResponse(method) ?
                                                        R"""(
    &google::cloud::internal::ExtractLongRunningResultMetadata<$longrunning_deduced_response_type$>,)"""
                                                        :
                                                        R"""(
    &google::cloud::internal::ExtractLongRunningResultResponse<$longrunning_deduced_response_type$>,)""",
        R"""(
    retry_policy(), backoff_policy(),
    idempotency_policy()->$method_name$(request),
    polling_policy(), __func__))""",
        // Finally, the internal::AsyncLongRunningOperation helper may return
        // `future<StatusOr<google::protobuf::Empty>>`, in this case we add a
        // bit of code to drop the `protobuf::Empty`:
        IsResponseTypeEmpty(method) ? R"""(
    .then([](future<StatusOr<google::protobuf::Empty>> f) {
      return f.get().status();
    });
)"""
                                    : R"""(;
)""",
        R"""(
}
)""");
  }

  return absl::StrCat(IsResponseTypeEmpty(method) ? R"""(
Status)"""
                                                  : R"""(
StatusOr<$response_type$>)""",
                      R"""(
$connection_class_name$Impl::$method_name$($request_type$ const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->$method_name$(request),
      [this](grpc::ClientContext& context,
          $request_type$ const& request) {
        return stub_->$method_name$(context, request);
      },
      request, __func__);
}
)""");
}

std::string ConnectionImplGenerator::AsyncMethodDefinition(
    google::protobuf::MethodDescriptor const& method) {
  return absl::StrCat(IsResponseTypeEmpty(method) ? R"""(
future<Status>)"""
                                                  : R"""(
future<StatusOr<$response_type$>>)""",
                      R"""(
$connection_class_name$Impl::Async$method_name$($request_type$ const& request) {
  auto& stub = stub_;
  return google::cloud::internal::AsyncRetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->$method_name$(request),
      background_->cq(),
      [stub](CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             $request_type$ const& request) {
        return stub->Async$method_name$(cq, std::move(context), request);
      },
      request, __func__);
}
)""");
}

}  // namespace generator_internal
}  // namespace cloud
}  // namespace google
