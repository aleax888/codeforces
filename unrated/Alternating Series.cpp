#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t, n;
    cin >> t;
    for (int i = 0; i < t; ++i)
    {
        cin >> n;
        n--;
        cout << -1;
        for (int j = 1; j < n; ++j)
        {
            if (j % 2)
            {
                cout << " " << 3;
            }
            else
            {
                cout << " " << -1;
            }
        }
        cout << " " << (n % 2 ? 2 : -1) << endl;
    }
}

// https://codeforces.com/contest/2131/problem/B