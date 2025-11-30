#include <iostream>
using namespace std;

int main()
{
    int liked[1001];

    for (size_t i = 1, j = 1; i < 1001; i++)
    {
        while (!(j % 3) || j % 10 == 3)
        {
            j++;
        }

        liked[i] = j;
        j++;
    }

    int t, k;
    cin >> t;
    for (size_t i = 0; i < t; i++)
    {
        cin >> k;
        cout << liked[k] << endl;
        // cout << "|" << liked[k] << "|" << endl;
    }
}

// https://codeforces.com/problemset/problem/1560/A