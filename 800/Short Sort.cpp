#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t, ans;
    cin >> t;

    for (size_t i = 0; i < t; i++)
    {
        string abc;
        cin >> abc;
        ans = 0;
        for (size_t j = 0; j < 3; j++)
        {
            if (abc[j] == 97 + j)
            {
                ans++;
            }
        }
        cout << (ans ? "YES" : "NO") << endl;
    }
}

// https://codeforces.com/problemset/problem/1873/A