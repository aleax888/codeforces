#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();

    string opinions;
    getline(cin, opinions);

    cout << (opinions.find('1') == string::npos ? "EASY" : "HARD");
}

// https://codeforces.com/problemset/problem/1030/A