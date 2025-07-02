#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s, hello = "hello";
    cin >> s;

    size_t i = 0, j = 0, sz = s.size();

    for (size_t i = 0; i < sz && j < 5; i++)
    {

        i = s.find(hello[j], i);
        // cout << i << ' ' << s[i] << " - " << j << ' ' << hello[j] << endl;
        if (i == string::npos)
        {
            break;
        }
        else
        {
            j++;
        }
    }

    cout << (j >= 5 ? "YES" : "NO");
}

// https://codeforces.com/problemset/problem/58/A