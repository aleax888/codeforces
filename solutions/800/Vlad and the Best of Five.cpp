#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    int t, ans;
    cin >> t;
    while (t--)
    {
        ans = 0;
        cin >> str;
        for (auto &&i : str)
        {
            if (i == 'A')
            {
                ans++;
            }
            else
            {
                ans--;
            }
        }

        cout << (ans > 0 ? "A" : "B") << endl;
    }
}

// https://codeforces.com/problemset/problem/1926/A