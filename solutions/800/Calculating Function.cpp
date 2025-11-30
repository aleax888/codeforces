#include <iostream>
using namespace std;

int main()
{
    long long n, half_n, half_ceil_n, ans;
    cin >> n;

    half_n = n / 2;
    half_ceil_n = (n % 2 ? half_n + 1 : half_n);
    ans = (half_n * (half_n + 1) - half_ceil_n * half_ceil_n);
    cout << ans;
}

// https://codeforces.com/problemset/problem/486/A