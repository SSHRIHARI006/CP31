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
    long long n;
    cin >> n;

    if(n<4)cout << -1 << endl;
    else{
    if (n % 2 == 1) {
        cout << -1 << "\n";
        return;
    }

    long long mn = (n+5) / 6;
    

    long long mx = n / 4;

    cout << mn << " " << mx << "\n";
}
}


int main() {
    fastio();
    int t;
    cin>>t;
    while (t--) solve();
    return 0;
}
