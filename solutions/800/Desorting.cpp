#include <iostream>
#include <climits>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        long long n, a_i, aux, ans = LLONG_MAX;

        cin >> n >> a_i;
        for (size_t i = 1; i < n; i++)
        {
            cin >> aux;
            if (aux - a_i < ans)
            {
                ans = aux - a_i;
            }
            a_i = aux;
        }
        cout << (ans >= 0 ? (ans / 2) + 1 : 0) << endl;
    }
}

// link: https://codeforces.com/problemset/problem/1853/A
