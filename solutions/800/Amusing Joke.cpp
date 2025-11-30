#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

void save_repetitions(string &str, unordered_map<char, int> &umap)
{
    for (const char &e : str)
    {
        if (umap.find(e) == umap.end())
        {
            umap[e] = 1;
        }
        else
        {
            umap[e]++;
        }
    }
}

int main()
{
    string guest_name, residence_host, letters_pile;
    cin >> guest_name >> residence_host >> letters_pile;

    unordered_map<char, int> names;
    unordered_map<char, int> letters;

    save_repetitions(guest_name, names);
    save_repetitions(residence_host, names);
    save_repetitions(letters_pile, letters);

    if (names.size() != letters.size())
    {
        cout << "NO";
        return 0;
    }

    for (const auto &[key, value] : names)
    {
        if (letters.find(key) == letters.end() || value != letters[key])
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}

// https://codeforces.com/problemset/problem/141/A