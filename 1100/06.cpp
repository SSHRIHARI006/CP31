#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;

        vector<long long>A(n);
        for(int i=0;i<n;i++) cin>>A[i];

        int mn = 31;

        while(q--){
            int x;
            cin>>x;
            if(x >= mn) continue;
            mn = x;

            long long add = 1LL << (x-1);

            for(int i=0;i<n;i++){
                if((A[i] & ((1LL<<x)-1)) == 0){
                    A[i] += add;
                }
            }
        }

        for(long long v : A) cout<<v<<" ";
        cout<<"\n";
    }
    return 0;
}
