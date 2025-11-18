#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long t, a, b, c;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c;
        // cout << "|" << a + ceil(c / 2.0) << " " << b + floor(c / 2.0) << "|" << endl;
        cout << ((a + ceil(c / 2.0) > b + floor(c / 2.0)) ? "First" : "Second") << endl;
    }
}

// https://codeforces.com/problemset/problem/1858/A