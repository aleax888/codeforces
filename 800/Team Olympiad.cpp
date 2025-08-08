#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, t;
    cin >> n;
    n++;

    vector<int> programming;
    vector<int> maths;
    vector<int> PE;

    for (size_t i = 1; i < n; i++)
    {
        cin >> t;
        switch (t)
        {
        case 1:
            programming.push_back(i);
            break;
        case 2:
            maths.push_back(i);
            break;
        case 3:
            PE.push_back(i);
            break;

        default:
            break;
        }
    }

    n = min(programming.size(), min(maths.size(), PE.size()));

    cout << n << endl;
    for (size_t i = 0; i < n; i++)
    {
        cout << programming[i] << " " << maths[i] << " " << PE[i] << endl;
    }
}

// https://codeforces.com/problemset/problem/490/A