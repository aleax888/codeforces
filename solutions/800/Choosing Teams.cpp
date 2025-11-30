#include <iostream>
using namespace std;

int main()
{
    int n, k, times, y, ans = 0;
    cin >> n >> k;

    times = 6 - k;
    for (size_t i = 0; i < n; i++)
    {
        cin >> y;
        if (y < times)
        {
            ans++;
        }
    }
    cout << ans / 3;
}

// https://codeforces.com/problemset/problem/432/A