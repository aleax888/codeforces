#include <iostream>
using namespace std;

int main()
{
    int n, m_i, c_i, ans = 0;
    cin >> n;
    for (size_t i = 0; i < n; i++)
    {
        cin >> m_i >> c_i;
        if (m_i > c_i)
        {
            ans++;
        }
        else if (c_i > m_i)
        {
            ans--;
        }
    }
    if (ans > 0)
    {
        cout << "Mishka";
    }
    else if (ans < 0)
    {
        cout << "Chris";
    }
    else
    {
        cout << "Friendship is magic!^^";
    }
}

// https://codeforces.com/problemset/problem/703/A