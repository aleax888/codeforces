#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int t, n, ans;
    cin >> t;
    for (size_t i = 0; i < t; i++)
    {
        ans = 0;
        cin >> n;
        vector<int> a(n);
        for (size_t j = 0; j < n; j++)
        {
            cin >> a[j];
        }
        for (size_t j = 0; j < n; j++)
        {
            if (j % 2 != a[j] % 2)
            {
                int index = -1;
                for (size_t e = j + 1; e < n; e++)
                {
                    if (e % 2 != a[e] % 2 && e % 2 != j % 2)
                    {
                        index = e;
                        break;
                    }
                }
                if (index == -1)
                {
                    ans = -1;
                }
                else
                {
                    ans++;
                    swap(a[j], a[index]);
                }
            }
            if (ans == -1)
            {
                break;
            }
        }
        cout << ans << endl;
        // cout << "|" << ans << "|" << endl;
    }
}

// https://codeforces.com/problemset/problem/1367/B