#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string strip;
        cin >> n >> strip;

        cout << strip.rfind('B') - strip.find('B') + 1 << endl;
    }
}

// link: https://codeforces.com/problemset/problem/1927/A
