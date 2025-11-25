#include <iostream>
#include <string>
using namespace std;

void validate(int &n, string &r1, string &r2)
{
    for (size_t i = 0; i < n; i++)
    {
        if (r1[i] != r2[i] && (r1[i] == 'R' || r2[i] == 'R'))
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}

int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        string row1, row2;
        cin >> n >> row1 >> row2;

        validate(n, row1, row2);
    }
}

// https://codeforces.com/problemset/problem/1722/B