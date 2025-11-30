#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

void to_xer_case(string &str, int (*func)(int))
{
    transform(str.begin(), str.end(), str.begin(),
              [func](unsigned char c)
              { return func(c); });
}

int main()
{
    string word;
    cin >> word;

    int uppercase_count = count_if(word.begin(), word.end(), [](unsigned char c)
                                   { return isupper(c); });

    int lowercase_count = word.length() - uppercase_count;

    uppercase_count > lowercase_count ? to_xer_case(word, toupper) : to_xer_case(word, tolower);

    cout << word;
}

// https://codeforces.com/problemset/problem/59/A