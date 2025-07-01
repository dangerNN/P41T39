#pragma once
#include "Date.h"
#include <map>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Diary
{
    map<Date, vector<string>> records;

public:
    Diary();
    void addEvent(Date d, string description);
    void showAll()const;
    void findByDate(Date d)const;
    void delEvent(Date date, string description);
};