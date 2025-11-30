#include <iostream>
#include <string>
using namespace std;

int main()
{
    short int n, t;
    string s;
    cin >> n >> t >> s;
    n--;

    for (short int i = 0; i < t; ++i)
    {
        for (short int j = 0; j < n; ++j)
        {
            if (s[j] == 'B' && s[j + 1] == 'G')
            {
                swap(s[j], s[j + 1]);
                j++;
            }
        }
    }
    cout << s;
}

// https://codeforces.com/problemset/problem/266/B