#include <iostream>
using namespace std;

int main()
{
    int t, a, b, c;
    cin >> t;

    for (size_t i = 0; i < t; i++)
    {
        cin >> a >> b >> c;
        if (a == b)
        {
            cout << c << endl;
        }
        else if (a == c)
        {

            cout << b << endl;
        }
        else
        {
            cout << a << endl;
        }
    }
}

// https://codeforces.com/problemset/problem/1915/A