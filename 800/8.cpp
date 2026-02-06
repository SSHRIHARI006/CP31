#include <bits/stdc++.h>
using namespace std;



int main() {
    int t;
    cin >> t;

    while (t--) {

        int n,k;
        cin>>n>>k;
        vector<int>A(n);
        for(int i=0;i<n;i++)cin>>A[i];

        auto it = find(A.begin(),A.end(),k);

        if(it != A.end()) cout << "YES" << endl;
        else cout << "NO" << endl;

    }
    return 0;
}
