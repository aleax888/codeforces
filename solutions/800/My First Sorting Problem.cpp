#include <iostream>
using namespace std;

int main()
{
    long long t, ans, x, y;
    cin >> t;
    while (t--)
    {
        cin >> x >> y;
        if (x > y)
            cout << y << " " << x << endl;
        else
            cout << x << " " << y << endl;
    }
}

// https://codeforces.com/problemset/problem/1971/A