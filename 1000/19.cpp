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

        vector<long long> A(n);
        for (int i = 0; i < n; i++) cin >> A[i];

        vector<pair<long long,int>> build_map;
        for (int i = 0; i < n; i++) {
            build_map.push_back({A[i], i});
        }

        sort(build_map.rbegin(), build_map.rend());

        vector<long long> ans(n + 1, 0);
        ans[0] = 0;

        long long minutes = 0;
        long long cord = 1;

        for (int i = 0; i < n; i++) {
            ans[build_map[i].second + 1] = cord;
            minutes += 2LL * abs(cord) * build_map[i].first;

            if (cord < 0) cord = abs(cord) + 1;
            else cord = -cord;
        }

        cout << minutes << '\n';
        for (auto x : ans) cout << x << " ";
        cout << '\n';
    }
    return 0;
}
