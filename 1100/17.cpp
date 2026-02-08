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
        int n,k;
        cin>>n>>k;
        vector<vector<int>>A(n,vector<int>(n));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++)cin>>A[i][j];
        }
        int count = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(A[i][j] != A[n-i-1][n-j-1])count++;
            }
        }
        count /=2;

        if(count>k)cout<<"NO"<<endl;
        else{
            int t = k-count;
            if(!(t%2))cout<<"YES"<< endl;
            else{
                if(!(n%2))cout<<"NO"<<endl;
                else cout << "YES"<<endl;
            }
        }

    }
    return 0;
}
