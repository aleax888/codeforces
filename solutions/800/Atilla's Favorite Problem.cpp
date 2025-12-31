#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, ans = 0;
        string s;
        cin >> n >> s;

        for (auto &&i : s)
        {
            if (ans < i - 96)
            {
                ans = i - 96;
            }
        }

        cout << ans << endl;
    }
}

// link: https://codeforces.com/problemset/problem/1760/B
