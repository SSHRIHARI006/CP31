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
        bool flag = false;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(gcd(A[i],A[j])<=2){flag=true;break;}
            }
        }
        if(flag)cout<<"Yes"<<endl;
        else cout << "No"<<endl;
    }
    return 0;
}
