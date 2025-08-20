#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t, n;
    string x, a, b;
    cin >> t;

    for (int i = 0; i < t; ++i)
    {
        cin >> n;
        cin >> x;
        a = string(n, '0');
        a[0] = '1';
        b = string(n, '0');
        b[0] = '1';
        for (int j = 1; j < n; j++)
        {
            if (x[j] == '2')
            {
                a[j] = '1';
                b[j] = '1';
            }
            else if (x[j] == '0')
            {
                continue;
            }
            else
            {
                a[j] = '1';
                b = b.substr(0, j + 1) + x.substr(j + 1);
                break;
            }
        }
        cout << a << endl;
        cout << b << endl;
        // cout  <<"!" << a<<"!" << endl;
        // cout <<"!"<< b<<"!" << endl;
    }
}

// https://codeforces.com/contest/1328/problem/C