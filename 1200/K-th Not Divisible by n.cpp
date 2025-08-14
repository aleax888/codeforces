#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t, n, k;
    cin >> t;
    for (int i = 0; i < t; ++i)
    {
        cin >> n >> k;
        int l = 0, aux = 1;
        while (aux)
        {
            aux = ceil((k + l) / n) - l;
            l += aux;
        }
        // cout << "!" << k + l << "!" << endl;
        cout << k + l << endl;
    }
}

// https://codeforces.com/problemset/problem/1352/C