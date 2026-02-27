// problem I.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int func(string s, int i) {
    if (i == s.size())
        return 0;

    char c = s[i];
    bool isVowel =
        (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    return (isVowel ? 1 : 0) + func(s, i + 1);
}

int main() {
    string S;
    getline(cin,S);   //spaces

    cout << func(S, 0);

    return 0;
}