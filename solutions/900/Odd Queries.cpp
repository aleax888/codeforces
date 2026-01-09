#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        long long n, q;
        cin >> n >> q;
        vector<long long> a(n);

        cin >> a[0];
        for (size_t i = 1; i < n; i++)
        {
            cin >> a[i];
            a[i] += a[i - 1];
        }

        for (size_t i = 0; i < q; i++)
        {
            long long l, r, k, aux1, aux2, aux2k, aux3;
            cin >> l >> r >> k;
            l--;
            r--;

            aux1 = l ? a[l - 1] : 0;
            aux2 = a[r] - aux1;
            aux2k = (r - l + 1) * k;
            aux3 = a[n - 1] - (aux2 + aux1) + abs(aux2 - aux2k);

            cout << ((aux1 + aux2 + aux3) % 2 ? "YES" : "NO") << endl;
        }
    }
}

// link: https://codeforces.com/problemset/problem/1807/D
