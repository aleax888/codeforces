#include <iostream>
#include <string>
using namespace std;

int main()
{
    string players;
    cin >> players;

    if (players.find("1111111") != string::npos)
    {
        cout << "YES";
    }
    else if (players.find("0000000") != string::npos)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}

// https://codeforces.com/problemset/problem/96/A