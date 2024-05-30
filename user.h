#ifndef USER_H
#define USER_H

#include <string>

class User {
public:
    User();
    // Declare functions for user management
    void signUp(const std::string& username, const std::string& password);
    bool logIn(const std::string& username, const std::string& password);
    std::string generateJWT(const std::string& username); // JWT generation function
    bool verifyJWT(const std::string& token); // JWT verification function
private:
    // Define private member variables or functions if needed
};

#endif // USER_H
