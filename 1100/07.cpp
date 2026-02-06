#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n;
        long long x;
        cin>>n>>x;

        vector<long long>A(n);
        for(int i=0;i<n;i++) cin>>A[i];

        long long l=1;
        long long h=*max_element(A.begin(),A.end())+x;
        long long ans=1;

        while(l<=h){
            long long m=l+(h-l)/2;
            long long hi=0;

            for(int i=0;i<n;i++){
                if(A[i]<m) hi+=(m-A[i]);
                if(hi>x) break;
            }

            if(hi<=x){
                ans=m;
                l=m+1;
            }else{
                h=m-1;
            }
        }

        cout<<ans<<"\n";
    }
    return 0;
}
