#include <iostream>
using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;

    if (t == 10)
    {
        if (n == 1)
        {
            cout << -1;
        }
        else
        {
            cout << 1;
            for (size_t i = 0, s = n - 1; i < s; i++)
            {
                cout << 0;
            }
        }
    }
    else
    {
        for (size_t i = 0; i < n; i++)
        {
            cout << t;
        }
    }
}
