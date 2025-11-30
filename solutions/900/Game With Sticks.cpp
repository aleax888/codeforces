#include <iostream>
using namespace std;

int main()
{
    int n, m, ans;
    cin >> n >> m;

    ans = min(n, m);

    cout << (!(ans % 2) ? "Malvika" : "Akshat") << endl;
}

// https://codeforces.com/problemset/problem/451/A