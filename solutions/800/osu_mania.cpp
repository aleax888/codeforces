#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        stack<int> stk;
        int n;
        string s;
        cin >> n;

        for (size_t i = 0; i < n; i++)
        {
            cin >> s;
            stk.push(s.find('#') + 1);
        }

        cout << stk.top();
        stk.pop();
        while (!stk.empty())
        {
            cout << ' ' << stk.top();
            stk.pop();
        }
        cout << endl;
    }
}

// link: https://codeforces.com/problemset/problem/2009/B
