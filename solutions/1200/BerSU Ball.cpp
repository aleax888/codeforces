#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int ans = 0, aux, m, n;
    cin >> n;
    vector<int> a(n);
    for (size_t i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> m;
    vector<int> b(m);
    for (size_t i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    sort(a.begin(), a.end(), greater<int>());
    sort(b.begin(), b.end(), greater<int>());

    for (size_t i = 0, j = 0; i < n && j < m;)
    {
        aux = a[i] - b[j];
        if (aux < 2 && aux > -2)
        {
            ans++;
            // cout << "+ " << a[i] << " - " << b[j] << " -> " << ans << endl;
            i++;
            j++;
        }
        else if (aux > 1)
        {
            // cout << "j " << a[i] << " - " << b[j] << " -> " << ans << endl;
            i++;
        }
        else if (aux < -1)
        {
            // cout << "i " << a[i] << " - " << b[j] << " -> " << ans << endl;
            j++;
        }
    }

    cout << ans << endl;
}

// https://codeforces.com/problemset/problem/489/B