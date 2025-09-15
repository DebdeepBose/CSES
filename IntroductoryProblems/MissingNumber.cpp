#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;

    vector<int> v(n - 1);
    for (int i = 0; i < n - 1; i++)
    {
        cin >> v[i]; 
    }

    sort(v.begin(), v.end());

    if (v[0] != 1)
    {
        cout << 1;
        return 0;
    }

    for (int i = 1; i < n - 1; i++)
    {
        if (v[i] != v[i - 1] + 1)
        {
            cout << v[i] - 1;
            return 0;
        }
    }

    cout << n;
    return 0;
}
