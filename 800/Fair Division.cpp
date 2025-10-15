#include <iostream>
using namespace std;

int main()
{
    int t, count_one, count_two, n, a_i;
    cin >> t;
    for (size_t test_case_i = 0; test_case_i < t; test_case_i++)
    {
        count_one = count_two = 0;
        cin >> n;
        for (size_t i = 0; i < n; i++)
        {
            cin >> a_i;
            if (a_i == 1)
            {
                count_one++;
            }
            else
            {
                count_two++;
            }
        }

        if (count_one % 2)
        {
            cout << "NO" << endl;
        }
        else
        {
            if (count_two % 2)
            {
                cout << (count_one > 1 ? "YES" : "NO") << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
        }
    }
}

// https://codeforces.com/problemset/problem/1472/B