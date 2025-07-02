#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main()
{
    int n;
    string str;
    cin >> n >> str;

    unordered_set<char> uset;

    for (const char &e : str)
    {
        uset.insert(tolower(e));
    }

    cout << (uset.size() >= 26 ? "YES" : "NO");
}

// https://codeforces.com/problemset/problem/520/A