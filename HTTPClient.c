#include "application.h"
#include "HttpClient/HttpClient.h"

/**
* Declaring the variables.
*/
unsigned int nextTime = 0;    // Next time to contact the server
int count = 0 ;  // Count of how many times loop went through
HttpClient http;
http_request_t request;
http_response_t response;
http_header_t headers[] = {

      { "Content-type", "application/x-www-form-urlencoded" },
    { NULL, NULL } // NOTE: Always terminate headers will NULL
};

void setup() {
    Serial.begin(9600);
    Serial.print("Application started");
}

void loop() {


    Serial.println();
    Serial.println("Application>\tStart of Loop.");
    // Request path and body can be set at runtime or at setup.

    nextTime = millis() + 10000;
}

void getRequest(){
    request.hostname = "www.timeapi.org";
    request.port = 80;
    request.path = "/utc/now";

    // Get request
    http.get(request, response, headers);
    Serial.print("Application>\tResponse status: ");
    Serial.println(response.status);

    Serial.print("Application>\tHTTP Response Body: ");
    Serial.println(response.body);
}

void postRequest(){
    String val = "watts=" + doubleToString(wattreading,2);
    request.hostname = "yourhost.com";
    request.port = 80;
    request.path = "/sample/site.yyy";
    request.body = val ;
    http.post(request, response, headers);
}
