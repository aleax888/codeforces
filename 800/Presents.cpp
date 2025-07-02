#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, aux;
    cin >> n;
    n++;

    vector<int> ans(n);
    for (size_t i = 1; i < n; i++)
    {
        cin >> aux;
        ans[aux] = i;
    }

    for (size_t i = 1; i < n; i++)
    {
        cout << ans[i] << ' ';
    }
}

// https://codeforces.com/problemset/problem/136/A