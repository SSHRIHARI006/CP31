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

        vector<ll> a(n);

        for(auto &x : a) cin >> x;

        sort(a.begin(), a.end());

        if(a[0] != 1) {
            cout << "NO\n";
            continue;
        }

        ll sum = 1;
        bool ok = true;

        for(int i = 1; i < n; i++) {
            if(a[i] > sum) {
                ok = false;
                break;
            }

            sum += a[i];
        }

        cout << (ok ? "YES\n" : "NO\n"); 
    }
    return 0;
}
