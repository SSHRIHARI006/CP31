#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        int L = 0, R = n - 1;

        while (L < n && a[L] == b[L]) L++;
        while (R >= 0 && a[R] == b[R]) R--;

        while (L > 0 && a[L - 1] <= b[L]) L--;
        while (R < n - 1 && a[R + 1] >= b[R]) R++;

        cout << L + 1 << " " << R + 1 << "\n";
    }
    return 0;
}
