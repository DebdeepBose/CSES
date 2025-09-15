#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    long long c = 0;

    if (n == 0)
    {
        cout << c;
        return 0;
    }

    for (int i = 1; i < n; i++)
    {
        if (v[i] < v[i - 1])
        {
            c += v[i - 1] - v[i];
            v[i] = v[i - 1];
        }
    }

    cout << c;
}