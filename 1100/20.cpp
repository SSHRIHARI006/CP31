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
        vector<ll>a(n);
        for(int i=0;i<n;i++)cin>>a[i];

        vector<ll>pre(n+1,0);
        for(int i=0;i<n;i++){
            pre[i+1]=pre[i]+a[i];
        }
        ll ans = 1;
        for(int i=1;i<n;i++){
            ll s1 = pre[i];
            ll s2 = pre[n]-pre[i];
            ll gcd = __gcd(s1,s2);
            ans = max(ans,gcd);
        }
        cout << ans << endl;
    }
    return 0;
}
