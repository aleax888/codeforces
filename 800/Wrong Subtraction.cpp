#include <iostream>
#include <string>
using namespace std;

int main()
{
    string n;
    short int k;
    cin >> n >> k;

    while (k > 0)
    {
        while (n.back() == '0' && k > 0)
        {
            n.pop_back();
            k--;
        }
        char &last_digit = n.back();
        short int aux = (last_digit - k) - '0';
        k -= last_digit - '0';
        last_digit = aux < 0 ? '0' : aux + '0';
    }
    cout << n;
}

// https://codeforces.com/problemset/problem/977/A