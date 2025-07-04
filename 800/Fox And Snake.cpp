#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    string a(m, '#');
    string b(m - 1, '.');

    for (int i = 0, aux; i < n; i++)
    {
        aux = i % 4;
        if (aux == 0 || aux == 2)
        {
            cout << a << endl;
        }
        else if (aux == 1)
        {
            cout << b << '#' << endl;
        }
        else if (aux == 3)
        {
            cout << '#' << b << endl;
        }
    }
}

// https://codeforces.com/problemset/problem/510/A