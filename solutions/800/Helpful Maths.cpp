#include <iostream>
#include <string>
#include <sstream>
#include <set>
using namespace std;

int main()
{
    string input, number;
    multiset<int> numbers;

    cin >> input;
    stringstream ss(input);

    while (getline(ss, number, '+'))
    {
        numbers.insert(stoi(number));
    }

    bool first = true;
    for (const auto &num : numbers)
    {
        if (first)
        {
            cout << num;
            first = false;
        }
        else
        {
            cout << '+' << num;
        }
    }
}

// https://codeforces.com/problemset/problem/339/A