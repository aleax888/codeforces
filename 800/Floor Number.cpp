#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float t, n, x, ans;
    cin >> t;
    while (t--)
    {
        cin >> n >> x;
        ans = ceil(((n - 2) / x)) + 1;
        cout << (ans ? ans : 1) << endl;
    }
}

// https://codeforces.com/problemset/problem/1426/A