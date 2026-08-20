#include "httpDirector.h"

int main(){
    HttpRequest req1 = HttpDirector::createGetRequest("https://example.com");
    req1.execute();

    HttpRequest req2 = HttpDirector::createPostRequest("https://example.com", "body data");
    req2.execute();
}