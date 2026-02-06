#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;

        vector<long long> a(n), b(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++) cin >> b[i];

        vector<long long> prefA(n), maxB(n);
        prefA[0] = a[0];
        maxB[0] = b[0];

        for(int i = 1; i < n; i++){
            prefA[i] = prefA[i-1] + a[i];
            maxB[i] = max(maxB[i-1], b[i]);
        }

        long long ans = 0;
        int lim = min(n, k);

        for(int i = 1; i <= lim; i++){
            long long cur = prefA[i-1] + (long long)(k - i) * maxB[i-1];
            ans = max(ans, cur);
        }

        cout << ans << '\n';
    }
    return 0;
}
