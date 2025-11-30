#include <iostream>
#include <utility>
using namespace std;

pair<long long, long long> get_count(long long x)
{
    if (x == 0)
    {
        return pair<long long, long long>(0, 0);
    }
    else if (x == 1)
    {
        return pair<long long, long long>(1, 0);
    }
    else if (x == 2)
    {
        return pair<long long, long long>(0, 1);
    }
    else
    {
        long long aux = x / 3;
        return pair<long long, long long>(aux, aux);
    }
}

int main()
{
    pair<long long, long long> aux1, aux2;
    long long t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        aux1 = get_count(n);
        aux2 = get_count(n % 3);
        // cout << "|" << aux1.first + (n < 3 ? 0 : aux2.first) << " " << aux1.second + (n < 3 ? 0 : aux2.second) << "|" << endl;
        cout << aux1.first + (n < 3 ? 0 : aux2.first) << " " << aux1.second + (n < 3 ? 0 : aux2.second) << endl;
    }
}

// https://codeforces.com/problemset/problem/1551/A