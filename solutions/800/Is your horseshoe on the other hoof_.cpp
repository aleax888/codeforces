#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    long long s_i;
    unordered_set<long long> s;
    for (size_t i = 0; i < 4; i++)
    {
        cin >> s_i;
        s.insert(s_i);
    }

    cout << 4 - s.size();
}

// https://codeforces.com/problemset/problem/228/A
