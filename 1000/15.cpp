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
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        vector<int>pre(n);

        if(s[0]=='B')pre[0]=1;
        else pre[0]=0;

        for(int i=1;i<n;i++){
            if(s[i]=='B')pre[i]=pre[i-1]+1;
            else pre[i] = pre[i-1];
        }

        int ans =INT_MAX;

        for(int i=0;i<n;i++){
            if(i+k-1 >=n)break;
            int blacks = pre[i+k-1]-(i > 0 ? pre[i - 1] : 0);
            ans = min(ans,k-blacks);
        }
        cout<<ans<<endl;
    }
    return 0;
}
