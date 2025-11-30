#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, a, a_i;
    cin >> n;
    string xy;
    xy.resize(n + 1, '0');

    cin >> a;
    for (size_t i = 0; i < a; i++)
    {
        cin >> a_i;
        xy[a_i] = '1';
    }
    cin >> a;
    for (size_t i = 0; i < a; i++)
    {
        cin >> a_i;
        xy[a_i] = '1';
    }

    cout << (xy.find('0', 1) == string::npos ? "I become the guy." : "Oh, my keyboard!");
}

// https://codeforces.com/problemset?order=BY_SOLVED_DESC