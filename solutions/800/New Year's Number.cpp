#include <iostream>
using namespace std;

int main()
{
    long int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        cout << (n % 2020 > n / 2020 ? "NO" : "YES") << endl;
    }
}

// https://codeforces.com/problemset/problem/1475/B