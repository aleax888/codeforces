#include <iostream>
using namespace std;

int main()
{
    long long n, m, xenia = 1, a_i, ans = 0;
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        cin >> a_i;
        long long aux = a_i - xenia;
        ans += (aux < 0 ? n + aux : aux);
        xenia = a_i;
    }

    cout << ans;
}

// https://codeforces.com/problemset/problem/339/B