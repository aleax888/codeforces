#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    cout << "I hate";
    for (size_t i = 1; i < n; i++)
    {
        if (i & 1)
        {
            cout << " that I love";
        }
        else
        {
            cout << " that I hate";
        }
    }
    cout << " it";
}

// https://codeforces.com/problemset/problem/705/A