#include <string>
#include <unordered_map>
#pragma once

enum class HttpMethod {
    GET,
    POST,
    PUT,
    DELETE,
    PATCH,
};

class HttpRequest
{
private:
    std::string body;
    std::unordered_map<std::string, std::string> headers;
    HttpMethod method;
    std::unordered_map<std::string, std::string> queryParams;
    unsigned int timeout;
    std::string url;

public:
    friend class HttpBuilder;

    virtual void execute();
};