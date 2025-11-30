#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, ans = 0, aux;
    cin >> n;
    vector<int> s;

    for (size_t i = 0; i < n; i++)
    {
        cin >> aux;
        if (aux == 4)
        {
            ans++;
        }
        else
        {
            s.push_back(aux);
        }
    }

    if (s.size() < 2)
    {
        cout << n;
        return 0;
    }

    sort(s.begin(), s.end());

    for (size_t i = 0, j = s.size() - 1; i < j;)
    {
        aux = s[j] + s[i];
        if (aux > 4)
        {
            ans++;
            j--;
        }
        else if (aux == 4)
        {
            ans++;
            j--;
            i++;
        }
        else
        {
            i++;
            while (aux + s[i] <= 4)
            {
                aux += s[i];
                i++;
            }
            ans++;
            j--;
        }
        if (j == i)
        {
            ans++;
        }
    }

    cout << ans;
}

// https://codeforces.com/problemset/problem/158/B