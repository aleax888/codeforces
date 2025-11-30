#include <iostream>
#include <string>
using namespace std;

int main()
{
    // 10 * (n.last % 10 - 1) + n.size(n.size + 1)/2

    int t;
    cin >> t;
    string x;

    for (int i = 0; i < t; ++i)
    {
        cin >> x;

        int s = x.size();
        cout << ((10 * ((x[s - 1] - 48) % 10 - 1)) + ((s * (s + 1)) / 2)) << endl;
    }
}

// https://codeforces.com/contest/1433/problem/A