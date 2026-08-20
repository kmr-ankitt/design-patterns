#include "httpBuilder.h"

HttpBuilder::HttpBuilder()
{
    this->request = new HttpRequest();
}

HttpBuilder &HttpBuilder::withBody(const std::string body)
{
    this->request->body = body;
    return *this;
}

HttpBuilder &HttpBuilder::withMethod(const HttpMethod method)
{
    switch (method)
    {
    case HttpMethod::GET:
        this->request->method = HttpMethod::GET;
        break;
    case HttpMethod::POST:
        this->request->method = HttpMethod::POST;
        break;
    case HttpMethod::PUT:
        this->request->method = HttpMethod::PUT;
        break;
    case HttpMethod::DELETE:
        this->request->method = HttpMethod::DELETE;
        break;
    case HttpMethod::PATCH:
        this->request->method = HttpMethod::PATCH;
        break;
    }

    return *this;
}

HttpBuilder &HttpBuilder::withHeader(const std::string key, const std::string value)
{
    this->request->headers[key] = value;
    return *this;
}

HttpBuilder &HttpBuilder::withQueryParam(const std::string key, const std::string value)
{
    this->request->queryParams[key] = value;
    return *this;
}

HttpBuilder &HttpBuilder::withTimeout(const unsigned int timeout)
{
    this->request->timeout = timeout;
    return *this;
}

HttpBuilder &HttpBuilder::withUrl(const std::string url)
{
    this->request->url = url;
    return *this;
}

HttpRequest &HttpBuilder::build()
{
    return *this->request;
}