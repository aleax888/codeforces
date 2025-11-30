#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // f(x) = a * 3^x
    // g(x) = b * 2^x
    // x >= 0
    // f(x) > g(x)
    // a * 3^x > b * 2^x
    // 3^x / 2^x > b / a
    // (3 / 2)^x > b / a
    // x > log(b/a) / log (3/2)
    long double a, b;
    cin >> a >> b;

    int x = log10(b / a) / log10(3.0 / 2.0);
    cout << x + 1;
}

// https://codeforces.com/problemset/problem/791/A