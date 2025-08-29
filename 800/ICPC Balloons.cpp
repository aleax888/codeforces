#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main()
{
    int t, n, ans;
    string s;
    cin >> t;

    for (size_t i = 0; i < t; i++)
    {
        ans = 0;
        unordered_set<char> solutions;
        cin >> n >> s;
        for (auto &&i : s)
        {
            if (solutions.find(i) == solutions.end())
            {
                solutions.insert(i);
                ans += 2;
            }
            else
            {
                ans++;
            }
        }

        cout << ans << endl;
        // cout << "|" << ans << "|" << endl;
    }
}

// https://codeforces.com/problemset/problem/1703/B