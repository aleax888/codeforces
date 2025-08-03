#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    long long pre[100001], n, aux;
    memset(pre, 0, sizeof(pre));

    cin >> n;
    for (size_t i = 0; i < n; i++)
    {
        cin >> aux;
        pre[aux]++;
    }
    for (size_t i = 1; i < 100001; i++)
    {
        pre[i] += pre[i - 1];
    }

    cin >> n;
    for (size_t i = 0; i < n; i++)
    {
        cin >> aux;
        cout << (aux > 100000 ? pre[100000] : pre[aux]) << endl;
    }
}

// https://codeforces.com/problemset/problem/706/B