// problem E.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
using namespace std;

void func(int n) {
    if (n == 0)
        return;
    func(n / 2);
    cout << (n % 2);
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;

        func(N);
        cout << endl;
    }

    return 0;
}