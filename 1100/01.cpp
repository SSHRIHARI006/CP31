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
        int n;
        cin >> n;

        string s;
        cin >> s;

        vector<int> f(26, 0);
        int cnt = 0;

        vector<int> distinct(n, 0);

        for(int i = 0; i < n; i++) {
            f[s[i] - 'a']++;

            if(f[s[i] - 'a'] == 1) cnt++;

            distinct[i] = cnt;
        }

        ll ans = 0;

        for(int i = 0; i < n; i++) {
            ans += distinct[i];
        }

        cout << ans << '\n';
    }

    return 0;
}