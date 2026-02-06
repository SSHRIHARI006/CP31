#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll,ll>;

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);

// Debug (disabled in CF judge)
#ifdef LOCAL
    #define dbg(x) cerr << #x << " = " << (x) << '\n';
#else
    #define dbg(x)
#endif

// Random
mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
ll rnd(ll l, ll r) { return uniform_int_distribution<ll>(l, r)(rng); }

void solve() {
    int n;
    cin >> n;
    vector<int> A(n);
    for (int i = 0; i < n; i++) cin >> A[i];

    if (n == 1) {
        cout << 0 << "\n";
        return;
    }

    int ans = INT_MIN;

    int mx = A[1];
    for (int i = 2; i < n; i++)
        mx = max(mx, A[i]);
    ans = max(ans, mx - A[0]);

    int mn = A[0];
    for (int i = 1; i < n - 1; i++)
        mn = min(mn, A[i]);
    ans = max(ans, A[n-1] - mn);

    for (int i = 0; i < n - 1; i++)
        ans = max(ans, A[i] - A[i+1]);

    cout << ans << "\n";
}



int main() {
    fastio();
    int t ;
    cin >> t;
    while (t--) solve();
    return 0;
}
