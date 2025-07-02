#include <iostream>
using namespace std;

int main()
{
    int n, a_i, b_i, aux = 0, ans = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a_i >> b_i;
        aux -= a_i;
        aux += b_i;
        if (aux > ans)
        {
            ans = aux;
        }
    }
    cout << ans;
}

// https://codeforces.com/problemset/problem/116/A