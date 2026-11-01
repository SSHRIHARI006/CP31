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
        ll n;
        cin>>n;
        if(n%2==1)cout<<"YES"<<endl;
        else{
        while(n>1 && n%2==0){
            n = n/2;
        }
        if(n==1)cout << "NO"<< endl;
        else cout << "YES" << endl;
        }
    }
    return 0;
}
