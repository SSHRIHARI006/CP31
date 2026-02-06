#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;

        vector<int> A(n), B(n), C(n);
        for (int i = 0; i < n; i++) cin >> A[i];
        for (int i = 0; i < n; i++) cin >> B[i];
        for (int i = 0; i < n; i++) cin >> C[i];

        int curr = 0;

        for (int a : A) {
            if ((a | x) != x) break;
            curr |= a;
        }

        for (int a : B) {
            if ((a | x) != x) break;
            curr |= a;
        }

        for (int a : C) {
            if ((a | x) != x) break;
            curr |= a;
        }

        cout << (curr == x ? "YES\n" : "NO\n");
    }
    return 0;
}
