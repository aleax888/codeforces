#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, a_i;
        unordered_map<int, int> a;

        cin >> n;
        for (size_t i = 0; i < n; i++)
        {
            cin >> a_i;
            if (a.find(a_i) == a.end())
            {
                a[a_i] = 1;
            }
            else
            {
                a[a_i]++;
            }
        }

        if (a.size() > 2)
        {
            cout << "NO" << endl;
        }
        else
        {
            if (a.size() == 1)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << (abs((++a.begin())->second - a.begin()->second) > 1 ? "NO" : "YES") << endl;
            }
        }
    }
}

// link: https://codeforces.com/problemset/problem/1890/A
