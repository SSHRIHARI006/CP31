#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        int min_el = INT_MAX;
        vector<int> second;

        for (int i = 0; i < n; i++) {
            int m;
            cin >> m;

            vector<int> M(m);
            for (int j = 0; j < m; j++) cin >> M[j];

            sort(M.begin(), M.end());
            min_el = min(min_el, M[0]);
            second.push_back(M[1]);
        }

        sort(second.begin(), second.end());
        long long second_sum = 0;
        for (int x : second) second_sum += x;

        long long ans = min_el + second_sum - second[0];
        cout << ans << "\n";
    }
    return 0;
}
