#include "httpRequest.h"

void HttpRequest::execute()
{
    const char *methodName;

    switch (method)
    {
    case HttpMethod::GET:
        methodName = "GET";
        break;
    case HttpMethod::POST:
        methodName = "POST";
        break;
    case HttpMethod::PUT:
        methodName = "PUT";
        break;
    case HttpMethod::DELETE:
        methodName = "DELETE";
        break;
    case HttpMethod::PATCH:
        methodName = "PATCH";
        break;
    }

    printf("Executing HTTP request with method: %s, URL: %s, Headers: %zu, Body: %s, Query Params: %zu, Timeout: %u\n",
           methodName, url.c_str(), headers.size(), body.c_str(), queryParams.size(), timeout);

}