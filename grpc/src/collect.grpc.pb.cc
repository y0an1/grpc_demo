// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: proto/collect.proto

#include "proto/collect.pb.h"
#include "proto/collect.grpc.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace collect {

static const char* CollectService_method_names[] = {
  "/collect.CollectService/add_devices",
  "/collect.CollectService/add_file_info",
  "/collect.CollectService/add_file_context",
  "/collect.CollectService/add_prop_info",
  "/collect.CollectService/add_linux_api_info",
};

std::unique_ptr< CollectService::Stub> CollectService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< CollectService::Stub> stub(new CollectService::Stub(channel, options));
  return stub;
}

CollectService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_add_devices_(CollectService_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_add_file_info_(CollectService_method_names[1], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_add_file_context_(CollectService_method_names[2], options.suffix_for_stats(),::grpc::internal::RpcMethod::CLIENT_STREAMING, channel)
  , rpcmethod_add_prop_info_(CollectService_method_names[3], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_add_linux_api_info_(CollectService_method_names[4], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status CollectService::Stub::add_devices(::grpc::ClientContext* context, const ::collect::DeviceInfo& request, ::collect::CollectResult* response) {
  return ::grpc::internal::BlockingUnaryCall< ::collect::DeviceInfo, ::collect::CollectResult, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_add_devices_, context, request, response);
}

void CollectService::Stub::async::add_devices(::grpc::ClientContext* context, const ::collect::DeviceInfo* request, ::collect::CollectResult* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::collect::DeviceInfo, ::collect::CollectResult, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_add_devices_, context, request, response, std::move(f));
}

void CollectService::Stub::async::add_devices(::grpc::ClientContext* context, const ::collect::DeviceInfo* request, ::collect::CollectResult* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_add_devices_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::collect::CollectResult>* CollectService::Stub::PrepareAsyncadd_devicesRaw(::grpc::ClientContext* context, const ::collect::DeviceInfo& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::collect::CollectResult, ::collect::DeviceInfo, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_add_devices_, context, request);
}

::grpc::ClientAsyncResponseReader< ::collect::CollectResult>* CollectService::Stub::Asyncadd_devicesRaw(::grpc::ClientContext* context, const ::collect::DeviceInfo& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncadd_devicesRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status CollectService::Stub::add_file_info(::grpc::ClientContext* context, const ::collect::FileInfo& request, ::collect::CollectResult* response) {
  return ::grpc::internal::BlockingUnaryCall< ::collect::FileInfo, ::collect::CollectResult, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_add_file_info_, context, request, response);
}

void CollectService::Stub::async::add_file_info(::grpc::ClientContext* context, const ::collect::FileInfo* request, ::collect::CollectResult* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::collect::FileInfo, ::collect::CollectResult, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_add_file_info_, context, request, response, std::move(f));
}

void CollectService::Stub::async::add_file_info(::grpc::ClientContext* context, const ::collect::FileInfo* request, ::collect::CollectResult* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_add_file_info_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::collect::CollectResult>* CollectService::Stub::PrepareAsyncadd_file_infoRaw(::grpc::ClientContext* context, const ::collect::FileInfo& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::collect::CollectResult, ::collect::FileInfo, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_add_file_info_, context, request);
}

::grpc::ClientAsyncResponseReader< ::collect::CollectResult>* CollectService::Stub::Asyncadd_file_infoRaw(::grpc::ClientContext* context, const ::collect::FileInfo& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncadd_file_infoRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::ClientWriter< ::collect::FileContext>* CollectService::Stub::add_file_contextRaw(::grpc::ClientContext* context, ::collect::CollectResult* response) {
  return ::grpc::internal::ClientWriterFactory< ::collect::FileContext>::Create(channel_.get(), rpcmethod_add_file_context_, context, response);
}

void CollectService::Stub::async::add_file_context(::grpc::ClientContext* context, ::collect::CollectResult* response, ::grpc::ClientWriteReactor< ::collect::FileContext>* reactor) {
  ::grpc::internal::ClientCallbackWriterFactory< ::collect::FileContext>::Create(stub_->channel_.get(), stub_->rpcmethod_add_file_context_, context, response, reactor);
}

::grpc::ClientAsyncWriter< ::collect::FileContext>* CollectService::Stub::Asyncadd_file_contextRaw(::grpc::ClientContext* context, ::collect::CollectResult* response, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::internal::ClientAsyncWriterFactory< ::collect::FileContext>::Create(channel_.get(), cq, rpcmethod_add_file_context_, context, response, true, tag);
}

::grpc::ClientAsyncWriter< ::collect::FileContext>* CollectService::Stub::PrepareAsyncadd_file_contextRaw(::grpc::ClientContext* context, ::collect::CollectResult* response, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncWriterFactory< ::collect::FileContext>::Create(channel_.get(), cq, rpcmethod_add_file_context_, context, response, false, nullptr);
}

::grpc::Status CollectService::Stub::add_prop_info(::grpc::ClientContext* context, const ::collect::PropInfo& request, ::collect::CollectResult* response) {
  return ::grpc::internal::BlockingUnaryCall< ::collect::PropInfo, ::collect::CollectResult, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_add_prop_info_, context, request, response);
}

void CollectService::Stub::async::add_prop_info(::grpc::ClientContext* context, const ::collect::PropInfo* request, ::collect::CollectResult* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::collect::PropInfo, ::collect::CollectResult, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_add_prop_info_, context, request, response, std::move(f));
}

