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
        bool ans = false;
        int n, x = 0, y = 0;
        string s;

        cin >> n >> s;

        for (auto &&i : s)
        {
            if (i == 'U')
            {
                y++;
            }
            else if (i == 'D')
            {
                y--;
            }
            else if (i == 'R')
            {
                x++;
            }
            else if (i == 'L')
            {
                x--;
            }
            if (x == 1 && y == 1)
            {
                ans = true;
            }
        }
        cout << (ans ? "YES" : "NO") << endl;
    }
}

// link: https://codeforces.com/problemset/problem/1791/B
