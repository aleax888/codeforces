#include <iostream>
#include <string>
#include <unordered_set>
#include <sstream>
using namespace std;

int main()
{
    string line, letter;
    getline(cin, line);

    line = line.substr(1, line.size() - 2);
    stringstream ss(line);

    unordered_set<char> hash;
    while (getline(ss, letter, ' '))
    {
        hash.insert(letter[0]);
    }

    cout << hash.size();
}

// https://codeforces.com/problemset/problem/443/A