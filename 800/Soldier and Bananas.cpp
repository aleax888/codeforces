#include <iostream>
using namespace std;

int main()
{
    long long k, n, w, ans;
    cin >> k >> n >> w;
    ans = ((k * ((w * (w + 1)) / 2)) - n);
    cout << (ans < 0 ? 0 : ans);
}

// https://codeforces.com/problemset/problem/546/A