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
        cin >> n;
        vector<int> A(n);
        int total_twos = 0;
        
        for(int i = 0; i < n; i++) {
            cin >> A[i];
            if (A[i] == 2) {
                total_twos++;
            }
        }

        if (total_twos % 2 != 0) {
            cout << -1 << "\n";
            continue;
        }

        int current_twos = 0;
        int ans = -1;
        
        for(int i = 0; i < n - 1; i++) {
            if (A[i] == 2) {
                current_twos++;
            }
            
            if (current_twos == total_twos / 2) {
                ans = i + 1;
                break;
            }
        }
        
        cout << ans << "\n";
    }
    return 0;
}