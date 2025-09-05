#include <iostream>
#include <set>
using namespace std;

int main()
{
    int t, n, aux, ans;

    cin >> t;
    for (size_t test_case_i = 0; test_case_i < t; test_case_i++)
    {
        ans = 1;
        multiset<int> a;
        cin >> n;
        for (size_t i = 0; i < n; i++)
        {
            cin >> aux;
            a.insert(aux);
        }

        ans = *a.begin() + 1;
        a.erase(a.begin());
        for (auto &&i : a)
        {
            ans *= i;
        } 

        cout << ans << endl;
        // cout << "!" << ans << "!" << endl;
    }
}

// https://codeforces.com/problemset/problem/1873/B