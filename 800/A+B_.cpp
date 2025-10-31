#include <iostream>
#include <string>
using namespace std;

int main()
{
    string ab;
    int t;
    cin >> t;
    while (t--)
    {
        cin >> ab;
        cout << (ab[0] + (ab[2] - 96)) << endl;
    }
}

// https://codeforces.com/problemset/problem/1772/A