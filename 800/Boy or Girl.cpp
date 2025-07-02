#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main()
{
    string user_name;
    cin >> user_name;
    unordered_set<char> distinct_characters;

    for (const auto &e : user_name)
    {
        distinct_characters.insert(e);
    }

    cout << (distinct_characters.size() % 2 ? "IGNORE HIM!" : "CHAT WITH HER!");
}

// https://codeforces.com/problemset/problem/236/A