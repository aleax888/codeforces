#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

void to_lower_case(string &str)
{
    transform(str.begin(), str.end(), str.begin(),
              [](unsigned char c)
              { return tolower(c); });
}

bool contains(vector<char> &vec, const char &c)
{
    for (const char &e : vec)
    {
        if (c == e)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    vector<char> vowels = {'a', 'o', 'y', 'e', 'u', 'i'};
    string str;
    cin >> str;

    to_lower_case(str);

    for (const char &e : str)
    {
        if (!contains(vowels, e))
        {
            cout << '.' << e;
        }
    }
}

// https://codeforces.com/problemset/problem/118/A