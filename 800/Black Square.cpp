#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main()
{
    int ans = 0;
    unordered_map<char, int> strips;
    cin >> strips['1'] >> strips['2'] >> strips['3'] >> strips['4'];

    string s;
    cin >> s;

    for (size_t i = 0, size = s.size(); i < size; i++)
    {
        ans += strips[s[i]];
    }

    cout << ans;
}

// https://codeforces.com/problemset/problem/431/A