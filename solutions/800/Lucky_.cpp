#include <iostream>
#include <string>
using namespace std;
 
int main()
{
    int t, l_sum, r_sum;
    cin >> t;
 
    string ticket;
    for (size_t i = 0; i < t; i++)
    {
        cin >> ticket;
        l_sum = ticket[0] + ticket[1] + ticket[2];
        r_sum = ticket[3] + ticket[4] + ticket[5];
        if (l_sum == r_sum)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
 
// https://codeforces.com/problemset/problem/1676/A