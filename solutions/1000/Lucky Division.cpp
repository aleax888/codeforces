#include <iostream>
using namespace std;

int main()
{
    int n, lucky_numbers[] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
    cin >> n;

    for (int i = 0; lucky_numbers[i] <= n; i++)
    {
        if (!(n % lucky_numbers[i]))
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
}

// https://codeforces.com/problemset/problem/122/A