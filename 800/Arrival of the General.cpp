#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main()
{
    int n, min = INT_MAX, min_index = 0, max = INT_MIN, max_index = 0;
    cin >> n;
    vector<int> a(n);

    for (size_t i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] <= min)
        {
            min = a[i];
            min_index = i;
        }
        if (a[i] > max)
        {
            max = a[i];
            max_index = i;
        }
    }

    cout << max_index + (n - min_index - 1) - (max_index > min_index ? 1 : 0);
}

// https://codeforces.com/problemset/problem/144/A
