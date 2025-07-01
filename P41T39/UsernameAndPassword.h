#pragma once
#include "Date.h"
#include "Diary.h"
#include <map>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class UsernameAndPassword
{
	map<string, string> users; 
	vector<string> signInUsers;
public:
	UsernameAndPassword();
	void registerUser(const string& username, const string& password);
	void loginUser(const string& username, const string& password);
	void logoutUser(const string& username);



};

