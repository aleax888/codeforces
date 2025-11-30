#include <iostream>
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cout.setf(std::ios::fixed);
    cout.precision(0);
    long long t, k, x;
    cin >> t;
    for (size_t test_case_i = 0; test_case_i < t; test_case_i++)
    {
        cin >> k >> x;

        cout << x * pow(2, k) << endl;
    }
}

// https://codeforces.com/problemset/problem/2137/A