#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, mid_begin_index, mid_end_index, right_begin_index, left_end_index;
    cin >> n;
    vector<int> a(n);

    cin >> a[0];
    size_t i = 1;
    for (; i < n; i++)
    {
        cin >> a[i];
        if (a[i] < a[i - 1])
        {
            mid_begin_index = i - 1;
            left_end_index = i - 2;
            break;
        }
    }
    if (i == n)
    {
        cout << "yes" << endl;
        cout << 1 << " " << 1 << endl;
        return 0;
    }
    for (i++; i < n; i++)
    {
        cin >> a[i];
        if (a[i] > a[i - 1])
        {
            mid_end_index = i - 1;
            right_begin_index = i;
            break;
        }
    }
    if (i == n)
    {
        mid_end_index = n - 1;
        if ((left_end_index < 0 ? 0 : a[left_end_index]) > a[mid_end_index])
        {
            cout << "no" << endl;
            return 0;
        }

        cout << "yes" << endl;
        cout << mid_begin_index + 1 << " " << n << endl;
        return 0;
    }
    if ((left_end_index < 0 ? 0 : a[left_end_index]) > a[mid_end_index] || a[mid_begin_index] > a[right_begin_index])
    {
        cout << "no" << endl;
        return 0;
    }
    for (i++; i < n; i++)
    {
        cin >> a[i];
        if (a[i] < a[i - 1])
        {
            cout << "no" << endl;
            return 0;
        }
    }

    cout << "yes" << endl;
    cout << mid_begin_index + 1 << " " << mid_end_index + 1 << endl;
}

// link: https://codeforces.com/problemset/problem/451/B
