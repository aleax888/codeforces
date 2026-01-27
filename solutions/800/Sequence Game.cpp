#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        vector<long long> a;
        long long n, b_i, prev;

        cin >> n >> prev;
        a.push_back(prev);

        for (size_t i = 1; i < n; i++)
        {
            cin >> b_i;
            if (b_i < prev)
            {
                a.push_back(b_i);
                a.push_back(b_i);
            }
            else
            {
                a.push_back(b_i);
            }
            prev = b_i;
        }

        cout << a.size() << endl
             << a[0];
        for (size_t i = 1, s = a.size(); i < s; i++)
        {
            cout << " " << a[i];
        }
        cout << endl;
    }
}

// link: https://codeforces.com/problemset/problem/1862/B
