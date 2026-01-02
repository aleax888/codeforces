#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s, ans = "";
        getline(cin, s);
        ans += s[0];

        int index = s.find(" ");
        while (index != string::npos)
        {
            ans += s[index + 1];
            index = s.find(" ", index + 1);
        }
        cout << ans << endl;
    }
}

// link: https://codeforces.com/problemset/problem/2094/A
