#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<long long> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        sort(a.begin(), a.end());

        int mx = 1, cur = 1;
        for (int i = 1; i < n; i++) {
            if (a[i] == a[i - 1]) cur++;
            else cur = 1;
            mx = max(mx, cur);
        }

        if (mx == n) {
            cout << 0 << "\n";
            continue;
        }

        int swaps = n - mx;
        int clones = 0;
        int have = mx;

        while (have < n) {
            have <<= 1;
            clones++;
        }

        cout << swaps + clones << "\n";
    }
    return 0;
}
