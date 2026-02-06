#include<bits/stdc++.h>
using namespace std;

int main() {


    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int &x : a) cin >> x;

        sort(a.begin(), a.end());

        int best = 1, curr = 1;

        for (int i = 1; i < n; i++) {
            if (a[i] - a[i - 1] <= k) {
                curr++;
            } else {
                best = max(best, curr);
                curr = 1;
            }
        }
        best = max(best, curr);

        cout << n - best << "\n";
    }
}


