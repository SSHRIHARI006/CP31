#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define all(x) (x).begin(), (x).end()
#define pb push_back

int lcs(string &a,string &b, int i,int j){
    if(i==a.size() || j==b.size())return 0;
    if(a[i]==b[j])return 1+lcs(a,b,i+1,j+1);
    return 0;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        string a,b;
        cin>>a>>b;
        int n = a.size(), m = b.size();
        int l = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                l = max(l,lcs(a,b,i,j));
            }
        }
       // int l = lcs(a,b,0,0);

        cout << n+m-(2*l) << endl;
        
    }
    return 0;
}
