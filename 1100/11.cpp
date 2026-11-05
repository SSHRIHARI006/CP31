#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define all(x) (x).begin(), (x).end()
#define pb push_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<ll> A(n);

        for (auto &x : A)
            cin >> x;

        sort(A.begin(), A.end());

        int l = 0, r = n - k - 1;

        ll sum = 0;

        for (int i = l; i <= r; i++)
            sum += A[i];

        ll ans = sum;

        for (int i = 1; i <= k; i++) {
            sum -= A[l] + A[l + 1];
            l += 2;

            r++;
            sum += A[r];

            ans = max(ans, sum);
        }

        cout << ans << '\n';
    }

    return 0;
}