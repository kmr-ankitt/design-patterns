#include "httpBuilder.h"

UrlStep *HttpBuilder::create()
{
    HttpBuilder *builder = new HttpBuilder();
    builder->request = new HttpRequest();
    return builder;
}

MethodStep *HttpBuilder::withUrl(const std::string &url)
{
    request->url = url;
    return this;
}

HeaderStep *HttpBuilder::withMethod(HttpMethod method)
{
    request->method = method;
    return this;
}

OptionalStep *HttpBuilder::withHeader(const std::string &key, const std::string &value)
{
    request->headers[key] = value;
    return this;
}

OptionalStep *HttpBuilder::withBody(const std::string &body)
{
    request->body = body;
    return this;
}

OptionalStep *HttpBuilder::withQueryParam(const std::string &key, const std::string &value)
{
    request->queryParams[key] = value;
    return this;
}

OptionalStep *HttpBuilder::withTimeout(const unsigned int timeout)
{
    request->timeout = timeout;
    return this;
}

HttpRequest *HttpBuilder::build(){
    return request;
}

HttpBuilder::~HttpBuilder()
{
    delete request;
}