#include <iostream>
#include <string>
#include <map>
#include "Diary.h"
#include "Date.h"
#include "UsernameAndPassword.h"
using namespace std;

int main() {
	/*string word;
	map<string, int> words;

	while (word != "stop") {
		cout << "Enter word: ";
		cin >> word;
		if (word == "stop") break;

		if (words.find(word) == words.end()) {
			//words.insert(pair<string, int>(word, 1));
			words[word] = 1; // òå ñàìå
		}
		else {
			words[word] ++;
		}
	}

	for (auto item : words) {
		cout << item.first << " ~ " << item.second << endl;
	}*/

	/*Diary Daniil;
	Daniil.addEvent(Date() - 1, "Sleep");
	Daniil.showAll();
	Daniil.findByDate(Date(2026, 6, 3));
	cout << "==========================\n";
	Daniil.addEvent(Date(), "C++");
	Daniil.delEvent(Date() - 1, "Sleep");
	Daniil.delEvent(Date(2026, 6, 3), "Birthday");*/
	UsernameAndPassword users;
	users.registerUser("Daniil", "12345");
	users.registerUser("Daniil", "12345");
	users.logoutUser("Daniil");
	users.loginUser("Daniil", "12345");
	users.loginUser("Daniil", "12345");
	users.logoutUser("Daniil");






}