#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string number;
    cin >> number;

    short int count = count_if(number.begin(), number.end(),
                         [](char c)
                         { return c == '4' || c == '7'; });

    cout << (count == 4 || count == 7 ? "YES" : "NO");
}

// https://codeforces.com/problemset/problem/110/A