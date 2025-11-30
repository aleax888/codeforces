#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    int n;
    cin >> n;

    unordered_map<string, int> names;
    string name;

    for (size_t i = 0; i < n; i++)
    {
        cin >> name;
        if (names.find(name) == names.end())
        {
            names[name] = 0;
            cout << "OK" << endl;
        }
        else
        {
            names[name]++;
            cout << name << names[name] << endl;
        }
    }
}

// https://codeforces.com/problemset/problem/4/C