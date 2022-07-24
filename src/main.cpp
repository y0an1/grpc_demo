#include <iostream>
#include <sstream>
#include <string>
#include <sys/stat.h>
#include <dirent.h>
#include <fcntl.h>
#include <cerrno>
#include <unistd.h>

using namespace std;

#include "client.h"
#include "CollectType.h"

void write2file(const char *path) {
//    const char *file = "/sdcard/Download/path.txt";
    string file = "/sdcard/Download/path.txt";

    int fd = open(file.c_str(), O_RDWR | O_CREAT | O_APPEND, S_IRWXU | S_IRWXG | S_IRWXO);
    if (fd == -1) {
//        printf("open[%s] errno: %d, errstr:%m\n", file, errno);
        cout << "open[" << file << "] errno: " << errno << ", errstr: " << strerror(errno) << endl;
        return;
    }


//    char abs_path[PATH_MAX] = {0};
//    snprintf(abs_path, PATH_MAX-1, "%s\n", path);

    stringstream ss;
    ss << path << endl;

//    printf("abs_path: %s", abs_path);
    cout << "current path: " << ss.str() << endl;

    if (write(fd, ss.str().c_str(), ss.str().length()) == -1) {
//        printf("write[%s] errno:%d, errstr:%m\n", file, errno);
        cout << "write[" << file << "] errno: " << errno << ", errstr: " << strerror(errno) << endl;
    }

    close(fd);
}

//void list_files(const char *path) {
void list_files(string path) {
//    char abs_path[PATH_MAX] = {0};
    stringstream ss;

    DIR *dir = opendir(path.c_str());
    if (dir == nullptr) {
        cout << "opdir[" << path << "] errno: " << errno << ", errstr: " << strerror(errno) << endl;
        return;
    }

    struct dirent *dp = nullptr;
    while ((dp = readdir(dir)) != nullptr) {
        if (strcmp(dp->d_name, ".") == 0 || strcmp(dp->d_name, "..") == 0 || strcmp(dp->d_name, "proc") == 0) {
            continue;
        }

//        if (strcmp(path, "/") == 0) {
        if (path == "/") {
//            snprintf(abs_path, PATH_MAX - 1, "%s%s", path, dp->d_name);
            ss << path << dp->d_name;
        } else {
//            snprintf(abs_path, PATH_MAX - 1, "%s/%s", path, dp->d_name);
            ss << path << "/" << dp->d_name;
        }

        struct stat st = {0};
        if (lstat(ss.str().c_str(), &st) != 0) {
            cout << "lstat[" << ss.str() << "] errno: " << errno << ", errstr: " << strerror(errno) << endl;
            continue;
        }

//        unsigned int is_r_oth = S_IROTH & st.st_mode;
//        unsigned int is_x_oth = S_IXOTH & st.st_mode;
//        if (0 != is_x_oth && 0 == is_r_oth) {
//            printf("%s - r: %d, x: %d\n", abs_path, is_r_oth, is_x_oth);
//        }

//        write2file(abs_path);
//        if (S_ISDIR(st.st_mode)) {
//            list_files(abs_path);
//        }
    }

    closedir(dir);
}

//void Run() {
//    string address("0.0.0.0:5000");
//    CollectClient client(grpc::CreateChannel(address, grpc::InsecureChannelCredentials()));
//
//    int device_id;
//    device_id = client.send_device_info("111", "111");
//}

int main(int argc, char **argv) {
    list_files("/");
    printf("run ok!\n");
    return 0;
}
