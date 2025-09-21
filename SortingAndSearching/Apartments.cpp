#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, m, k;
    cin >> n >> m >> k;

    vector<int> appli(n);
    for (int i = 0; i < n; i++)
    {
        cin >> appli[i];
    }

    vector<int> apart(m);
    for (int i = 0; i < m; i++)
    {
        cin >> apart[i];
    }

    sort(appli.begin(), appli.end());
    sort(apart.begin(), apart.end());

    int i = 0;
    int j = 0;
    int c = 0;

    while (i < n && j < m)
    {
        if (abs(appli[i] - apart[j]) <= k)
        {
            c++;
            i++;
            j++;
        }
        else if (abs(appli[i] - apart[j]) > k)
        {
            if (appli[i] > apart[j])
            {
                j++;
            }
            else
            {
                i++;
            }
        }
    }
    cout << c;

    return 0;

    // 45 60 60 80
    // 30 60 75
}