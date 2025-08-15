#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    string b, a;

    cin >> t;
    for (size_t i = 0; i < t; i++)
    {
        a = "";
        cin >> b;
        a += b[0];
        for (size_t j = 1, s = b.size(); j < s; j += 2)
        {
            a += b[j];
        }
        cout << a << endl;
    }
}

// https://codeforces.com/problemset/problem/1367/A