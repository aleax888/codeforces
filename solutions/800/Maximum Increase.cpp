#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, count = 0, ans = 0, n_i, prev_n_i = 0;
    cin >> n;

    for (size_t i = 0; i < n; i++)
    {
        cin >> n_i;
        if (prev_n_i < n_i)
        {
            count++;
            if (count > ans)
            {
                ans = count;
            }
        }
        else
        {
            count = 1;
        }
        prev_n_i = n_i;
    }
    cout << ans;
}

// link: https://codeforces.com/problemset/problem/702/A
