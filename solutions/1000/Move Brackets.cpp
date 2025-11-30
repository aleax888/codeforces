#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    int t, ans, count, n;
    cin >> t;
    for (size_t test_case_i = 0; test_case_i < t; test_case_i++)
    {
        ans = count = 0;
        cin >> n >> s;

        for (size_t i = 0; i < n; i++)
        {
            if (s[i] == ')' && !count)
            {
                ans++;
            }
            else if (s[i] == '(')
            {
                count++;
            }
            else
            {
                count--;
            }
        }
        ans += count;

        cout << ans / 2 << endl;
        // cout << '|' << ans / 2 << "|" << endl;
    }
}

// https://codeforces.com/problemset/problem/1374/C