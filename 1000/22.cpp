#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        ll a, b;
        cin >> a >> b;

        ll ans = LLONG_MAX; 
        for(ll i = 0; i <= 35; i++) {
            ll nb = b + i;

            if(nb == 1) continue;

            ll na = a;
            ll cnt = i;

            while(na > 0) {
                na /= nb;
                cnt++;
            }

            ans = min(ans, cnt);
        }

        cout << ans << '\n';
    }

    return 0;
}