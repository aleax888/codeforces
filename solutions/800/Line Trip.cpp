#include <iostream>
using namespace std;

int main()
{
    int t, ans, n, x, a_i, a_i_1, aux;
    cin >> t;
    while (t--)
    {
        ans = a_i_1 = 0;
        cin >> n >> x;
        for (size_t i = 0; i < n; i++)
        {
            cin >> a_i;
            aux = a_i - a_i_1;
            a_i_1 = a_i;
            if (ans < aux)
            {
                ans = aux;
            }
        }

        aux = 2 * (x - a_i);
        if (ans < aux)
        {
            ans = aux;
        }

        cout << ans << endl;
        // cout << "|" << ans << "|" << endl;
    }
}

// https://codeforces.com/problemset/problem/1901/A