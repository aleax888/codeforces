#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    long long n, last, before_last;
    cin >> n;

    if (n < 0)
    {
        last = abs(n % 10);
        before_last = abs(((n % 100) + last) / 10);
        string ans;

        // cout << before_last << " " << last << endl;
        if (last < before_last)
        {
            ans = (n < -99 ? to_string(n / 100) : (last ? "-" : "")) + to_string(last);
        }
        else
        {
            ans = to_string(n / 10);
        }
        cout << ans;
    }
    else
    {
        cout << n;
    }
}

// https://codeforces.com/problemset/problem/313/A