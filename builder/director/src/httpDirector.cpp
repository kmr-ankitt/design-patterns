#include "httpRequest.h"
#include "httpBuilder.h"
#include "httpDirector.h"

HttpRequest HttpDirector::createGetRequest(const std::string &url)
{
    return HttpBuilder()
        .withUrl(url)
        .withMethod(HttpMethod::GET)
        .build();
}

HttpRequest HttpDirector::createPostRequest(const std::string &url, const std::string &body)
{
    return HttpBuilder()
        .withUrl(url)
        .withMethod(HttpMethod::POST)
        .withBody(body)
        .build();
}

HttpRequest HttpDirector::createPutRequest(const std::string &url, const std::string &body)
{
    return HttpBuilder()
        .withUrl(url)
        .withMethod(HttpMethod::PUT)
        .withBody(body)
        .build();
}

HttpRequest HttpDirector::createDeleteRequest(const std::string &url)
{
    return HttpBuilder()
        .withUrl(url)
        .withMethod(HttpMethod::DELETE)
        .build();
}

HttpRequest HttpDirector::createPatchRequest(const std::string &url, const std::string &body)
{
    return HttpBuilder()
        .withUrl(url)
        .withMethod(HttpMethod::PATCH)
        .withBody(body)
        .build();
}

HttpRequest HttpDirector::createRequest(const std::string &url, const HttpMethod method, const std::string &body)
{
    return HttpBuilder()
        .withUrl(url)
        .withMethod(method)
        .withBody(body)
        .build();
}