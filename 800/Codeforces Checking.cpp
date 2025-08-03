#include <iostream>
#include <string>
using namespace std;

int main()
{
    string cf = "codeforces";
    int t;
    char c;
    cin >> t;

    for (size_t i = 0; i < t; i++)
    {
        cin >> c;
        if (cf.find(c) == string::npos)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}

// https://codeforces.com/problemset/problem/1791/A