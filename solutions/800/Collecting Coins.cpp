#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        long long a, b, c, n, _max, aux;
        cin >> a >> b >> c >> n;

        _max = max(a, max(b, c));
        aux = (n - (_max * 3 - (a + b + c)));

        cout << (aux < 0 || aux % 3 ? "NO" : "YES") << endl;
    }
}

// link: https://codeforces.com/problemset/problem/1294/A
