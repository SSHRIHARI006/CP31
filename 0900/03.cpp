#include <bits/stdc++.h>
using namespace std;

int main() {

    int t; 
    cin >> t;
    while(t--) {
        long long n, k, x;
        cin >> n >> k >> x;

        long long minsum = k * (k + 1) / 2;
        long long maxsum = k * n - (k * (k - 1)) / 2;

        if (x >= minsum && x <= maxsum) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