void CollectService::Stub::async::add_prop_info(::grpc::ClientContext* context, const ::collect::PropInfo* request, ::collect::CollectResult* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_add_prop_info_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::collect::CollectResult>* CollectService::Stub::PrepareAsyncadd_prop_infoRaw(::grpc::ClientContext* context, const ::collect::PropInfo& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::collect::CollectResult, ::collect::PropInfo, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_add_prop_info_, context, request);
}

::grpc::ClientAsyncResponseReader< ::collect::CollectResult>* CollectService::Stub::Asyncadd_prop_infoRaw(::grpc::ClientContext* context, const ::collect::PropInfo& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncadd_prop_infoRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status CollectService::Stub::add_linux_api_info(::grpc::ClientContext* context, const ::collect::ApiInfo& request, ::collect::CollectResult* response) {
  return ::grpc::internal::BlockingUnaryCall< ::collect::ApiInfo, ::collect::CollectResult, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_add_linux_api_info_, context, request, response);
}

void CollectService::Stub::async::add_linux_api_info(::grpc::ClientContext* context, const ::collect::ApiInfo* request, ::collect::CollectResult* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::collect::ApiInfo, ::collect::CollectResult, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_add_linux_api_info_, context, request, response, std::move(f));
}

void CollectService::Stub::async::add_linux_api_info(::grpc::ClientContext* context, const ::collect::ApiInfo* request, ::collect::CollectResult* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_add_linux_api_info_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::collect::CollectResult>* CollectService::Stub::PrepareAsyncadd_linux_api_infoRaw(::grpc::ClientContext* context, const ::collect::ApiInfo& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::collect::CollectResult, ::collect::ApiInfo, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_add_linux_api_info_, context, request);
}

::grpc::ClientAsyncResponseReader< ::collect::CollectResult>* CollectService::Stub::Asyncadd_linux_api_infoRaw(::grpc::ClientContext* context, const ::collect::ApiInfo& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncadd_linux_api_infoRaw(context, request, cq);
  result->StartCall();
  return result;
}

CollectService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      CollectService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< CollectService::Service, ::collect::DeviceInfo, ::collect::CollectResult, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](CollectService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::collect::DeviceInfo* req,
             ::collect::CollectResult* resp) {
               return service->add_devices(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      CollectService_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< CollectService::Service, ::collect::FileInfo, ::collect::CollectResult, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](CollectService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::collect::FileInfo* req,
             ::collect::CollectResult* resp) {
               return service->add_file_info(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      CollectService_method_names[2],
      ::grpc::internal::RpcMethod::CLIENT_STREAMING,
      new ::grpc::internal::ClientStreamingHandler< CollectService::Service, ::collect::FileContext, ::collect::CollectResult>(
          [](CollectService::Service* service,
             ::grpc::ServerContext* ctx,
             ::grpc::ServerReader<::collect::FileContext>* reader,
             ::collect::CollectResult* resp) {
               return service->add_file_context(ctx, reader, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      CollectService_method_names[3],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< CollectService::Service, ::collect::PropInfo, ::collect::CollectResult, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](CollectService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::collect::PropInfo* req,
             ::collect::CollectResult* resp) {
               return service->add_prop_info(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      CollectService_method_names[4],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< CollectService::Service, ::collect::ApiInfo, ::collect::CollectResult, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](CollectService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::collect::ApiInfo* req,
             ::collect::CollectResult* resp) {
               return service->add_linux_api_info(ctx, req, resp);
             }, this)));
}

CollectService::Service::~Service() {
}

::grpc::Status CollectService::Service::add_devices(::grpc::ServerContext* context, const ::collect::DeviceInfo* request, ::collect::CollectResult* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status CollectService::Service::add_file_info(::grpc::ServerContext* context, const ::collect::FileInfo* request, ::collect::CollectResult* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status CollectService::Service::add_file_context(::grpc::ServerContext* context, ::grpc::ServerReader< ::collect::FileContext>* reader, ::collect::CollectResult* response) {
  (void) context;
  (void) reader;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status CollectService::Service::add_prop_info(::grpc::ServerContext* context, const ::collect::PropInfo* request, ::collect::CollectResult* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status CollectService::Service::add_linux_api_info(::grpc::ServerContext* context, const ::collect::ApiInfo* request, ::collect::CollectResult* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace collect

