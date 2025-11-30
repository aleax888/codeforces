#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string w;
        cin >> w;
        cout << w.substr(0, w.size() - 2) + "i" << endl;
    }
}

// https://codeforces.com/problemset/problem/2065/A