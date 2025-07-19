#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    cout.setf(std::ios::fixed);
    cout.precision(10);
    int n, l;
    double ans, past_a, aux;
    cin >> n >> l;
    vector<double> a(n);
    for (size_t i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end());
    ans = past_a = a[0];

    for (auto &&i : a)
    {
        aux = (i - past_a) / 2;
        // cout << i << " " << past_a << " " << aux << endl;
        if (aux > ans)
        {
            ans = aux;
        }
        past_a = i;
    }
    aux = l - a[n - 1];

    cout << max(aux, ans);
}

// https://codeforces.com/problemset/problem/492/B