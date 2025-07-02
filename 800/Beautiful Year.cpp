#include <iostream>
#include <string>
using namespace std;

bool all_distinct(string &str)
{
    for (size_t i = 0; i < 4; i++)
    {
        for (size_t j = 0; j < 4; j++)
        {
            if (str[i] == str[j] && i != j)
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{
    string y;
    cin >> y;

    do
    {
        y = to_string(stoi(y) + 1);
    } while (!all_distinct(y));
    cout << y;
}

// https://codeforces.com/problemset/problem/271/A