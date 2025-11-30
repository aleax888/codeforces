#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    string remix;
    vector<string> ans;
    cin >> remix;

    for (size_t i = 0, s = remix.size(), cutted_s = s - 2; i < s; i++)
    {
        if (remix[i] == 'W' && i < cutted_s && remix[i + 1] == 'U' && remix[i + 2] == 'B')
        {
            i += 2;
            // cout << "skip WUB: " << i << endl;
        }
        else
        {
            int end = remix.find("WUB", i + 1);
            end = end == string::npos ? s : end;
            ans.push_back(remix.substr(i, end - i));
            i = end - 1;
            // cout << "new word: " << end << " -> " << ans[ans.size() - 1] << endl;
        }
    }

    cout << ans[0];
    for (int i = 1, s = ans.size(); i < s; i++)
    {
        cout << ' ' << ans[i];
    }
}

// https://codeforces.com/problemset/problem/208/A