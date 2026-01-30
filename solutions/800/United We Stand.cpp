#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        vector<long long> a(n);

        for (size_t i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());

        int pivot = n - 1;
        for (; pivot >= 0; pivot--)
        {
            if (a[pivot - 1] < a[pivot])
            {
                break;
            }
        }

        if (pivot > 0)
        {
            cout << pivot << " " << n - pivot << endl;

            cout << a[0];
            for (size_t i = 1; i < pivot; i++)
            {
                cout << " " << a[i];
            }
            cout << endl;
            cout << a[pivot];
            for (size_t i = pivot + 1; i < n; i++)
            {
                cout << " " << a[i];
            }
            cout << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
}

// link: https://codeforces.com/problemset/problem/1859/A
