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
        vector<int>A(n);
        for(int i=0;i<n;i++)cin>>A[i];
        int ans = 0,curr=0;
        for(int a:A){
            if(!a)curr++;
            else curr = 0;
            ans = max(ans,curr);
        }
        cout << ans << endl;
    
    }
    return 0;
}
