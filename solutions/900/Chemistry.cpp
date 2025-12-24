#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        unordered_map<int, int> hash;
        string s;
        int n, k, odds_count = 0;

        cin >> n >> k >> s;

        for (auto &&i : s)
        {
            if (hash.find(i) == hash.end())
            {
                hash[i] = 1;
            }
            else
            {
                hash[i]++;
            }
        }

        for (auto &&i : hash)
        {
            if (i.second % 2)
            {
                odds_count++;
            }
        }

        if (odds_count < 2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << (odds_count - 1 <= k ? "YES" : "NO") << endl;
        }
    }
}

// link: https://codeforces.com/problemset/problem/1883/B
