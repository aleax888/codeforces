#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main()
{
    string tasks;
    int t, n, ans;
    cin >> t;
    while (t--)
    {
        ans = 1;
        unordered_set<char> unique_tasks;
        cin >> n >> tasks;

        for (size_t i = 0, j; i < n;)
        {
            if (unique_tasks.find(tasks[i]) == unique_tasks.end())
            {
                unique_tasks.insert(tasks[i]);
                j = i;
                while (i < n && tasks[i] == tasks[j])
                {
                    i++;
                }
            }
            else
            {
                ans = 0;
                break;
            }
        }

        cout << (ans ? "YES" : "NO") << endl;
    }
}

// https://codeforces.com/problemset/problem/1520/A