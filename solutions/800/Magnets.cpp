#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, ans = 1;
    string magnet, aux;
    cin >> n >> magnet;

    for (int i = 1; i < n; i++)
    {
        cin >> aux;
        if (magnet != aux)
        {
            ans++;
            magnet = aux;
        }
    }

    cout << ans;
}

// https://codeforces.com/problemset/problem/344/A