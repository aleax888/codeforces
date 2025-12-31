#include <iostream>
#include <string>
using namespace std;

bool is_posible(int n, string &x, int m, string &s)
{
    bool ans = false;
    int index = 0;

    do
    {
        index = x.find(s[0], index);
        if (index == string::npos)
        {
            return false;
        }
        size_t i = 0;
        for (; i < m; i++)
        {
            if (s[i] != x[(index + i) % n])
            {
                index++;
                break;
            }
        }
        ans = i == m;
    } while (!ans);
    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, m, ans = 0;
        string x, s;
        cin >> n >> m >> x >> s;

        if (!is_posible(n, x, m, s))
        {
            cout << -1 << endl;
            continue;
        }

        while (x.find(s) == string::npos)
        {
            ans++;
            x = x + x;
        }
        cout << ans << endl;
    }
}

// link: https://codeforces.com/problemset/problem/1881/A
