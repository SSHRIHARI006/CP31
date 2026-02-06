#include <bits/stdc++.h>
using namespace std;

#define MOD (long long)(1e9+7)

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;

        vector<long long> A(n), B(n);
        for (long long i = 0; i < n; i++) cin >> A[i];
        for (long long i = 0; i < n; i++) cin >> B[i];

        sort(A.begin(), A.end());
        sort(B.rbegin(), B.rend());

        long long result = 1;

        for (long long i = 0; i < n; i++) {
            long long temp = upper_bound(A.begin(), A.end(), B[i]) - A.begin();
            long long count = n - temp;
            result = (result * max(count - i, 0LL)) % MOD;
        }

        cout << result << '\n';
    }
}
