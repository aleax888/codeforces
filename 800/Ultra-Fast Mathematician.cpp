#include <iostream>
#include <bitset>
using namespace std;

int main()
{
    string s1, s2, ans;
    cin >> s1 >> s2;

    for (size_t i = 0, s = s1.size(); i < s; i++)
    {
        ans += (s1[i] - '0') ^ (s2[i] - '0') + '0';
    }

    cout << ans;
}

// https://codeforces.com/problemset/problem/61/A