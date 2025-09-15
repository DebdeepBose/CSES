#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;

    while (t--)
    {
        long long x, y;
        cin >> y >> x;

        long long maxi = max(x, y);
        long long sq = (maxi - 1) * (maxi - 1);
        if (maxi % 2 == 0)
        {
            if (x > y)
            {
                cout << sq + y << endl;
            }
            else
            {
                cout << (maxi * maxi) - x + 1 << endl;
            }
        }
        else
        {
            if (x > y)
            {
                cout << (maxi * maxi) - y + 1 << endl;
            }
            else
            {
                cout << sq + x << endl;
            }
        }
    }
    return 0;
}