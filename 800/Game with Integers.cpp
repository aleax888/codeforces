#include <iostream>
using namespace std;

int main()
{
    int t, n;

    cin >> t;
    for (size_t i = 0; i < t; i++)
    {
        cin >> n;
        cout << (n % 3 ? "First" : "Second") << endl;
    }
}

// https://codeforces.com/problemset/problem/1899/A