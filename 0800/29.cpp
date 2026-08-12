#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define all(x) (x).begin(), (x).end()
#define pb push_back

bool p(int n){
    return n%2==1;
}
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
        int pairs = 0;
        for(int i=1;i<n;i++){
            if(p(A[i])==p(A[i-1]))pairs++;
        }
        cout << pairs << endl;
    }
    return 0;
}
