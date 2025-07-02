#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);

    for (size_t i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end(), less<int>());

    for (const int &e : a)
    {
        cout << e << ' ';
    }
}

// https://codeforces.com/problemset/problem/405/A