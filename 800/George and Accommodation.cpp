#include <iostream>
using namespace std;

int main()
{
    int n, p_i, q_i, ans = 0;
    cin >> n;

    for (size_t i = 0; i < n; i++)
    {
        cin >> p_i >> q_i;
        if (q_i - p_i > 1)
        {
            ans++;
        }
    }
    cout << ans;
}

// https://codeforces.com/problemset/problem/467/A