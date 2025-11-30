#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    string p;
    cin >> p;

    char instructions[] = {'H', 'Q', '9'};

    for (size_t i = 0; i < 3; i++)
    {
        if (p.find(instructions[i]) != string::npos)
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
}

// https://codeforces.com/problemset/problem/133/A