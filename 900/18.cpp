#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long a, b, c;
        cin >> a >> b >> c;

        bool ok = false;

        if ((a + c) % (2 * b) == 0) {
            long long m = (a + c) / (2 * b);
            if (m >= 1) ok = true;
        }

        if ((2 * b - c) > 0 && (2 * b - c) % a == 0) {
            long long m = (2 * b - c) / a;
            if (m >= 1) ok = true;
        }

        if ((2 * b - a) > 0 && (2 * b - a) % c == 0) {
            long long m = (2 * b - a) / c;
            if (m >= 1) ok = true;
        }

        cout << (ok ? "YES\n" : "NO\n");
    }
    return 0;
}
