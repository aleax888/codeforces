#include <iostream>
#include <bitset>
#include <cmath>
using namespace std;

const int MAX = 1000001;

bitset<MAX> is_gaussian;

void eratosthenes_sieve()
{
    is_gaussian.set();
    is_gaussian.reset(0);
    is_gaussian.reset(1);

    for (int i = 2; i * i <= MAX; i++)
    {
        if (is_gaussian[i])
        {
            for (int j = i * i; j <= MAX; j += i)
            {
                is_gaussian[j] = false;
            }
        }
    }
}

int main()
{
    eratosthenes_sieve();
    long long t, a, b, k, ans;
    cin >> t;
    for (size_t test_case_i = 0; test_case_i < t; test_case_i++)
    {
        cin >> a >> b;
        if (b % 2)
        {
            ans = a * b + 1;
        }
        else
        {
            k = 1;
            for (long long i = 2, s = b / 2 + 1; i < s; i++)
            {
                if (is_gaussian[i] && !(b % i))
                {
                    k = b / i;
                    break;
                }
            }
            ans = a * k + b / k;
        }
        // cout << "(" << k << ")" << endl;
        // cout << "|" << (ans % 2 ? -1 : ans) << "|" << endl;
        cout << (ans % 2 ? -1 : ans) << endl;
    }
}

// https://codeforces.com/problemset/problem/2137/C