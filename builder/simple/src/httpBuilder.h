#include "httpRequest.h"

class HttpBuilder
{
private:
    HttpRequest *request;

public:
    HttpBuilder();
    HttpBuilder &withBody(const std::string);
    HttpBuilder &withMethod(const HttpMethod);
    HttpBuilder &withHeader(const std::string, const std::string);
    HttpBuilder &withQueryParam(const std::string, const std::string);
    HttpBuilder &withTimeout(const unsigned int);
    HttpBuilder &withUrl(const std::string);
    HttpRequest &build();
};