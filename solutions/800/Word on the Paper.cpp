#include <iostream>
#include <vector>
#include <string>
#include <utility>
using namespace std;

pair<int, int> get_indexes(vector<string> &grid)
{
    size_t i = 0, j = 0;
    for (; i < 8; i++)
    {
        j = 0;
        for (; j < 8; j++)
        {
            if (grid[i][j] != '.')
            {
                return pair<int, int>(i, j);
            }
        }
    }
    return pair<int, int>(i, j);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        string ans = "";
        vector<string> grid(8);
        for (size_t i = 0; i < 8; i++)
        {
            cin >> grid[i];
        }

        pair<int, int> indexes = get_indexes(grid);

        while (indexes.first < 8 && grid[indexes.first][indexes.second] != '.')
        {
            ans += grid[indexes.first][indexes.second];
            indexes.first++;
        }

        cout << ans << endl;
    }
}

// link: https://codeforces.com/problemset/problem/1850/C
