#include <iostream>
using namespace std;

int main()
{
    long long t, n, max_element, min_element, a_i;
    cin >> t;
    for (size_t test_case_i = 0; test_case_i < t; test_case_i++)
    {
        cin >> n >> a_i;
        max_element = min_element = a_i;
        for (size_t i = 1; i < n; i++)
        {
            cin >> a_i;
            if (a_i > max_element)
            {
                max_element = a_i;
            }
            if (a_i < min_element)
            {
                min_element = a_i;
            }
        }

        // cout << "|" << max_element - min_element << "|" << endl;
        cout << max_element - min_element << endl;
    }
}

// https://codeforces.com/problemset/problem/1624/A