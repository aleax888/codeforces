#include <iostream>
#include <bitset>
using namespace std;

const int MAX = 50;

bitset<MAX> is_prime;

void eratosthenes_sieve()
{
    is_prime.set();
    is_prime.reset(0);
    is_prime.reset(1);

    for (int i = 2; i * i <= MAX; i++)
    {
        if (is_prime[i])
        {
            for (int j = i * i; j <= MAX; j += i)
            {
                is_prime[j] = false;
            }
        }
    }
}

int main()
{
    eratosthenes_sieve();
    int n, m;
    cin >> n >> m;
    int i = n + 1;
    for (; !is_prime[i] && i < MAX; i++);

    // cout << i << endl;
    cout << (m == i && i != 50 ? "YES" : "NO");
}

// https://codeforces.com/problemset/problem/80/A