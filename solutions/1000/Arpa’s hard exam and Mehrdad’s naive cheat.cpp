#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, num = 1378, vals[] = {8, 4, 2, 6};
    cin >> n;

    cout << (n ? vals[(n - 1) % 4] : 1) << endl;
}

// link: https://codeforces.com/problemset/problem/742/A
