#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t, s_i, aux;
    cin >> t;
    while (t--)
    {
        vector<int> s(4);
        for (size_t i = 0; i < 4; i++)
        {
            cin >> s[i];
        }
        aux = max(s[0], s[1]) + max(s[2], s[3]);
        sort(s.begin(), s.end());

        cout << (aux == s[2] + s[3] ? "YES" : "NO") << endl;
    }
}

// https://codeforces.com/problemset/problem/1535/A