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
        int x, k;
        cin >> x >> k;

        if (x % k)
        {

            cout << 1 << endl;
            cout << x << endl;
        }
        else
        {
            cout << 2 << endl;
            cout << x - 1 << " " << 1 << endl;
        }
    }
}

// link: https://codeforces.com/problemset/page/3?order=BY_SOLVED_DESC
