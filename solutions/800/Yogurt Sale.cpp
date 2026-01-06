#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;

        if (a * 2 > b)
        {
            cout << (n / 2) * b + (n % 2) * a << endl;
        }
        else
        {
            cout << n * a << endl;
        }
    }
}

// link: https://codeforces.com/problemset/problem/1955/A
