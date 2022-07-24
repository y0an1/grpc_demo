
#ifndef GRPC_EXAMPLE_CMAKE_COLLECTTYPE_H
#define GRPC_EXAMPLE_CMAKE_COLLECTTYPE_H

class PathInfo {
public:

    PathInfo() {
        _path = "";
        _type = "";
        _xattr = "";
        _attr = "";
        _content = "";
        _errno = -1;
    }

    PathInfo(const std::string &path, const std::string &type, const std::string &xattr, const std::string &attr, const std::string &content, int errno_) {
        this->_path = path;
        this->_type = type;
        this->_xattr = xattr;
        this->_attr = attr;
        this->_errno = errno_;
    }

    const std::string &getPath() const {
        return _path;
    }

    void setPath(const std::string &path) {
        this->_path = path;
    }

    const std::string &getType() const {
        return _type;
    }

    void setType(const std::string &type) {
        this->_type = type;
    }

    const std::string &getXattr() const {
        return _xattr;
    }

    void setXattr(const std::string &xattr) {
        this->_xattr = xattr;
    }

    const std::string &getAttr() const {
        return _attr;
    }

    void setAttr(const std::string &attr) {
        this->_attr = attr;
    }

    const std::string &getContent() const {
        return _content;
    }

    void setContent(const std::string &content) {
        this->_content = content;
    }

    int getErrno() const {
        return _errno;
    }

    void setErrno(int errno) {
        _errno = errno;
    }

private:
    std::string _path;
    std::string _type;
    std::string _xattr;
    std::string _attr;
    std::string _content;
    int _errno;
};

#endif //GRPC_EXAMPLE_CMAKE_COLLECTTYPE_H
