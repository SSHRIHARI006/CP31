#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int,int>;
using vi = vector<int>;
using vll = vector<ll>;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL)
#define all(x) (x).begin(), (x).end()


int main() {
    fastio;
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vll A(n),B(n);
        for(int i=0;i<n;i++)cin>>A[i];
        for(int i=0;i<n;i++)cin>>B[i];

        unordered_map<ll,int>maxA,maxB;
        
        for (int i = 0; i < n; ) {
            int j = i;
            while (j < n && A[j] == A[i]) j++;
            maxA[A[i]] = max(maxA[A[i]], j - i);
            i = j;
        }

        for (int i = 0; i < n; ) {
            int j = i;
            while (j < n && B[j] == B[i]) j++;
            maxB[B[i]] = max(maxB[B[i]], j - i);
            i = j;
        }

        
        int ans = 0;

        for(auto &[x,v]:maxA){
            ans = max(ans,v+maxB[x]);
        }
        for(auto &[x,v]:maxB){
            ans = max(ans,v+maxA[x]);
        }

        cout << ans << endl;
        

    }
    return 0;
}
