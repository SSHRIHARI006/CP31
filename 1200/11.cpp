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

        vector<bool> deleted(n + 1, false);
        ll ans = 0;

        for (int i = 1; i <= n; i++) {
            for (int j = i; j <= n; j += i) {
                if (s[j - 1] == '1') break;

                if (!deleted[j]) {
                    ans += i;
                    deleted[j] = true;
                }
            }
        }

        cout << ans << '\n';
    }

    return 0;
}