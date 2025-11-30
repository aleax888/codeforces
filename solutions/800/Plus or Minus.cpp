#include <iostream>
using namespace std;
 
int main()
{
    int t, a, b, c;
    cin >> t;
 
    for (size_t i = 0; i < t; i++)
    {
        cin >> a >> b >> c;
        if (a + b == c)
        {
            cout << "+" << endl;
        }
        else
        {
            cout << "-" << endl;
        }
    }
}
 
// https://codeforces.com/problemset/problem/1807/A