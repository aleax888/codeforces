#include <iostream>
using namespace std;

int main()
{
    short int n, x = 0, y = 0, z = 0, _x, _y, _z;
    cin >> n;

    for (short int i = 0; i < n; i++)
    {
        cin >> _x >> _y >> _z;
        x += _x;
        y += _y;
        z += _z;
    }

    cout << (x == 0 && y == 0 && z == 0 ? "YES" : "NO");
}

// https://codeforces.com/problemset/problem/69/A