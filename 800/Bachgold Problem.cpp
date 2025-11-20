#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cout << n / 2 << endl;
    bool x = true;
    for (int i = ((n % 2) ? (n - 3) / 2 : n / 2); i > 0; i--, x = false)
    {
        if (x)
        {
            cout << 2;
        }
        else
        {
            cout << " " << 2;
        }
    }
    if (n % 2)
    {
        if (n > 3)
        {
            cout << " ";
        }
        cout << 3;
    }
    cout << endl;
}

// https://codeforces.com/problemset/problem/749/A