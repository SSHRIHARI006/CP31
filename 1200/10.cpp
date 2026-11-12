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

    while (t--) {
        int n, q;
        cin >> n >> q;

        vector<ll> a(n), k(q);

        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < q; i++) cin >> k[i];

        vector<ll> ps(n + 1, 0), pm(n);

        for (int i = 0; i < n; i++) {
            ps[i + 1] = ps[i] + a[i];

            pm[i] = a[i];
            if (i > 0) {
                pm[i] = max(pm[i], pm[i - 1]);
            }
        }

        for (int i = 0; i < q; i++) {
            int idx = upper_bound(all(pm), k[i]) - pm.begin();

            cout << ps[idx] << " ";
        }

        cout << "\n";
    }

    return 0;
}