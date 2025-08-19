#include <iostream>
using namespace std;

int main()
{
    int n, t, count_a;
    cin >> t;
    for (size_t i = 0; i < t; i++)
    {
        cin >> n;
        int aux;
        count_a = 0;
        for (size_t j = 0; j < n; j++)
        {
            cin >> aux;
            count_a += aux;
        }
        if (count_a % 2)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}

// https://codeforces.com/problemset/problem/1857/A