#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, a_i, odds = 0;

        cin >> n;
        for (size_t i = 0, s = 2 * n; i < s; i++)
        {
            cin >> a_i;
            if (a_i % 2)
            {
                odds++;
            }
        }
        cout << (odds == n ? "YES" : "NO") << endl;
    }
}

// link: https://codeforces.com/problemset/problem/1542/A
