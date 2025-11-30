#include <iostream>
#include <string>
using namespace std;

int main()
{
    short int size, ans = 0;
    string row;
    cin >> size >> row;

    char e = row[0];
    for (size_t i = 1; i < size; i++)
    {
        while (e == row[i])
        {
            ans++;
            i++;
        }
        e = row[i];
    }
    cout << ans;
}

// https://codeforces.com/problemset/problem/266/A