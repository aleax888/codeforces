#include <iostream>
#include <vector>
#include <utility>
using namespace std;

int main()
{
    long long t, n, aux;
    cin >> t;
    for (size_t test_case_i = 0; test_case_i < t; test_case_i++)
    {
        cin >> n;
        vector<pair<long long, bool>> b(n);
        vector<long long> a(n, -1);
        for (size_t e = 0; e < n; e++)
        {
            cin >> aux;
            b[e] = {aux, false};
        }

        size_t i = 0;
        for (; i < n; i++)
        {
            if (b[i].second)
            {
                continue;
            }

            size_t j = i, count = 0;
            for (; j < n && count < b[i].first; j++)
            {
                if (b[j].first == b[i].first && a[j] == -1)
                {
                    a[j] = i + 1;
                    b[j].second = true;
                    count++;
                }
            }

            if (count < b[i].first)
            {
                cout << -1 << endl;
                break;
            }
        }

        if (!(i < n))
        {
            cout << a[0];
            for (size_t j = 1; j < n; j++)
            {
                cout << " " << a[j];
            }
            cout << endl;
        }

        // for (auto &&i : a)
        // {
        //     cout << i << " ";
        // }
        // cout << endl;
    }
}

// https://codeforces.com/problemset/problem/2137/D