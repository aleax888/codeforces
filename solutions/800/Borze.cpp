#include <iostream>
#include <string>
using namespace std;

int main()
{
    string borze, ans = "";
    cin >> borze;

    for (size_t i = 0, s = borze.size(); i < s;)
    {
        if (borze[i] == '.')
        {
            ans += "0";
            i++;
        }
        else if (borze[i] == '-')
        {
            if (borze[i + 1] == '.')
            {
                ans += "1";
            }
            else if (borze[i + 1] == '-')
            {
                ans += "2";
            }
            i += 2;
        }
    }
    cout << ans;
}

// https://codeforces.com/problemset/problem/32/B