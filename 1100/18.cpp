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
        int n,c;
        cin>>n>>c;
        vector<int>A;
        for(int i=1;i<=n;i++){
            int x;
            cin>>x;
            A.push_back(x+i);

        }
        sort(A.begin(),A.end());
        int i=0,ans=0;
        while(i<n && A[i]<=c){
            c-=A[i];ans++;i++;
        }
        cout << ans << endl;

    }
    return 0;
}
