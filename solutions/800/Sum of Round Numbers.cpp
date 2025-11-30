#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (size_t i = 0; i < t; i++)
    {
        string k, ans;
        cin >> k;
        int count = 1;
        ans = k[0] + string(k.size() - 1, '0');
        for (size_t j = 1, s = k.size(); j < s; j++)
        {
            if (k[j] != '0')
            {
                count++;
                ans += " ";
                ans += k[j] + string(s - j - 1, '0');
            }
        }
        cout << count << endl
             << ans << endl;
    }
}

// https://codeforces.com/problemset/problem/1352/A