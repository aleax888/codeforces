#include <iostream>
using namespace std;

int main()
{
    long long t, a, b, mod;
    cin >> t;
    for (size_t i = 0; i < t; i++)
    {
        cin >> a >> b;
        mod = a % b;
        cout << (mod ? b - mod : 0) << endl;
    }
}

// https://codeforces.com/problemset/problem/1328/A