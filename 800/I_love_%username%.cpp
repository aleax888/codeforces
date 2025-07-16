#include <iostream>
using namespace std;

int main()
{
    int n, contest, min_performance, max_performance, ans = 0;
    cin >> n >> contest;
    n--;

    min_performance = max_performance = contest;

    for (int i = 0; i < n; i++)
    {
        cin >> contest;
        if (contest > max_performance)
        {
            ans++;
            max_performance = contest;
        }
        else if (contest < min_performance)
        {
            ans++;
            min_performance = contest;
        }
    }
    cout << ans;
}

// https://codeforces.com/problemset/problem/155/A