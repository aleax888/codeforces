#include <iostream>
using namespace std;

int main()
{
    int n, k, *scores, ans = 0;
    cin >> n >> k;

    scores = new int[n];
    for (short int i = 0; i < n; ++i)
    {
        cin >> scores[i];
    }
    k--;
    for (short int i = 0; i < n; ++i)
    {
        if (scores[i] < scores[k] || scores[i] == 0)
        {
            break;
        }
        ans++;
    }

    cout << ans;
}

// https://codeforces.com/problemset/problem/158/A