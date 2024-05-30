#ifndef USER_H
#define USER_H

#include <string>

class User {
public:
    User(const std::string& username, const std::string& password);
    // Add getter and setter methods for user properties
private:
    std::string username;
    std::string password;
    // Add other user properties as needed
};

#endif // USER_H
