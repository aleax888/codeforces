#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
    int n, ans = 0;
    cin >> n;
    string polyhedron;

    map<std::string, int> polyhedrons = {
        {"Tetrahedron", 4},
        {"Cube", 6},
        {"Octahedron", 8},
        {"Dodecahedron", 12},
        {"Icosahedron", 20},
    };

    for (size_t i = 0; i < n; i++)
    {
        cin >> polyhedron;
        ans += polyhedrons[polyhedron];
    }
    cout << ans;
}

// https://codeforces.com/problemset/problem/785/A