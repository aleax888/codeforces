#include <iostream>
#include <climits>
using namespace std;

bool validate(float a, float b, float x, float y)
{
    return (a < x && b > y) || (x < a && y > b);
}

int main()
{
    bool gaa;
    int n, a_i, b_i;
    cin >> n;

    cin >> a_i >> b_i;
    if (a_i < b_i)
    {
        gaa = true;
    }
    else
    {
        gaa = false;
    }
    n--;

    while (n--)
    {
        cin >> a_i >> b_i;

        if ((a_i < b_i && !gaa) || (a_i > b_i && gaa))
        {
            cout << "Happy Alex" << endl;
            return 0;
        }
    }
    cout << "Poor Alex" << endl;
}

// https://codeforces.com/problemset/problem/456/A