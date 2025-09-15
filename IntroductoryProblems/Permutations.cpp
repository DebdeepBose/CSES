#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long n;
    cin >> n;

    if (n == 1)
    {
        cout << 1;
        return 0;
    }

    if (n == 4)
    {
        cout << 2 << " " << 4 << " " << 1 << " " << 3;
        return 0;
    }

    if (n < 4)
    {
        cout << "NO SOLUTION";
        return 0;
    }

    vector<long long> ans(n, 0);
    long long o = 0;
    for (long long i = 1; i <= n; i++)
    {
        if (i % 2 == 1)
        {
            ans[o] = i;
            o++;
        }
    }
    long long e = o;
    for (long long i = 2; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            ans[e] = i;
            e++;
        }
    }

    for (long long i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}