#include <iostream>
using namespace std;

int main()
{
    int n, event, ans = 0, polices = 0;
    cin >> n;

    for (size_t i = 0; i < n; i++)
    {
        cin >> event;
        polices += event;
        if (polices < 0)
        {
            ans -= polices;
            polices = 0;
        }
    }
    cout << ans;
}

// https://codeforces.com/problemset/problem/427/A