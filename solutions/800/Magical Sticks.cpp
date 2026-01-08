#include <iostream>
#include <cmath>
using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        double n;
        cin >> n;
        cout << fixed << (int)ceil(n / 2.0) << endl;
    }

} 

// link: https://codeforces.com/problemset/problem/1371/A
