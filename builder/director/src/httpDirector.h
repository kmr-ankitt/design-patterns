#include "httpRequest.h"
#pragma once

class HttpDirector
{
public:
    static HttpRequest createGetRequest(const std::string &url);
    static HttpRequest createPostRequest(const std::string &url, const std::string &body);
    static HttpRequest createPutRequest(const std::string &url, const std::string &body);
    static HttpRequest createDeleteRequest(const std::string &url);
    static HttpRequest createPatchRequest(const std::string &url, const std::string &body);
    static HttpRequest createRequest(const std::string &url, const HttpMethod method, const std::string &body = "");
};
