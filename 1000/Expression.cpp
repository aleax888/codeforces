#include <iostream>
#include <vector>
#include <climits>
#include <numeric>
using namespace std;

int main()
{
    int n = 3, ans = 0;
    vector<int> abc(n);
    cin >> abc[0] >> abc[1] >> abc[2];

    for (size_t i = 0; i < n; i++)
    {
        if (abc[i] == 1)
        {
            int left = (i > 0 ? abc[i - 1] : INT_MAX), right = (i < n - 1 ? abc[i + 1] : INT_MAX);
            if (left < right)
            {
                abc.erase(abc.begin() + i - 1, abc.begin() + i + 1);
                abc.insert(abc.begin() + i - 1, left + 1);
            }
            else
            {
                abc.erase(abc.begin() + i, abc.begin() + i + 1 + 1);
                abc.insert(abc.begin() + i, right + 1);
            }
            n--;
        }
    }

    cout << accumulate(abc.begin(), abc.end(), 1, multiplies<int>());
}

// https://codeforces.com/problemset/problem/479/A