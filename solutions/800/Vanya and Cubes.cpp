#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int i = 1, sum = 1;
    do
    {
        ++i;
        sum += ((i * (i + 1)) / 2);
        // cout << sum << " " << i << endl;
    } while (sum <= n);
    cout << i - 1;
}

// https://codeforces.com/problemset/problem/492/A