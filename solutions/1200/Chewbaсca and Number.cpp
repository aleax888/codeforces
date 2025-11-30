#include <iostream>
#include <string>
using namespace std;

int main()
{
    int aux;
    string n, ans = "";
    cin >> n;

    aux = n[0] - 48;
    if (aux > 4 && aux < 9)
    {
        ans += to_string(9 - aux);
    }
    else
    {
        ans += n[0];
    }
    for (size_t i = 1, s = n.size(); i < s; i++)
    {
        aux = n[i] - 48;
        if (aux > 4)
        {
            ans += to_string(9 - aux);
        }
        else
        {
            ans += n[i];
        }
    }
    cout << ans;
}

// https://codeforces.com/problemset/problem/514/A