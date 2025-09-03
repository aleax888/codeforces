#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;
    vector<int> a(n);

    for (int i = 1; i < n; ++i)
    {
        cin >> a[i];
    }

    int i = 1;
    for (; i < t; i = i + a[i])
    {
        // cout << i << endl;
    }

    cout << (i == t ? "YES" : "NO");
}

// https://codeforces.com/contest/500/problem/A