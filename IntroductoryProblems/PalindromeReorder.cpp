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

    if (n == 1)
    {
        cout << s;
        return 0;
    }

    unordered_map<char, int> mp;
    for (char c : s)
    {
        mp[c]++;
    }

    int oddCount = 0;
    char oddChar;
    for (auto e : mp)
    {
        if (e.second % 2 == 1)
        {
            oddCount++;
            oddChar = e.first;
        }
    }

    if (oddCount > 1)
    {
        cout << "NO SOLUTION";
        return 0;
    }

    vector<char> ans(n);
    int i = 0, j = n - 1;

    for (auto e : mp)
    {
        int freq = e.second;
        if (freq % 2 == 1)
        {
            ans[n / 2] = e.first;
            freq--;
        }

        while (freq > 0)
        {
            ans[i] = e.first;
            i++;
            ans[j] = e.first;
            j--;
            freq -= 2;
        }
    }

    cout << string(ans.begin(), ans.end());
    return 0;
}
