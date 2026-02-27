// problem C.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
using namespace std;
void func(int n)
{
    if (n == 0)
        return;
    cout << n;
    if (n > 1)
        cout << " ";

    func(n - 1);
}
int main()
{
	int N;
	cin >> N;
	func(N);
	return 0;
}
