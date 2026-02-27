// problem A.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
using namespace std;

void print(int n) {
    if (n == 0)
        return;

    cout << "I love Recursion" << endl;
    print(n - 1);
}

int main() {
    int N;
    cin >> N;
    print(N);
    return 0;
}