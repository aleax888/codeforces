#include <iostream>
using namespace std;

int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        cout << ((n / 4) + ((n % 4) / 2)) << endl;
    }
}

// https://codeforces.com/problemset/problem/1996/A