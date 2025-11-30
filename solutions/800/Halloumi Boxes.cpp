#include <iostream>
#include <climits>
using namespace std;

int main()
{
    long long t, n, k, a_i, _min;
    cin >> t;
    for (size_t test_case_i = 0; test_case_i < t; test_case_i++)
    {
        bool is_sorted = true;
        _min = LLONG_MIN;
        cin >> n >> k;
        for (size_t i = 0; i < n; i++)
        {
            cin >> a_i;
            if (a_i < _min)
            {
                is_sorted = false;
            }
            _min = a_i;
        }
        if (is_sorted)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << (k > 1 ? "YES" : "NO") << endl;
        }
    }
}

// https://codeforces.com/problemset/problem/1903/A