#include <iostream>
#include <numeric>
using namespace std;

int main()
{
    int y, w, A, B = 6, GCD;
    cin >> y >> w;

    A = 6 - (max(y, w) - 1);
    GCD = gcd(A, B);

    cout << A / GCD << "/" << B / GCD;
}

// https://codeforces.com/problemset/problem/9/A