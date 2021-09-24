// istringstream.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int find_short(const string& str)
{
    // istringstream breaks up the string into separate strings
    istringstream inp(str);
    string s;
    int len = -1;
    while (getline(inp, s, ' '))
        if (s.length() < len)
            len = s.length();
    return len;
}



