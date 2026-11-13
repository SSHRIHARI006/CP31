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
        int n, x, y;
        cin >> n >> x >> y;

        map<int, vector<int>> mp;

        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            mp[a % y].push_back(a);
        }

        long long ans = 0;

        for (auto it : mp) {
            map<int, long long> freq;

            for (int val : it.second) {
                freq[val % x]++;
            }

            for (auto p : freq) {
                int r = p.first;
                int comp = (x - r) % x;

                if (r == comp) {
                    ans += p.second * (p.second - 1) / 2;
                }
                else if (r < comp) {
                    auto jt = freq.find(comp);

                    if (jt != freq.end()) {
                        ans += p.second * jt->second;
                    }
                }
            }
        }

        cout << ans << '\n';
    }

    return 0;
}
