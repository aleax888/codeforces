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
        bool is_minecraft = false;
        int n, count = 0, mc_verifier = 0;
        string s;

        cin >> n >> s;

        for (size_t i = 0; i < n; i++)
        {
            if (s[i] == '.')
            {
                count++;
                mc_verifier++;
                if (mc_verifier > 2)
                {
                    is_minecraft = true;
                }
            }
            else
            {
                mc_verifier = 0;
            }
        }
        // cout << "|" << (is_minecraft ? 2 : count) << "|" << endl;
        cout << (is_minecraft ? 2 : count) << endl;
    }
}

// link: https://codeforces.com/problemset/problem/1900/A
