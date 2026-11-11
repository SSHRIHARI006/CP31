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
        int n;
        cin >> n;

        map<int, int, greater<int>> mp;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            mp[x]++;
        }

        int ans = 0;

        while (!mp.empty()) {
            int x = mp.begin()->first;
            ans++;

            while (mp.count(x) && mp[x] > 0) {
                mp[x]--;
                if (mp[x] == 0) mp.erase(x);

                x--;
            }
        }

        cout << ans << "\n";
    }

    return 0;
}
