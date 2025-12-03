#include <iostream>
#include <string>
#include <unordered_map>
#include <utility>
using namespace std;

std::unordered_map<char, std::pair<char, char>> keyboard = []
{
    std::unordered_map<char, std::pair<char, char>> res;

    // keyboard's rows
    std::string fila1 = "qwertyuiop";
    std::string fila2 = "asdfghjkl;";
    std::string fila3 = "zxcvbnm,./";

    auto load = [&](const std::string &fila)
    {
        for (size_t i = 0, s = fila.size(); i < s; ++i)
        {
            char key = fila[i];
            char left = (i > 0) ? fila[i - 1] : '\0';
            char right = (i + 1 < fila.size()) ? fila[i + 1] : '\0';
            res[key] = {left, right};
        }
    };

    load(fila1);
    load(fila2);
    load(fila3);

    return res;
}();

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    char side;
    string sequence, ans = "";
    cin >> side >> sequence;
    if (side == 'L')
    {
        for (auto &&i : sequence)
        {
            ans += keyboard[i].second;
        }
    }
    else
    {
        for (auto &&i : sequence)
        {
            ans += keyboard[i].first;
        }
    }
    cout << ans;
}

// link: https://codeforces.com/problemset/problem/474/A
