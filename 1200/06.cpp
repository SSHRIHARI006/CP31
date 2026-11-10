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
        for(int i=0;i<n;i++)cin>>a[i];
    
        vector<int>b;
        for(int i=0;i<n;i++){
            if(b.empty() || b.back()!=a[i])b.push_back(a[i]);
        }
        int m = b.size();
        if(m<=2){cout<< m << endl;continue;}

        int ans =  2;

        for (int i = 1; i < m - 1; i++) {
            if ((b[i] > b[i - 1] && b[i] > b[i + 1]) ||
                (b[i] < b[i - 1] && b[i] < b[i + 1])) {
                ans++;
            }
        }

        cout << ans << '\n';

    }
    return 0;
}
