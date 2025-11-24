#include <iostream>
using namespace std;

int main()
{
    char photo_i;
    int n, m;
    cin >> n >> m;

    for (size_t i = 0, s = n * m; i < s; i++)
    {
        cin >> photo_i;
        if (photo_i == 'C' || photo_i == 'M' || photo_i == 'Y')
        {
            cout << "#Color";
            return 0;
        }
    }
    cout << "#Black&White";
}

// https://codeforces.com/problemset/problem/707/A