#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, x;
    cin >> n >> x;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    long long c = 0;

    sort(v.begin(), v.end());

    int i = 0;
    int j = n - 1;

    while (i <= j)
    {
        if (i == j)
        {
            c++;
            j--;
            i++;
        }
        else if (v[i] + v[j] <= x)
        {
            c++;
            i++;
            j--;
        }
        else if (v[i] + v[j] > x)
        {
            j--;
            c++;
        }
    }

    cout << c;
    return 0;
}
