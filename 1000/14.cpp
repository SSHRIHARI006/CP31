#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL)

int main() {
    fastio;
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> A(n);
        for (int i = 0; i < n; i++) cin >> A[i];

        vector<int> ans(n, -1);
        bool ok = true;

        for (int i = 0; i < n; ) {
            int j = i;
            while (j < n && A[j] == A[i]) j++;

            int len = j - i;
            if (len == 1) {
                ok = false;
                break;
            }

            for (int k = i; k < j; k++) {
                ans[k] = (k + 1 < j ? k + 2 : i + 1);
            }

            i = j;
        }

        if (!ok) {
            cout << "-1\n";
        } else {
            for (int x : ans) cout << x << " ";
            cout << "\n";
        }
    }
    return 0;
}
