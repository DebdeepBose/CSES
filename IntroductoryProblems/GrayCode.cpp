#include <bits/stdc++.h>
using namespace std;

void genGS(int n, string s)
{
    if (s.size() == n)
    {
        cout << s << endl;
        return;
    }

    s.push_back('0');
    genGS(n, s);
    s.pop_back();

    s.push_back('1');
    genGS(n, s);
    s.pop_back();
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    genGS(n, "");

    return 0;
}
