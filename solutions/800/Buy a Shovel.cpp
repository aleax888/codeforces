#include <iostream>
using namespace std;

int main()
{
    int k, r, last_digit, ans = 0;
    cin >> k >> r;

    do
    {
        ans++;
        last_digit = (k * ans) % 10;
    } while (last_digit && last_digit != r);
    cout << ans;
}

// https://codeforces.com/problemset/problem/732/A