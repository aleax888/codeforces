#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    int n, h, g, ans = 0;
    cin >> n;
    unordered_map<int, int> home, guest;

    for (size_t i = 0; i < n; i++)
    {
        cin >> h >> g;
        if (home.find(h) == home.end())
        {
            home[h] = 1;
        }
        else
        {

            home[h]++;
        }
        if (guest.find(g) == guest.end())
        {
            guest[g] = 1;
        }
        else
        {

            guest[g]++;
        }
    }

    for (const auto &pair : home)
    {
        // cout << "ga: " << pair.second << " " << guest[pair.first] << endl;
        if (guest.find(pair.first) != guest.end())
        {
            ans += pair.second * guest[pair.first];
        }
    }

    cout << ans;
}

// https://codeforces.com/problemset/problem/268/A