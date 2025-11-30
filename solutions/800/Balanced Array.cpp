#include <iostream>
using namespace std;

int main()
{
    int t, n;
    cin >> t;
    for (size_t i = 0; i < t; i++)
    {
        cin >> n;
        if (n % 4)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            int even_count = 0, odd_count = 0;
            for (size_t i = 2; i <= n; i += 2)
            {
                even_count += i;
                cout << i << " ";
            }
            for (size_t i = 1, s = n - 1; i < s; i += 2)
            {
                odd_count += i;
                cout << i << " ";
            }
            cout << even_count - odd_count << endl;
        }
    }
}

// https://codeforces.com/problemset/problem/1343/B