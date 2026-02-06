#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long a, b;
        int n;
        cin >> a >> b >> n;

        vector<long long> x(n);
        for (int i = 0; i < n; i++) cin >> x[i];

        sort(x.rbegin(), x.rend()); 

        long long ans = b;  

        long long cap = a - 1; 

        for (long long v : x) {
            ans += min(v, cap);
        }

        cout << ans << "\n";
    }
    return 0;
}
