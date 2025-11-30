#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (size_t i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (size_t j = 0; j < n; j++)
        {
            cin >> a[j];
        }
        if (n == 1)
        {
            cout << "YES" << endl;
            continue;
        }
        sort(a.begin(), a.end());
        size_t j = 1;
        for (; j < n; j++)
        {
            if (a[j] > a[j - 1] + 1)
            {
                cout << "NO" << endl;
                break;
            }
        }
        if (j == n)
        {
            cout << "YES" << endl;
        }
    }
}

// https://codeforces.com/problemset/problem/1399/A