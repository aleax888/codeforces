#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    string s;

    cin >> n >> s;

    int anton_wins = count(s.begin(), s.end(), 'A');
    int danik_wins = n - anton_wins;

    if (anton_wins > danik_wins)
    {
        cout << "Anton";
    }
    else if (danik_wins > anton_wins)
    {
        cout << "Danik";
    }
    else
    {
        cout << "Friendship";
    }
}

// https://codeforces.com/problemset/problem/734/A