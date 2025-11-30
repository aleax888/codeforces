#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int time_spent = 5, i = 0, s = 240 - k;
    for (; (time_spent) <= s; ++i, time_spent += (i + 1) * 5);

    cout << (i > n ? n : i);
}

// https://codeforces.com/problemset/problem/750/A