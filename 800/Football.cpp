#include <iostream>
using namespace std;

int main()
{
    int n, a, b;
    cin >> n >> a >> b;

    if (n == 1)
    {
        cout << (a == b ? 1 : 0) << endl;
        cout << a << ":" << b;
    }
    else
    {
        if (a + b < n)
        {
            cout << n - (a + b) << endl;
            for (int i = 0; i < a; ++i)
            {
                cout << 1 << ":" << 0 << endl;
            }
            for (int i = 0; i < b; ++i)
            {
                cout << 0 << ":" << 1 << endl;
            }
            for (int i = 0, s = n - (a + b); i < s; ++i)
            {
                cout << 0 << ":" << 0 << endl;
            }
        }
        else
        {
            cout << 0 << endl;
            if (a < n)
            {
                for (int i = 0; i < a; ++i)
                {
                    cout << 1 << ":" << 0 << endl;
                }
                for (int i = 0, s = n - a - 1; i < s; ++i)
                {
                    cout << 0 << ":" << 1 << endl;
                }
                cout << 0 << ":" << (b - (n - a - 1)) << endl;
            }
            else if (b < n)
            {
                for (int i = 0; i < b; ++i)
                {
                    cout << 0 << ":" << 1 << endl;
                }
                for (int i = 0, s = n - b - 1; i < s; ++i)
                {
                    cout << 1 << ":" << 0 << endl;
                }
                cout << (a - (n - b - 1)) << ":" << 0 << endl;
            }
            else
            {
                for (int i = 0, s = n - 2; i < s; ++i)
                {
                    cout << 1 << ":" << 0 << endl;
                }
                cout << a - (n - 2) << ":" << 0 << endl;
                cout << 0 << ":" << b << endl;
            }
        }
    }
}