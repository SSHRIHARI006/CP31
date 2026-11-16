#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define all(x) (x).begin(), (x).end()
#define pb push_back

const ll MOD = 998244353;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    vector<ll> fact(200005, 1);

    for (int i = 1; i < 200005; i++) {
        fact[i] = (fact[i - 1] * i) % MOD;
    }

    while (t--) {
        string s;
        cin >> s;

        ll cnt = 0;
        ll ways = 1;

        for (int i = 0; i < (int)s.size();) {
            int j = i;

            while (j < (int)s.size() && s[j] == s[i]) {
                j++;
            }

            ll len = j - i;

            cnt += len - 1;
            ways = (ways * len) % MOD;

            i = j;
        }

        ways = (ways * fact[cnt]) % MOD;

        cout << cnt << " " << ways << '\n';
    }

    return 0;
}