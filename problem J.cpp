// problem J.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void func(long long n, long long result) {

    if (n == 0 || n == 1) {
        cout << result;
        return;
    }

    func(n - 1, result * n);
}

int main() {
    long long N;
    cin >> N;

    func(N, 1);

    return 0;
}