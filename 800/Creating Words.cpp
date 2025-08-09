#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;

    string a, b;

    for (size_t i = 0; i < t; i++)
    {
        cin >> a >> b;
        swap(a[0], b[0]);
        cout << a << " " << b << endl;
    }
}

// https://codeforces.com/problemset/problem/1985/A