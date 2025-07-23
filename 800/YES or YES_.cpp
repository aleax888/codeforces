#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void to_upper_case(string &str)
{
    transform(str.begin(), str.end(), str.begin(), [](unsigned char c)
              { return toupper(c); });
}

int main()
{
    int t;
    cin >> t;

    string s;
    for (size_t i = 0; i < t; i++)
    {
        cin >> s;
        to_upper_case(s);
        if (s == "YES")
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}

// https://codeforces.com/problemset/problem/1703/A
