#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        long long c;
        cin >> n >> c;

        vector<long long> S(n);
        for (int i = 0; i < n; i++) cin >> S[i];

        long long s = 1;
        long long e = sqrtl((long double)c);
        long long w = 1;

        while (s <= e) {
            long long mid = s + (e - s) / 2;

            long long area = 0;
            bool tooBig = false;

            for (long long x : S) {
                long long val = x + 2 * mid;

                if (val > 1e9) { tooBig = true; break; }

                long long sq = val * val;
                if (area > c - sq) { tooBig = true; break; }

                area += sq;
            }

            if (tooBig || area >= c) {
                if (!tooBig && area == c) w = mid;
                e = mid - 1;
            } else {
                s = mid + 1;
            }
        }

        cout << w << '\n';
    }
    return 0;
}
