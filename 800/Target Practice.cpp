#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t, ans, target_i, target_values[10][10] = {
                              {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
                              {1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
                              {1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
                              {1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
                              {1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
                              {1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
                              {1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
                              {1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
                              {1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
                              {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
                          };
    cin >> t;
    for (size_t test_case_i = 0; test_case_i < t; test_case_i++)
    {
        ans = 0;
        for (size_t i = 0; i < 10; i++)
        {
            string row;
            cin >> row;
            for (size_t j = 0; j < 10; j++)
            {
                if (row[j] == 'X')
                {
                    ans += target_values[i][j];
                }
            }
        }

        cout << ans << endl;
    }
}

// https://codeforces.com/problemset/problem/1873/C