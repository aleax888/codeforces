#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, current_word_size;
    cin >> n;
    cin.ignore();
    for (short int i = 0; i < n; i++)
    {
        string word;
        getline(cin, word);
        current_word_size = word.size();
        if (current_word_size > 10)
        {
            cout << word.front() << current_word_size - 2 << word.back() << endl;
        }
        else
        {
            cout << word << endl;
        }
    }
}

// https://codeforces.com/problemset/problem/71/A