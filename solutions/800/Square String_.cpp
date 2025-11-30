#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    string str;

    for (int i = 0; i < t; ++i)
    {
        cin >> str;

        if (str.size() % 2)
        {
            cout << "NO" << endl;
            continue;
        }

        int s = str.size(), l = 0, r = s / 2;
        for (; r < s; ++l, ++r)
        {
            if (str[l] != str[r])
            {
                cout << "NO" << endl;
                break;
            }
        }
        if (r == s)
        {
            cout << "YES" << endl;
        }
    }
}

// https://codeforces.com/contest/1619/problem/A