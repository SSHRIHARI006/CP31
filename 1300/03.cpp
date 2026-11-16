#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define all(x) (x).begin(), (x).end()
#define pb push_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin>>n;
        vector<ll>a(n);
        for(ll i=0;i<n;i++)cin>>a[i];
        vector<ll>po(n,0),pe(n,0);
        pe[0]=a[0];
        ll flag = 0;
        map<ll,ll>mp;
        mp[po[0]-pe[0]]++;
        for(ll i=1;i<n;i++){
            po[i] += po[i-1];
            pe[i] += pe[i-1];

            if(i%2) po[i] += a[i];
            else pe[i] += a[i];

            ll k = po[i]-pe[i];
            mp[k]++;

            if(mp[k]==2 || k==0)flag = 1;
        }

        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
