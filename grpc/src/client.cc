#include <string>

#include <grpcpp/grpcpp.h>
#include "proto/collect.grpc.pb.h"
#include "proto/collect.pb.h"

#include "client.h"

using grpc::Channel;
using grpc::ClientContext;
using grpc::Status;

using collect::CollectService;
using collect::DeviceInfo;
using collect::FileInfo;
using collect::FileContext;
using collect::PropInfo;
using collect::ApiInfo;
using collect::CollectResult;
using std::string;

CollectClient::CollectClient(const std::shared_ptr<grpc::Channel> &channel) : stub_(collect::CollectService::NewStub(channel)) {}

int CollectClient::send_device_info(const std::string &model, const std::string &product) {
    DeviceInfo request;
    request.set_model(model);
    request.set_product(product);

    CollectResult reply;
    ClientContext context;

    Status status = stub_->add_devices(&context, request, &reply);
    if (status.ok()) {
        if (reply.ok()) {
            return reply.result();
        } else {
            std::cout << "error msg: " << reply.msg() << std::endl;
            return -1;
        }
    } else {
        std::cout << status.error_code() << ": " << status.error_message() << std::endl;
        return -1;
    }
}

int CollectClient::send_file_info(int device_id, const PathInfo info) {
    FileInfo request;
    request.set_dev_id(device_id);
    request.set_file_path(info.getPath());
    request.set_file_attr(info.getAttr());
    request.set_file_attr_ex(info.getXattr());
    request.set_errno(info.getErrno());
    request.set_file_context(info.getContent());
    request.set_file_type(info.getType());

    CollectResult reply;
    ClientContext context;

    Status status = stub_->add_file_info(&context, request, &reply);
    if (status.ok()) {
        if (reply.ok()) {
            return reply.result();
        } else {
            std::cout << "error msg: " << reply.msg() << std::endl;
            return -1;
        }
    } else {
        std::cout << status.error_code() << ": " << status.error_message() << std::endl;
        return -1;
    }
}

