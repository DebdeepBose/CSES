#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long n;
    cin >> n;

    if (n < 5)
    {
        cout << 0;
        return 0;
    }

    long long c = 0;

    while (n != 0)
    {
        c += n / 5;
        n /= 5;
    }

    cout << c;
    return 0;
}