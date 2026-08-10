#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define all(x) (x).begin(), (x).end()
#define pb push_back

bool isSorted(vector<int>&A){
    for(int i=1;i<A.size();i++){
        if(A[i]<A[i-1])return false;
    }
    return true;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n,k;
        cin>>n>>k;
        vector<int>A(n);
        for(int i=0;i<n;i++)cin>>A[i];
        if(k<2 && !isSorted(A))cout << "NO"<<endl;
        else cout << "YES"<<endl;
    }
    return 0;
}
