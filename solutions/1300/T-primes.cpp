#include <iostream>
#include <cmath>
#include <set>
#include <bitset>
using namespace std;

bitset<1000001> is_prime;

void eratosthenes_sieve()
{
    is_prime.set();
    is_prime.reset(0);
    is_prime.reset(1);

    for (int i = 2; i * i <= 1000001; i++)
    {
        if (is_prime[i])
        {
            for (int j = i * i; j <= 1000001; j += i)
            {
                is_prime[j] = false;
            }
        }
    }
}

int is_perfect_sqrt(long long &num)
{
    double square = sqrt(num);
    int int_square = static_cast<int>(square);
    return (int_square == square ? square : -1);
}

void validate_number(long long &num)
{
    long long square = is_perfect_sqrt(num);
    if (square == -1)
    {
        cout << "NO" << endl;
    }
    else if (is_prime[square])
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    eratosthenes_sieve();

    long long n, x;
    cin >> n;

    for (size_t i = 0; i < n; i++)
    {
        cin >> x;
        validate_number(x);
    }
}

// https://codeforces.com/problemset/problem/230/B