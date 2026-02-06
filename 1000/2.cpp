#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,k;
        cin>>n>>k;
        vector<int>A(n);
        int ans = INT_MAX;
        int even = 0;
        for(int i=0;i<n;i++){

            cin>>A[i];

            if(A[i]%2==0) even++;

            if(A[i]%k==0)ans = 0;

            ans = min(ans,k-(A[i]%k));

        }

        if(k==4){
            if(even>=2)ans = min(ans,0);
            else if(even == 1) ans = min(ans,1);
            else ans = min(ans,2);
        }

        cout<<ans<<endl;

    }
}
