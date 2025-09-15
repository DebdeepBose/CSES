#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long n;
    cin >> n;

    long long sum = n * (n + 1) / 2;
    if (sum % 2 != 0) {
        cout << "NO" << endl;
        return 0;
    }

    cout << "YES" << endl;
    long long target = sum / 2;

    vector<long long> p1, p2;

    for (long long i = n; i >= 1; i--) {
        if (target >= i) {
            p1.push_back(i);
            target -= i;
        } else {
            p2.push_back(i);
        }
    }

    cout << p1.size() << endl;
    for (long long x : p1) {
        cout << x << " ";
    }
    cout << endl;

    cout << p2.size() << endl;
    for (long long x : p2) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
