#include <iostream>
using namespace std;

int main()
{
    int t, a, b, c;
    cin >> t;
    for (size_t i = 0; i < t; i++)
    {
        cin >> a >> b >> c;
        if (a < b)
        {
            if (b > c)
            {
                cout << "PEAK" << endl;
            }
            else if (b < c)
            {
                cout << "STAIR" << endl;
            }
            else
            {

                cout << "NONE" << endl;
            }
        }
        else
        {
            cout << "NONE" << endl;
        }
    }
}

// https://codeforces.com/problemset/problem/1950/A