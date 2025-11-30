#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, *a, sum = 0, remaining_sum = 0;
    cin >> n;
    a = new int[n];

    for (size_t i = 0; i < n; i++)
    {
        cin >> a[i];
        remaining_sum += a[i];
    }

    sort(a, a + n, greater<int>());

    for (size_t i = 0; i < n; i++)
    {
        sum += a[i];
        remaining_sum -= a[i];
        if (sum > remaining_sum)
        {
            cout << i + 1;
            return 0;
        }
    }
}

// https://codeforces.com/problemset/problem/160/A