#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long n, m, a;
    cin >> n >> m >> a;
    cout << ((n + a - 1) / a) * ((m + a - 1) / a);
}

// https://codeforces.com/problemset/problem/1/A