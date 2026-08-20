#include "httpRequest.h"
#include "httpSteps.h"
#pragma once

class HttpBuilder : public UrlStep,
                    public MethodStep,
                    public HeaderStep,
                    public OptionalStep
{
private:
    HttpRequest *request;

public:
    static UrlStep *create();
    MethodStep *withUrl(const std::string &url) override;
    HeaderStep *withMethod(HttpMethod method) override;
    OptionalStep *withHeader(const std::string &key, const std::string &value) override;
    OptionalStep *withBody(const std::string &body) override;
    OptionalStep *withQueryParam(const std::string &key, const std::string &value) override;
    OptionalStep *withTimeout(const unsigned int timeout) override;
    HttpRequest *build() override;
    ~HttpBuilder(); 
};