#include <iostream>
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
        int n, a_i, ans = -1;
        unordered_map<int, int> a;
        cin >> n;
        for (size_t i = 0; i < n; i++)
        {
            cin >> a_i;
            if (a.find(a_i) == a.end())
            {
                a[a_i] = 1;
            }
            else
            {
                a[a_i]++;
                if (a[a_i] > 2)
                {
                    ans = a_i;
                }
            }
        }
        cout << ans << endl;
        // cout << "|" << ans << "|" << endl;
    }
}

// link: https://codeforces.com/problemset/problem/1669/B
