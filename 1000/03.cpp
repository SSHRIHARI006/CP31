#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n, p;
        cin >> n >> p;

        vector<long long> a(n), b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        vector<pair<long long,long long>> v(n);
        for (int i = 0; i < n; i++) v[i] = {b[i], a[i]};

        sort(v.begin(), v.end());

        long long minimum_cost = p;
        long long already_shared = 1;

        for (auto &it : v) {
            long long can_be_shared = it.second;
            long long sharing_cost = it.first;

            if (sharing_cost >= p) break;

            long long take = min(can_be_shared, n - already_shared);
            minimum_cost += take * sharing_cost;
            already_shared += take;

            if (already_shared == n) break;
        }

        minimum_cost += (n - already_shared) * p;
        cout << minimum_cost << "\n";
    }
    return 0;
}
