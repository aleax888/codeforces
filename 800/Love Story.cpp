#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t, ans;
    cin >> t;
    string cf = "codeforces", s;
    for (size_t i = 0; i < t; i++)
    {
        ans = 0;
        cin >> s;
        for (size_t j = 0; j < 10; j++)
        {
            if (cf[j] != s[j])
            {
                ans++;
            }
        }
        cout << ans << endl;
    }
}

// https://codeforces.com/problemset/problem/1829/A