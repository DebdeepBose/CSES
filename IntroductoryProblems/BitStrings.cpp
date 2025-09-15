#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long n;
    cin >> n;

    const long long mod = 1000000007;
    long long ans = 1;
    long long base = 2, exp = n;

    while (exp > 0) {
        if (exp % 2 == 1) {   
            ans = (ans * base) % mod;
        }
        base = (base * base) % mod;
        exp /= 2;             
    }

    cout << ans << endl;
    return 0;
}
