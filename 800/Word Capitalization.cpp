#include <iostream>
#include <string>
using namespace std;

int main()
{
    string word;
    cin >> word;

    word[0] = toupper(word[0]);

    cout << word;
}

// https://codeforces.com/problemset/problem/281/A