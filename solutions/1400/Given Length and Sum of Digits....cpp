#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string left = "", right = "";
    long long m, s, _min, _max;
    cin >> m >> s;

    _min = m > 1 ? 1 : 0;
    _max = 9 * m;

    if (s < _min || s > _max)
    {
        cout << -1 << " " << -1;
        return 0;
    }

    if (m == 1)
    {
        cout << s << " " << s;
        return 0;
    }

    for (size_t i = 0, aux1 = 1, aux2 = s; i < m; i++, aux1 *= 10, aux2 -= 9)
    {
        if (aux2 > 9)
        {
            left.push_back('9');
        }
        else
        {
            int aux = s - 9 * i;
            if (aux > 1 && i + 1 < m)
            {
                left.insert(0, to_string(aux - 1));
                for (size_t j = i + 2; j < m; j++)
                {
                    left.insert(0, "0");
                }

                left.insert(0, "1");
            }
            else
            {
                for (size_t j = i + 1; j < m; j++)
                {
                    left.insert(0, "0");
                }

                left.insert(0, to_string(aux));
            }
            break;
        }
    }

    for (size_t i = 0, aux1 = pow(10, m - 1), aux2 = s; i < m; i++, aux1 /= 10, aux2 -= 9)
    {
        if (aux2 > 9)
        {
            right.insert(0, "9");
        }
        else
        {
            right.push_back(to_string(s - 9 * i)[0]);
            for (size_t j = i + 1; j < m; j++)
            {
                right.push_back('0');
            }

            break;
        }
    }

    cout << left << " " << right;
}

// link: https://codeforces.com/problemset/problem/489/C
