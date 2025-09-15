#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string s;
    cin >> s;

    int n = s.size();

    int c = 0;
    int cur = s[0];
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (s[i] != cur)
        {
            c = 0;
            cur = s[i];
            c++;
        }
        else
        {
            c++;
            maxi = max(c, maxi);
        }
    }
    cout << maxi;
}