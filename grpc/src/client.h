

#ifndef GRPC_EXAMPLE_CMAKE_CLIENT_H
#define GRPC_EXAMPLE_CMAKE_CLIENT_H

#include "/usr/local/include/grpcpp/channel.h"
#include "CollectType.h"
#include "proto/collect.grpc.pb.h"

class CollectClient {
public:
    CollectClient(const std::shared_ptr<grpc::Channel>& channel);

    int send_device_info(const std::string &model, const std::string &product);

    int send_file_info(int device_id, PathInfo info);

private:
    std::unique_ptr<collect::CollectService::Stub> stub_;
};

#endif //GRPC_EXAMPLE_CMAKE_CLIENT_H
