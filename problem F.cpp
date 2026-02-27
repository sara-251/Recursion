// problem F.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
using namespace std;

void func(int arr[],int n) {
    if (n < 0)
        return;
    if (n % 2 == 0)
        cout << arr[n] << " ";
    func(arr,n - 1);
}

int main() {
    int N;
    cin >> N;
    // error ==>>> arr[N]?!

    int arr[99999];

    for (int i = 0; i < N; i++)
        cin >> arr[i];
    func(arr,N - 1);

    return 0;
}