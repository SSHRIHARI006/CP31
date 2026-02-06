#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        long long n, k, q;
        cin >> n >> k >> q;

        vector<long long> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        long long ans = 0, len = 0;

        for(int i = 0; i < n; i++) {
            if(a[i] <= q) {
                len++;
            } else {
                if(len >= k) {
                    long long L = len - k + 1;
                    ans += (L * (L + 1)) / 2;
                }
                len = 0;
            }
        }

        if(len >= k) {
            long long L = len - k + 1;
            ans += (L * (L + 1)) / 2;
        }

        cout << ans << "\n";
    }
}
