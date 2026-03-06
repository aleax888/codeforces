#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        int count_1 = 0, count_0 = 0;
        for (char c : s)
        {
            if (c == '1')
                count_1++;
            else
                count_0++;
        }

        cout << (min(count_1, count_0) % 2 ? "DA" : "NET") << endl;
    }
}

// link: https://codeforces.com/problemset/problem/1373/B
