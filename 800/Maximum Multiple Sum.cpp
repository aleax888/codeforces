#include <iostream>
using namespace std;

int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        cout << (n == 3 ? 3 : 2) << endl;
    }
}

// https://codeforces.com/problemset/problem/1985/B