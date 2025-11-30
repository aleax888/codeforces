#include <iostream>
#include <string>
using namespace std;

int main()
{
    int statements_amount, x = 0;
    cin >> statements_amount;
    cin.ignore();

    string statement;
    for (short int i = 0; i < statements_amount; i++)
    {
        cin >> statement;
        if (statement.find('+') == string::npos)
        {
            x--;
        }
        else
        {
            x++;
        }
    }
    cout << x;
}

// https://codeforces.com/problemset/problem/282/A