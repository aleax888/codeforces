#include <iostream>
#include <vector>
#include <set>
using namespace std;

int get_total_paths(int &m, vector<int> &a, vector<vector<int>> &a_edges, int node = 1, int cats = 0, int parent = 0)
{
    // consecutive cats verification
    cats = a[node] ? cats + a[node] : 0;
    if (cats > m)
    {
        return 0;
    }

    // is leaf?
    if (node > 1 && a_edges[node].size() < 2)
    {
        return 1;
    }

    // recursivity
    int ans = 0;
    for (auto &&i : a_edges[node])
    {
        if (i != parent)
        {
            ans += get_total_paths(m, a, a_edges, i, cats, node);
        }
    }
    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<int> a(++n);
    vector<vector<int>> a_edges(n, vector<int>());

    for (size_t i = 1; i < n; i++)
    {
        cin >> a[i];
    }

    for (size_t i = 2; i < n; i++)
    {
        int aux1, aux2;
        cin >> aux1 >> aux2;
        a_edges[aux1].push_back(aux2);
        a_edges[aux2].push_back(aux1);
    }

    cout << get_total_paths(m, a, a_edges);
}

// link: https://codeforces.com/problemset/problem/580/C