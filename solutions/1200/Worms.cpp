#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int binary_search(vector<int> &vec, int number, int left, int right)
{
    // cout << left << " - " << right << endl;
    if (left >= right)
    {
        return right;
    }
    if (number > vec[left])
    {
        return binary_search(vec, number, left + ceil((right - left) / 2.0), right);
    }
    else
    {
        return binary_search(vec, number, left / 2, left);
    }
}

int main()
{
    int n, m, sum = 0, aux;
    cin >> n;

    vector<int> a(n);

    for (size_t i = 0; i < n; i++)
    {
        cin >> aux;
        a[i] = sum + aux;
        // cout << a[i] << " ";
        sum = a[i];
    }

    cin >> m;
    n--;
    for (size_t i = 0; i < m; i++)
    {
        cin >> aux;
        cout << binary_search(a, aux, n / 2, n) + 1 << endl;
    }
}

// https://codeforces.com/problemset/problem/474/B