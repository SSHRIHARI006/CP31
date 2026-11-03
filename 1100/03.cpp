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

    while(t--) {
        int n;
        cin >> n;

        vector<pair<ll,int>> a(n);

        for(int i = 0; i < n; i++) {
            cin >> a[i].first;
            a[i].second = i;
        }

        sort(all(a));

        vector<ll> pref(n);
        vector<int> ans(n);

        pref[0] = a[0].first;

        for(int i = 1; i < n; i++) {
            pref[i] = pref[i-1] + a[i].first;
        }

        ans[n-1] = n-1;

        for(int i = n-2; i >= 0; i--) {
            if(pref[i] >= a[i+1].first)
                ans[i] = ans[i+1];
            else
                ans[i] = i;
        }

        vector<int> res(n);

        for(int i = 0; i < n; i++) {
            res[a[i].second] = ans[i];
        }

        for(int i = 0; i < n; i++) {
            cout << res[i] << " ";
        }

        cout << '\n';
    }

    return 0;
}