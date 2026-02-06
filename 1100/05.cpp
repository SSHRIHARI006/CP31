#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long>a(n), pref(n+1,0);
        for(int i=0;i<n;i++){
            cin>>a[i];
            pref[i+1]=pref[i]+a[i];
        }

        long long ans=0;

        for(int k=1;k<=n;k++){
            if(n%k) continue;

            long long mn=LLONG_MAX, mx=LLONG_MIN;

            for(int i=0;i<n;i+=k){
                long long s=pref[i+k]-pref[i];
                mn=min(mn,s);
                mx=max(mx,s);
            }

            ans=max(ans,mx-mn);
        }

        cout<<ans<<"\n";
    }
    return 0;
}
