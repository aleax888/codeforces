#include <iostream>
using namespace std;

int main()
{
    long long x;
    cin >> x;
    cout << (x / 5 + (x % 5 ? 1 : 0));
}

// https://codeforces.com/problemset/problem/617/A