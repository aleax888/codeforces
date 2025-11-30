#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, s_score = 0, d_score = 0, max;
    cin >> n;
    vector<int> cards(n);
    for (size_t i = 0; i < n; i++)
    {
        cin >> cards[i];
    }

    bool turn = true;
    for (int i = 0, j = n - 1; i <= j; turn = !turn)
    {
        if (cards[i] > cards[j])
        {
            max = cards[i];
            i++;
        }
        else
        {
            max = cards[j];
            j--;
        }
        if (turn)
        {
            s_score += max;
        }
        else
        {
            d_score += max;
        }
    }

    cout << s_score << " " << d_score;
}

// https://codeforces.com/problemset/problem/381/A