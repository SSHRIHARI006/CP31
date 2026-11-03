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
        vector<int>a(n);
        set<int>s;
        int f = 1;
        for(int i=0;i<n;i++){
            cin>>a[i];
            s.insert(a[i]);
    }

        if(s.size()!=n)cout << "YES"<< endl;
        else cout << "NO" << endl;

    }
    return 0;
}
