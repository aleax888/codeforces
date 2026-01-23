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
        int n, a_0, a_i;
        cin >> n >> a_0;
        for (size_t i = 1; i < n; i++)
        {
            cin >> a_i;
        }

        cout << (a_0 == 1 ? "YES" : "NO") << endl;
    }
}

// link: https://codeforces.com/problemset/problem/1896/A
