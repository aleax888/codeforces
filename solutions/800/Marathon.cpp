#include <iostream>
using namespace std;

int main()
{
    int t, a, enemy, ans;
    cin >> t;

    for (size_t i = 0; i < t; i++)
    {
        cin >> a;
        ans = 0;
        for (size_t j = 0; j < 3; j++)
        {
            cin >> enemy;
            if (enemy > a)
            {
                ans++;
            }
        }
        cout << ans << endl;
    }
}

// https://codeforces.com/problemset/problem/1692/A