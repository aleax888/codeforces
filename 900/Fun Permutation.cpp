#include <iostream>
using namespace std;

int main()
{
    int t, n, p_i;
    cin >> t;
    for (size_t test_case_i = 0; test_case_i < t; test_case_i++)
    {
        cin >> n >> p_i;
        n++;
        cout << " " << n - p_i;
        for (size_t i = 2; i < n; i++)
        {
            cin >> p_i;
            cout << " " << n - p_i;
        }
        cout << endl;
    }
}

// https://codeforces.com/problemset/problem/2137/B