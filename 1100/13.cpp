#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        long long g = 0;
        for (int i = 0; i < n / 2; i++) {
            g = gcd(g, llabs(a[i] - a[n - i - 1]));
        }

        cout << (g == 0 ? 0 : g) << '\n';
    }
}
