// Copyright 2020 Google LLC
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

#include "generator/internal/metadata_decorator_generator.h"
#include "generator/internal/codegen_utils.h"
#include "generator/internal/http_option_utils.h"
#include "generator/internal/longrunning.h"
#include "generator/internal/predicate_utils.h"
#include "generator/internal/printer.h"
#include "generator/internal/routing.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "absl/strings/str_split.h"
#include <google/protobuf/descriptor.h>
#include <algorithm>

namespace google {
namespace cloud {
namespace generator_internal {
namespace {

enum ContextType { kPointer, kReference };

std::string SetMetadataText(google::protobuf::MethodDescriptor const& method,
                            ContextType context_type) {
  std::string const context = context_type == kPointer ? "*context" : "context";

  auto info = ParseExplicitRoutingHeader(method);
  // If there are no explicit routing headers, we fall back to the routing as
  // defined by the google.api.http annotation
  if (info.empty()) {
    if (HasHttpRoutingHeader(method)) {
      return "  SetMetadata(" + context +
             ", \"$method_request_param_key$=\" + "
             "request.$method_request_param_value$);";
    }
    // If the method does not have a `google.api.routing` or `google.api.http`
    // annotation, we do not send the "x-goog-request-params" header.
    return "  SetMetadata(" + context + ");";
  }

  // clang-format off
  std::string text;
  text += "  std::vector<std::string> params;\n";
  text += "  params.reserve(" + std::to_string(info.size()) + ");\n\n";
  for (auto const& kv : info) {
    // In the simplest (and probably most common) cases where no regular
    // expression matching is needed for a given routing parameter key, we skip
    // the static loading of `RoutingMatcher`s and simply use if statements.
    if (std::all_of(
            kv.second.begin(), kv.second.end(),
            [](RoutingParameter const& rp) { return rp.pattern == "(.*)"; })) {
      auto const* sep = "  ";
      for (auto const& rp : kv.second){
        text += sep;
        text += "if (!request." + rp.field_name + "().empty()) {\n";
        text += "    params.push_back(\"" + kv.first + "=\" + request." + rp.field_name + "());\n";
        text += "  }";
        sep = " else ";
      }
      text += "\n\n";
      continue;
    }
    text += "  static auto* " + kv.first + "_matcher = []{\n";
    text += "    return new google::cloud::internal::RoutingMatcher<$request_type$>{\n";
    text += "      \"" + kv.first + "=\", {\n";
    for (auto const& rp : kv.second) {
      text += "      {[]($request_type$ const& request) -> std::string const& {\n";
      text += "        return request." + rp.field_name + "();\n";
      text += "      },\n";
      // In the special match-all case, we do not bother to set a regex.
      if (rp.pattern == "(.*)") {
        text += "      absl::nullopt},\n";
      } else {
        text += "      std::regex{\"" + rp.pattern + "\", std::regex::optimize}},\n";
      }
    }
    text += "      }};\n";
    text += "  }();\n";
    text += "  " + kv.first + "_matcher->AppendParam(request, params);\n\n";
  }
  text += "  if (params.empty()) {\n";
  text += "    SetMetadata(" + context + ");\n";
  text += "  } else {\n";
  text += "    SetMetadata(" + context + ", absl::StrJoin(params, \"&\"));\n";
  text += "  }";
  return text;
  // clang-format on
}

}  // namespace

MetadataDecoratorGenerator::MetadataDecoratorGenerator(
    google::protobuf::ServiceDescriptor const* service_descriptor,
    VarsDictionary service_vars,
    std::map<std::string, VarsDictionary> service_method_vars,
    google::protobuf::compiler::GeneratorContext* context)
    : StubGeneratorBase("metadata_header_path", "metadata_cc_path",
                        service_descriptor, std::move(service_vars),
                        std::move(service_method_vars), context) {}

Status MetadataDecoratorGenerator::GenerateHeader() {
  HeaderPrint(CopyrightLicenseFileHeader());
  HeaderPrint(  // clang-format off
    "\n"
    "// Generated by the Codegen C++ plugin.\n"
    "// If you make any local changes, they will be lost.\n"
    "// source: $proto_file_name$\n"
    "\n"
    "#ifndef $header_include_guard$\n"
    "#define $header_include_guard$\n");
  // clang-format on

  // includes
  HeaderPrint("\n");
  HeaderLocalIncludes({vars("stub_header_path"), "google/cloud/version.h"});
  HeaderSystemIncludes(
      {HasLongrunningMethod() ? "google/longrunning/operations.grpc.pb.h" : "",
       "memory", "string"});

  auto result = HeaderOpenNamespaces(NamespaceType::kInternal);
  if (!result.ok()) return result;

  // metadata decorator class
  HeaderPrint(  // clang-format off
    "\n"
    "class $metadata_class_name$ : public $stub_class_name$ {\n"
    " public:\n"
    "  ~$metadata_class_name$() override = default;\n"
    "  explicit $metadata_class_name$(std::shared_ptr<$stub_class_name$> child);\n");
  // clang-format on

  HeaderPrintPublicMethods();

  HeaderPrint(R"""(
 private:
  void SetMetadata(grpc::ClientContext& context,
                   std::string const& request_params);
  void SetMetadata(grpc::ClientContext& context);

  std::shared_ptr<$stub_class_name$> child_;
  std::string api_client_header_;
};
)""");

  HeaderCloseNamespaces();
  // close header guard
  HeaderPrint("\n#endif  // $header_include_guard$\n");
  return {};
}

Status MetadataDecoratorGenerator::GenerateCc() {
  CcPrint(CopyrightLicenseFileHeader());
  CcPrint(  // clang-format off
            "\n"
            "// Generated by the Codegen C++ plugin.\n"
            "// If you make any local changes, they will be lost.\n"
            "// source: $proto_file_name$\n");
  // clang-format on

  // includes
  CcPrint("\n");
  CcLocalIncludes(
      {vars("metadata_header_path"),
       HasExplicitRoutingMethod()
           ? "google/cloud/internal/absl_str_join_quiet.h"
           : "",
       "google/cloud/internal/api_client_header.h",
       HasExplicitRoutingMethod() ? "google/cloud/internal/routing_matcher.h"
                                  : "",
       "google/cloud/common_options.h", "google/cloud/status_or.h"});
  CcSystemIncludes({vars("proto_grpc_header_path"), "memory"});

  auto result = CcOpenNamespaces(NamespaceType::kInternal);
  if (!result.ok()) return result;

  // constructor
  CcPrint(  // clang-format off
    "\n"
    "$metadata_class_name$::$metadata_class_name$(\n"
    "    std::shared_ptr<$stub_class_name$> child)\n"
    "    : child_(std::move(child)),\n"
    "      api_client_header_(google::cloud::internal::ApiClientHeader(\"generator\")) {}\n");
  // clang-format on

  // metadata decorator class member methods
  for (auto const& method : methods()) {
    if (IsStreamingWrite(method)) {
      CcPrintMethod(method, __FILE__, __LINE__,
                    R"""(
std::unique_ptr<::google::cloud::internal::StreamingWriteRpc<
    $request_type$,
    $response_type$>>
$metadata_class_name$::$method_name$(
    std::shared_ptr<grpc::ClientContext> context) {
  SetMetadata(*context);
  return child_->$method_name$(std::move(context));
}
)""");
      continue;
    }
    if (IsBidirStreaming(method)) {
      // Asynchronous streaming writes do not consume a request. Typically, the
      // first `Write()` call contains any relevant data to "start" the stream.
      // Thus, the decorator cannot add any routing instructions. The caller
      // should initialize `context` with any such instructions.
      CcPrintMethod(method, __FILE__, __LINE__,
                    R"""(
std::unique_ptr<::google::cloud::AsyncStreamingReadWriteRpc<
      $request_type$,
      $response_type$>>
$metadata_class_name$::Async$method_name$(
    google::cloud::CompletionQueue const& cq,
    std::shared_ptr<grpc::ClientContext> context) {
  SetMetadata(*context);
  return child_->Async$method_name$(cq, std::move(context));
}
)""");
      continue;
    }
    CcPrintMethod(
        method,
        {MethodPattern(
             {
                 {IsResponseTypeEmpty,
                  // clang-format off
    "\nStatus\n",
    "\nStatusOr<$response_type$>\n"},
   {"$metadata_class_name$::$method_name$(\n"
    "    grpc::ClientContext& context,\n"
    "    $request_type$ const& request) {\n"},
    {SetMetadataText(method, kReference)},
   {"\n  return child_->$method_name$(context, request);\n"
    "}\n",}
                 // clang-format on
             },
             And(IsNonStreaming, Not(IsLongrunningOperation))),
         MethodPattern({{R"""(
future<StatusOr<google::longrunning::Operation>>
$metadata_class_name$::Async$method_name$(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    $request_type$ const& request) {
)"""},
                        {SetMetadataText(method, kPointer)},
                        {R"""(
  return child_->Async$method_name$(cq, std::move(context), request);
}
)"""}},
                       IsLongrunningOperation),
         MethodPattern(
             {
                 // clang-format off
   {"\n"
    "std::unique_ptr<google::cloud::internal::StreamingReadRpc<$response_type$>>\n"
    "$metadata_class_name$::$method_name$(\n"
    "    std::shared_ptr<grpc::ClientContext> context,\n"
    "    $request_type$ const& request) {\n"},
   {SetMetadataText(method, kPointer)},
   {"\n  return child_->$method_name$(std::move(context), request);\n"
    "}\n",}
                 // clang-format on
             },
             IsStreamingRead)},
        __FILE__, __LINE__);
  }

  for (auto const& method : async_methods()) {
    if (IsStreamingRead(method)) {
      auto const definition = absl::StrCat(
          R"""(
std::unique_ptr<::google::cloud::internal::AsyncStreamingReadRpc<
      $response_type$>>
$metadata_class_name$::Async$method_name$(
    google::cloud::CompletionQueue const& cq,
    std::shared_ptr<grpc::ClientContext> context,
    $request_type$ const& request) {
)""",
          SetMetadataText(method, kPointer),
          R"""(
  return child_->Async$method_name$(cq, std::move(context), request);
}
)""");
      CcPrintMethod(method, __FILE__, __LINE__, definition);
      continue;
    }
    if (IsStreamingWrite(method)) {
      // Asynchronous streaming writes do not consume a request. Typically, the
      // first `Write()` call contains any relevant data to "start" the stream.
      // Thus, the decorator cannot add any routing instructions. The caller
      // should initialize `context` with any such instructions.
      auto const definition = absl::StrCat(
          R"""(
std::unique_ptr<::google::cloud::internal::AsyncStreamingWriteRpc<
    $request_type$, $response_type$>>
$metadata_class_name$::Async$method_name$(
    google::cloud::CompletionQueue const& cq,
    std::shared_ptr<grpc::ClientContext> context) {
  SetMetadata(*context);
  return child_->Async$method_name$(cq, std::move(context));
}
)""");
      CcPrintMethod(method, __FILE__, __LINE__, definition);
      continue;
    }
    CcPrintMethod(
        method,
        {MethodPattern(
            {{IsResponseTypeEmpty,
              // clang-format off
    "\nfuture<Status>\n",
    "\nfuture<StatusOr<$response_type$>>\n"},
    {R"""($metadata_class_name$::Async$method_name$(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    $request_type$ const& request) {
)"""},
   {SetMetadataText(method, kPointer)}, {R"""(
  return child_->Async$method_name$(cq, std::move(context), request);
}
)"""}},
            // clang-format on
            And(IsNonStreaming, Not(IsLongrunningOperation)))},
        __FILE__, __LINE__);
  }

  // long running operation support methods
  if (HasLongrunningMethod()) {
    CcPrint(R"""(
future<StatusOr<google::longrunning::Operation>>
$metadata_class_name$::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncGetOperation(cq, std::move(context), request);
}

future<Status> $metadata_class_name$::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncCancelOperation(cq, std::move(context), request);
}
)""");
  }

  CcPrint(R"""(
void $metadata_class_name$::SetMetadata(grpc::ClientContext& context,
                                        std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context);
}

void $metadata_class_name$::SetMetadata(grpc::ClientContext& context) {
  context.AddMetadata("x-goog-api-client", api_client_header_);
  auto const& options = internal::CurrentOptions();
  if (options.has<UserProjectOption>()) {
    context.AddMetadata(
        "x-goog-user-project", options.get<UserProjectOption>());
  }
  auto const& authority = options.get<AuthorityOption>();
  if (!authority.empty()) context.set_authority(authority);
}
)""");

  CcCloseNamespaces();
  return {};
}

}  // namespace generator_internal
}  // namespace cloud
}  // namespace google
