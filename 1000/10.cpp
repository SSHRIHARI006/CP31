#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        char c;
        cin >> n >> c;
        string s;
        cin >> s;

        if (c == 'g') {
            cout << 0 << '\n';
            continue;
        }

        string ss = s + s;
        int m = ss.size();

        vector<int> nextg(m, 0);
        int last = -1;
        for (int i = m - 1; i >= 0; i--) {
            if (ss[i] == 'g') last = i;
            if (last != -1) nextg[i] = last - i;
        }

        int ans = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == c) {
                ans = max(ans, nextg[i]);
            }
        }

        cout << ans << '\n';
    }
    return 0;
}
