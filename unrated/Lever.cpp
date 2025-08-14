#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, t, ans;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        ans = 0;
        cin >> t;
        vector<int> a(t), b(t);
        for (int j = 0; j < t; ++j)
        {
            cin >> a[j];
        }
        for (int j = 0; j < t; ++j)
        {
            cin >> b[j];
            if (a[j] > b[j])
            {
                ans += a[j] - b[j];
            }
        }
        // cout << "!" << ans + 1 << "!" << endl;
        cout << ans + 1 << endl;
    }
}

// https://codeforces.com/contest/2131/problem/A