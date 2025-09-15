#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long n;
    cin >> n;

    while (n--)
    {
        long long a, b;
        cin >> a >> b;

        if (a == 0 && b == 0)
        {
            cout << "YES" << endl;
            continue;
        }

        if ((a + b) % 3 == 0)
        {
            if (a == 0 || b == 0)
            {
                cout << "NO" << endl;
            }
            else
            {
                if (((double)min(a, b) / (double)max(a, b)) >= 0.5)
                {
                    cout << "YES" << endl;
                }
                else
                {
                    cout << "NO" << endl;
                }
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}