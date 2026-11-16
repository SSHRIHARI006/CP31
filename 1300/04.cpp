#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool isprime(ll n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;

    for (ll i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }

    return true;
}

void solve(ll x, map<ll, ll>& mp) {
    for (ll i = 2; i * i <= x; i++) {
        if (isprime(i)) {
            while (x % i == 0) {
                mp[i]++;
                x /= i;
            }
        }
    }

    if (x > 1) mp[x]++;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;

        vector<ll> a(n);
        for (ll i = 0; i < n; i++) cin >> a[i];

        map<ll, ll> mp;

        for (ll x : a) {
            if (x > 1) solve(x, mp);
        }

        bool flag = true;

        for (auto [prime, power] : mp) {
            if (power % n != 0) {
                flag = false;
                break;
            }
        }

        cout << (flag ? "YES" : "NO") << '\n';
    }

    return 0;
}