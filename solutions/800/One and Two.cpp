#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, count_2 = 0, a_i;
        vector<int> indexes;
        cin >> n;

        for (size_t i = 0; i < n; i++)
        {
            cin >> a_i;
            if (a_i == 2)
            {
                count_2++;
                indexes.push_back(i + 1);
            }
        }

        if (!(count_2 % 2))
        {
            cout << (count_2 ? indexes[count_2 / 2 - 1] : 1) << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
}

// link: https://codeforces.com/problemset/problem/1788/A
