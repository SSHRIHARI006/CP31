#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(vector<int>& a, vector<int>& nextDifferent, int l, int r) {
    int p = nextDifferent[l - 1];

    if (p < r) {
        cout << l << " " << p + 1 << '\n';
    } else {
        cout << -1 << " " << -1 << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        vector<int> nd(n, n);

        for (int i = n - 2; i >= 0; i--) {
            if (a[i] != a[i + 1]) {
                nd[i] = i + 1;
            } else {
                nd[i] = nd[i + 1];
            }
        }
        int q;
        cin >> q;

        while (q--) {
            int l, r;
            cin >> l >> r;

            solve(a, nd, l, r);
        }

        cout << '\n';
    }

    return 0;
}