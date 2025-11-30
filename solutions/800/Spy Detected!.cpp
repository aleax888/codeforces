#include <iostream>
using namespace std;

int main()
{
    int t, n, a1, a2, a3, aux, ans = -1;
    cin >> t;

    for (size_t i = 0; i < t; i++)
    {
        cin >> n;
        cin >> a1 >> a2 >> a3;

        if (a1 != a2 && a1 != a3)
        {
            ans = 0;
        }
        else if (a2 != a1 && a2 != a3)
        {
            ans = 1;
        }
        else if (a3 != a1 && a3 != a2)
        {
            ans = 2;
        }
        else
        {
            ans = -1;
        }
        if (ans == -1)
        {
            for (size_t j = 3; j < n; j++)
            {
                cin >> aux;
                if (aux != a1)
                {
                    ans = j;
                }
            }
        }
        else
        {
            for (size_t j = 3; j < n; j++)
            {
                cin >> aux;
            }
        }

        // cout << "|" << ans + 1 << "|" << endl;
        cout << ans + 1 << endl;
    }
}

// https://codeforces.com/problemset?order=BY_SOLVED_DESC