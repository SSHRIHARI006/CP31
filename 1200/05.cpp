#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define all(x) (x).begin(), (x).end()
#define pb push_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        vector<vector<int>> idx(k + 1);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            idx[a[i]].push_back(i + 1);
        }

        int ans = n;

        for (int i = 1; i <= k; i++) {
            idx[i].insert(idx[i].begin(), 0);
            idx[i].push_back(n + 1);

            int mx1 = 0, mx2 = 0;

            for (int j = 1; j < idx[i].size(); j++) {
                int gap = idx[i][j] - idx[i][j - 1] - 1;

                if (gap > mx1) {
                    mx2 = mx1;
                    mx1 = gap;
                }
                else if (gap > mx2) {
                    mx2 = gap;
                }
            }

            ans = min(ans, max((mx1 ) / 2, mx2));
        }

        cout << ans << '\n';
        
    }
    return 0;
}
