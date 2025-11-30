#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main()
{
    int n, m, ans = INT_MAX;
    cin >> n >> m;

    vector<int> f(m);
    for (size_t i = 0; i < m; i++)
    {
        cin >> f[i];
    }
    sort(f.begin(), f.end());

    for (size_t i = 0, j = n - 1; j < m; i++, j++)
    {
        int aux = f[j] - f[i];
        if (aux < ans)
        {
            ans = aux;
        }
    }
    cout << ans;
}

// https://codeforces.com/problemset/problem/337/A