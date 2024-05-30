#include <iostream>
#include "http_server.h"

int main() {
    // Initialize HTTP server
    HTTPServer server;
    server.run(8080); // Change port number as needed
    return 0;
}

