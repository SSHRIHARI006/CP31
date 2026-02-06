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
    vector<long long> A(n);
    for (int i = 0; i < n; i++) cin >> A[i];

    long long ans = 0;

    for (int i = n - 2; i >= 0; i--) {
        while (A[i] >= A[i+1]) {
            if (A[i] == 0) {
                cout << -1 << "\n";
                return;
            }
            A[i] /= 2;
            ans++;
        }
        if (A[i] >= A[i+1]) {
            cout << -1 << "\n";
            return;
        }
    }

    cout << ans << "\n";
}


int main() {
    fastio();
    int t;
    cin>>t;
    while (t--) solve();
    return 0;
}
