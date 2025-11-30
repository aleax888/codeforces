#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n, a[100], max = INT_MIN, ans = 0;
    cin >> n;

    for (size_t i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    for (size_t i = 0; i < n; i++)
    {
        ans += max - a[i];
    }
    cout << ans;
}

// https://codeforces.com/problemset/problem/758/A