#include <iostream>
using namespace std;

int main()
{
    int t, n, a_i, ans, count;
    cin >> t;
    for (size_t i = 0; i < t; i++)
    {
        ans = 0;
        count = 0;
        cin >> n;
        for (size_t j = 0; j < n; j++)
        {
            cin >> a_i;
            if (a_i)
            {
                ans = max(ans, count);
                count = 0;
            }
            else
            {
                count++;
            }
        }
        ans = max(ans, count);
        // cout << "|" << ans << "|" << endl;
        cout << ans << endl;
    }
}

// https://codeforces.com/problemset/problem/1829/B