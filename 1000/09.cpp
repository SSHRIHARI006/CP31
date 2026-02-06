#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; 
    cin >> t;
    while(t--) {
        long long n;
        cin >> n;

        long long best = 1;
        for(long long i = 1; i * i <= n; i++) {
            if(n % i == 0) {
                if(i < n) best = max(best, i);
                long long j = n / i;
                if(j < n) best = max(best, j);
            }
        }

        cout << best << " " << n - best << "\n";
    }
}
