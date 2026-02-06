#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        long long inc = 0, dec = 0, ans = 0;

        for (char c : s) {
            if (c == '<') inc++, dec = 0;
            else dec++, inc = 0;
            ans = max(ans, max(inc, dec));
        }
        cout << ans + 1 << "\n";
    }
}
