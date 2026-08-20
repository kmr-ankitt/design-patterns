#include <string>
#pragma once
#include "httpRequest.h"

/**
 * Each step returns a reference to the next step
 */
class MethodStep;
class HeaderStep;
class OptionalStep;

class UrlStep
{
public:
    virtual MethodStep *withUrl(const std::string &url) = 0;
};

class MethodStep
{
public:
    virtual HeaderStep *withMethod(HttpMethod method) = 0;
};

class HeaderStep
{
public:
    virtual OptionalStep *withHeader(const std::string &key, const std::string &value) = 0;
};

class OptionalStep
{
public:
    virtual OptionalStep *withBody(const std::string &body) = 0;
    virtual OptionalStep *withQueryParam(const std::string &key, const std::string &value) = 0;
    virtual OptionalStep *withTimeout(const unsigned int timeout) = 0;
    virtual HttpRequest *build() = 0;
};