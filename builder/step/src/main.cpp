#include "httpBuilder.h"

int main(){
    HttpRequest* req = HttpBuilder::create()
    ->withUrl("https://example.com")
    ->withMethod(HttpMethod::GET)
    ->withHeader("Content-Type", "application/json")
    ->withBody("{\"key\": \"value\"}")
    ->withQueryParam("param1", "value1")
    ->withTimeout(5000)
    ->build();

    req->execute();
}