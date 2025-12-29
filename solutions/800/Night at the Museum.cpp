#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int ans = 0, pointer = 0;
    string s;
    cin >> s;

    for (auto &&i : s)
    {
        ans += min(26 - abs(((i - 97) - pointer)), abs(((i - 97) - pointer)));
        pointer = (i - 97);
    }

    cout << ans;
}

// link: https://codeforces.com/problemset/problem/731/A
