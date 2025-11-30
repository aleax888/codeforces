#include <iostream>
#include <map>
using namespace std;

int main()
{
    int s, n, x, y;
    cin >> s >> n;

    multimap<int, int> xy;

    for (size_t i = 0; i < n; i++)
    {
        cin >> x >> y;
        xy.insert({x, y});
    }

    for (const auto &[x, y] : xy)
    {
        // cout << "- " << s << " -> " << x << " - " << y << endl;
        if (s > x)
        {
            s += y;
        }
        else
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}

// https://codeforces.com/problemset/problem/230/A