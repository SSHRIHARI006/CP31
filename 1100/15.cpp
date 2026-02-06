#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int n = s.size();

        string t = s + s;

        int len = 0, curr = 0;
        for (char c : t) {
            if (c == '1') curr++;
            else curr = 0;
            len = max(len, curr);
        }

        len = min(len, n);

        if (len == n) {
            cout << 1LL * n * n << '\n';
            continue;
        }

        ll x = (len + 1) / 2;
        ll y = (len + 1) - x;
        cout << x * y << '\n';

    }
    return 0;
}
