#include "httpBuilder.h"

int main(){
    HttpRequest *req = &HttpBuilder()
    .withBody("This is the body of the request")
    .withMethod(HttpMethod::GET)
    .withHeader("Content-Type", "application/json")
    .withQueryParam("param1", "value1")
    .withTimeout(5000)
    .withUrl("https://example.com/api")
    .build();

    req->execute();
}