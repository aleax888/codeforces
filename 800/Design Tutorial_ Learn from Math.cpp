#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if (!(n % 2))
    {
        cout << 8 << " " << n - 8;
    }
    else
    {
        cout << 9 << " " << n - 9;
    }
}

// https://codeforces.com/problemset/problem/472/A