#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        short int n, min_diff = 1000, curr_diff = 0;
        cin >> n;
        vector<short int> s(n);
        for (size_t i = 0; i < n; i++)
        {
            cin >> s[i];
        }
        sort(s.begin(), s.end());

        for (size_t i = 1; i < n; i++)
        {
            curr_diff = s[i] - s[i - 1];
            if (curr_diff < min_diff)
            {
                min_diff = curr_diff;
            }
        }
        // cout << "|" << min_diff << "|" << endl;
        cout << min_diff << endl;
    }
}

// link: https://codeforces.com/problemset/problem/1360/B
