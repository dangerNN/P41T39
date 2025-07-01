#include "UsernameAndPassword.h"

UsernameAndPassword::UsernameAndPassword()
{

}

void UsernameAndPassword::registerUser(const string& username, const string& password)
{
    if (users.find(username) != users.end()) {
        cout << "fail: user already exists" << endl;
    }
    else {
        users[username] = password;
        cout << "success: new user added" << endl;
    }
}

void UsernameAndPassword::loginUser(const string& username, const string& password)
{
    if (users.find(username) == users.end()) {
        cout << "fail: no such user" << endl;
    }
    else if (users[username] != password) {
        cout << "fail: incorrect password" << endl;
    }
    else if (find(signInUsers.begin(), signInUsers.end(), username) != signInUsers.end()) {
        cout << "fail: already logged in" << endl;
    }
    else {
        signInUsers.push_back(username);
        cout << "success: user logged in" << endl;
    }
}

void UsernameAndPassword::logoutUser(const string& username)
{
    if (users.find(username) == users.end()) {
        cout << "fail: no such user" << endl;
    }
    else {
        auto it = find(signInUsers.begin(), signInUsers.end(), username);
        if (it == signInUsers.end()) {
            cout << "fail: already logged out" << endl;
        }
        else {
            signInUsers.erase(it);
            cout << "success: user logged out" << endl;
        }
    }
}
