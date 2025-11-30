#include <iostream>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    int bills[5] = {100, 20, 10, 5, 1}, ans = 0;

    for (size_t i = 0; i < 5; i++)
    {
        ans += n / bills[i];
        n %= bills[i];
    }
    cout << ans;
}

// https://codeforces.com/problemset/problem/996/A