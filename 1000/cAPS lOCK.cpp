#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string word;
    cin >> word;

    size_t i = 1, s = word.size();
    for (; i < s && (word[i] > 64 && word[i] < 91); i++);

    // cout << i << " " << s;
    if (i == s)
    {
        transform(word.begin(), word.end(), word.begin(),
                  [](unsigned char c)
                  { return (c > 64 && c < 91) ? tolower(c) : toupper(c); });
    }
    cout << word;
}

// https://codeforces.com/problemset/problem/131/A