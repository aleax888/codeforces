#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    long long t, n, a_i, ans;
    cin >> t;
    while (t--)
    {
        ans = 1;
        unordered_set<long long> a;
        cin >> n;
        for (size_t i = 0; i < n; i++)
        {
            cin >> a_i;
            if (a.find(a_i) == a.end())
            {
                a.insert(a_i);
            }
            else
            {
                ans = 0;
            }
        }

        cout << (ans ? "YES" : "NO") << endl;
    }
}

// https://codeforces.com/problemset/problem/1742/B