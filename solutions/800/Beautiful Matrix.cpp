#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int side = 5, middle_index = 2, current_value;
    for (short int i = 0; i < side; i++)
    {
        for (short int j = 0; j < side; j++)
        {
            cin >> current_value;
            if (current_value)
            {
                cout << abs(middle_index - j) + abs(middle_index - i);
            }
        }
    }
}

// https://codeforces.com/problemset/problem/263/A