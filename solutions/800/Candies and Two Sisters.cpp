#include <iostream>
using namespace std;

int main()
{
    int t, n;
    cin >> t;

    for (size_t i = 0; i < t; i++)
    {
        cin >> n;
        if (n % 2)
        {
            cout << n / 2 << endl;
        }
        else
        {

            cout << (n / 2) - 1 << endl;
        }
    }
}

// https://codeforces.com/problemset/problem/1335/A