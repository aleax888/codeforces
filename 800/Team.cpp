#include <iostream>
using namespace std;
 
int main()
{
    int problems, sure_count, current_opinion, solved_problems = 0;
    cin >> problems;
    cin.ignore();
 
    for (short int i = 0; i < problems; i++)
    {
        sure_count = 0;
        for (short int j = 0; j < 3; j++)
        {
            cin >> current_opinion;
            sure_count += current_opinion;
            cin.ignore();
        }
        if (sure_count >  1)
        {
            solved_problems++;
        }
    }
    cout << solved_problems;
}
 
// https://codeforces.com/problemset/problem/231/A