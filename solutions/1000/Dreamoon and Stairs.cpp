#include <iostream>
#include <climits>
#include <cmath>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, _min;
    cin >> n >> m;

    if (n < m)
    {
        cout << -1;
        return 0;
    }

    _min = ceil(n / 2.0);
    cout << (_min > m ? _min + (_min % m ? (m - (_min % m)) : 0) : m);
}

// link: https://codeforces.com/problemset/problem/476/A
