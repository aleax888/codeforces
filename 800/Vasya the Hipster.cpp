#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    cout << min(a, b) << " " << abs(a - b) / 2;
}

// https://codeforces.com/problemset/problem/581/A