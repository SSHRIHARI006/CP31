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
        int n ;
        cin>>n;
        int m = (n*(n-1))/2;
        vector<int>a(m);
        for(int i=0;i<m;i++)cin>>a[i];
        sort(a.begin(),a.end());
        int r = n-1, l = 0;
        while(r>0){
            cout << a[l] << " " ;
            l+=(r);
            r--;
        }
        cout << 1000000000 << endl;
    }
    return 0;
}
