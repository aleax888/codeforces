#include <iostream>
using namespace std;

int main()
{
    double n, p_i, sum = 0;
    cin >> n;

    for (size_t i = 0; i < n; i++)
    {
        cin >> p_i;
        sum += p_i;
    }

    cout << (sum / n);
}

// https://codeforces.com/problemset/problem/200/B