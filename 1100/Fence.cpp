#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, k, i = 0, sum = 0, min_sum, ans = 1;
    cin >> n >> k;
    vector<int> h(n);

    for (; i < k; ++i)
    {
        cin >> h[i];
        sum += h[i];
    }
    min_sum = sum;
    for (int j = 0; i < n; ++i, ++j)
    {
        cin >> h[i];
        sum -= h[j];
        sum += h[i];
        if (sum < min_sum)
        {
            ans = j + 2;
            min_sum = sum;
        }
    }
    cout << ans;
}

// https://codeforces.com/contest/363/problem/B