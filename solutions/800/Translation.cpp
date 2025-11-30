#include <iostream>
#include <string>
using namespace std;

void func()
{
    string s, t;
    cin >> s >> t;

    int s_size = s.size(), t_size = t.size();
    if (s_size != t_size)
    {
        cout << "NO";
        return;
    }

    for (size_t i = 0; i < s_size; i++)
    {
        if (s[i] != t[s_size - i - 1])
        {
            cout << "NO";
            return;
        }
    }

    cout << "YES";
}

int main()
{
    func();
}

// https://codeforces.com/problemset/problem/41/A