#include <iostream>
using namespace std;

int main()
{
    int n, a, past_a, ans = 1, count = 1;
    cin >> n;

    cin >> past_a;
    for (size_t i = 1; i < n; i++)
    {
        cin >> a;
        if (past_a <= a)
        {
            count++;
        }
        else
        {
            ans = count > ans ? count : ans;
            count = 1;
        }
        past_a = a;
    }
    ans = count > ans ? count : ans;
    cout << ans;
}

// https://codeforces.com/problemset/problem/580/A