#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        string a;
        cin >> a;
        reverse(a.begin(), a.end());
        
        for (auto &&i : a)
        {
            if (i == 'p')
            {
                i = 'q';
            }
            else if (i == 'q')
            {
                i = 'p';
            }
        }

        cout << a << endl;
    }
}
// link: https://codeforces.com/problemset/problem/2044/B
