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
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++)cin>>a[i];
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            a[i] -= x;
            a[i] = -1*(a[i]);
        }
        sort(a.begin(),a.end());
        int l = 0, r = n-1 , ans = 0;
        while (l < r) {
        if (a[l] + a[r] >= 0) {
            ans++;
            l++;
            r--;
        } else {
            l++;
        }
    }

    cout << ans << '\n';

    }
    return 0;
}
