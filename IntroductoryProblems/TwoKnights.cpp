#include <bits/stdc++.h>
using namespace std;

long long stval(int i)
{
    if (i == 1)
    {
        return 1;
    }
    if (i == 2)
    {
        return 4;
    }
    return stval(i - 1) + (10 * (i - 2) + 3);
}

int main()
{
    long long n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        long long sq = i * i;
        long long sumOfSq = (sq * (sq + 1)) / 2;
        long long v = stval(i);
        cout << sumOfSq - v << " ";
    }
}