#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    int n, n_i;
    cin >> n;

    bool ga = true;

    unordered_map<int, int> odds(n);
    unordered_map<int, int> evens(n);

    for (size_t i = 0; i < 3; i++)
    {
        cin >> n_i;
        if (n_i % 2)
        {
            odds[i] = n_i;
        }
        else
        {
            evens[i] = n_i;
        }
    }

    if (evens.size() == 1)
    {
        cout << evens.begin()->first + 1;
        return 0;
    }
    else if (odds.size() == 1)
    {
        cout << odds.begin()->first + 1;
        return 0;
    }

    if (evens.size() > 1)
    {
        ga = false;
    }
    else if (odds.size() > 1)
    {
        ga = true;
    }
    for (size_t i = 3; i < n; i++)
    {
        cin >> n_i;
        if (ga)
        {

            if (!(n_i % 2))
            {
                cout << i + 1;
                return 0;
            }
        }
        else
        {
            if (n_i % 2)
            {
                cout << i + 1;
                return 0;
            }
        }
    }
}

// https://codeforces.com/problemset/problem/25/A