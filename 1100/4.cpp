#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define all(x) (x).begin(), (x).end()
#define pb push_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        vector<ll> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        vector<ll> dp(n);
        dp[0] = a[0];

        ll ans = a[0];

        for(int i = 1; i < n; i++) {
            if(abs(a[i]) % 2 != abs(a[i-1]) % 2) {
                dp[i] = max(a[i], dp[i-1] + a[i]);
            }
            else {
                dp[i] = a[i];
            }

            ans = max(ans, dp[i]);
        }

        cout << ans << '\n';
    }

    return 0;
}
