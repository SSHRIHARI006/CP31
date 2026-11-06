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

        vector<ll>arr(n);

        for (int i = 0; i < n; i++)
            cin >> arr[i];

        ll ans = 0;

        for (int i = 1; i <= 60; i++) {
            set<ll> s;
            long long k = 1LL << i;

            for (auto a : arr) {
                s.insert(a % k);
            }

            if (s.size() == 2) {
                ans = k;
                break;
            }
        }

        cout << ans << endl;


    }
    return 0;
}
