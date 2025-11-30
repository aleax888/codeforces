#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t, n;
    cin >> t;
    for (size_t i = 0; i < t; i++)
    {
        cin >> n;
        cout << ceil(n / 2) << endl;
    }
}

// https://codeforces.com/problemset/problem/1370/A