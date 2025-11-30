#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void to_upper_case(string &str)
{
    transform(str.begin(), str.end(), str.begin(),
              [](unsigned char c)
              { return toupper(c); });
}

int main()
{
    string first, second;
    cin >> first >> second;

    to_upper_case(first);
    to_upper_case(second);

    int raw_ans = first.compare(second);
    if (raw_ans > 0)
    {

        cout << 1;
    }
    else if (raw_ans < 0)
    {

        cout << -1;
    }
    else
    {
        cout << 0;
    }
}

// https://codeforces.com/problemset/problem/112/A