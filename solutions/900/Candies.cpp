#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<long long> two_power;
    int k = 2, aux = 3;
    while (aux < 1000000000)
    {
        two_power.push_back(aux);
        k++;
        aux = pow(2, k) - 1;
    }

    int t;
    cin >> t;
    while (t--)
    {
        long long n, ans = 0;
        cin >> n;

        for (size_t i = 0, s = two_power.size(); i < s; i++)
        {
            if (!(n % two_power[i]))
            {
                cout << n / two_power[i] << endl;
                // cout << "|" << n / two_power[i] << "|" << endl;
                break;
            }
        }
    }
}

// link: https://codeforces.com/problemset/problem/1343/A
