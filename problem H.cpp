// problem H.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
using namespace std;

void func(int l, int n) {
    if (l> n)
        return;

    for (int i = 0; i < l- 1; i++)
        cout << " ";
    for (int i = 0; i < 2 * (n - l) + 1; i++)
        cout << "*";

    cout << endl;

    func(l+ 1, n);
}

int main() {
    int N;
    cin >> N;

    func(1, N);

    return 0;
}