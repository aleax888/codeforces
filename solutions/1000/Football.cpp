#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string g;

    unordered_map<string, int> goals;

    for (size_t i = 0; i < n; i++)
    {
        cin >> g;
        if (goals.find(g) == goals.end())
        {
            goals[g] = 1;
        }
        else
        {
            goals[g]++;
        }
    }

    if (goals.size() == 1)
    {
        cout << goals.begin()->first;
    }
    else
    {
        cout << (goals.begin()->second > (++(goals.begin()))->second ? goals.begin()->first : (++(goals.begin()))->first);
    }
}

// https://codeforces.com/problemset/problem/43/A