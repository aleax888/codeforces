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
        char ans = '9';
        string x;
        cin >> x;

        for (auto &&i : x)
        {
            if (i < ans)
            {
                ans = i;
            }
        }
        cout << ans << endl;
    }
}

// link: https://codeforces.com/problemset/problem/2126/A
