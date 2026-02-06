#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL)

int main() {
    fastio;
    int t;
    cin >> t;
    while (t--) {
        int n, r, b;
        cin >> n >> r >> b;

        int slots = b + 1;
        int base = r / slots;
        int extra = r % slots;

        string ans = "";

        for (int i = 0; i < slots; i++) {
            int reds = base + (i < extra);
            ans += string(reds, 'R');
            if (i < b) ans += 'B';
        }

        cout << ans << '\n';
    }
}
