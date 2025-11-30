#include <iostream>
using namespace std;

int main()
{
    bool ans;
    int t, n, k, a_i;
    cin >> t;
    for (int i = 0; i < t; ++i)
    {
        ans = false;
        cin >> n >> k;
        for (int j = 0; j < n; ++j)
        {
            cin >> a_i;
            if (a_i == k)
            {
                ans = true;
            }
        }
        cout << (ans ? "YES" : "NO") << endl;
    }
}

// https://codeforces.com/contest/1878/problem/A