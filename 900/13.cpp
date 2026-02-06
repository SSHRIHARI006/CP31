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
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int zero = 0;
    for (int x : a) if (x == 0) zero++;

    if (zero == n) {
        cout << 0 << "\n";
        return;
    }

    int left = 0, right = n - 1;
    while (left < n && a[left] == 0) left++;
    while (right >= 0 && a[right] == 0) right--;

    bool inside_zero = false;
    for (int i = left; i <= right; i++)
        if (a[i] == 0)
            inside_zero = true;

    if (!inside_zero) cout << 1 << "\n";
    else cout << 2 << "\n";
}

int main() {
    fastio();
    int t;
    cin >> t;
    while (t--) solve(
        
    );
    return 0;
}
