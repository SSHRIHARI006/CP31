#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define all(x) (x).begin(), (x).end()
#define pb push_back

ll dist(pair<ll,ll> a, pair<ll,ll> b) {
    return llabs(a.first - b.first) +
           llabs(a.second - b.second);
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, k, a, b;
        cin >> n >> k >> a >> b;

        vector<pair<ll,ll>> v(n + 1);

        for (int i = 1; i <= n; i++) {
            cin >> v[i].first >> v[i].second;
        }

        if (a <= k && b <= k) {
            cout << 0 << '\n';
            continue;
        }

        ll direct = dist(v[a], v[b]);

        ll da = LLONG_MAX;
        ll db = LLONG_MAX;

        for (int i = 1; i <= k; i++) {
            da = min(da, dist(v[a], v[i]));
            db = min(db, dist(v[b], v[i]));
        }

        ll ans = direct;

        if (a > k) da = min(da, direct);
        if (b > k) db = min(db, direct);

        ans = min(ans, da + db);

        cout << ans << '\n';
    }

    return 0;
}
