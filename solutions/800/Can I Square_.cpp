#include <iostream>
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
        long long n, a_sum = 0, a_i, aux;
        cin >> n;
        for (size_t i = 0; i < n; i++)
        {
            cin >> a_i;
            a_sum += a_i;
        }

        aux = sqrt(a_sum);
        cout << (aux * aux == a_sum ? "YES" : "NO") << endl;
    }
}

// link: https://codeforces.com/problemset/problem/1915/C
