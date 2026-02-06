#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (auto &x : a) cin >> x;

        long long mx = *max_element(a.begin(), a.end());
        vector<long long> b, c;

        for (long long x : a) {
            if (x == mx) c.push_back(x);
            else b.push_back(x);
        }

        if (b.empty()) {
            cout << -1 << "\n";
            continue;
        }

        cout << b.size() << " " << c.size() << "\n";
        for (long long x : b) cout << x << " ";
        cout << "\n";
        for (long long x : c) cout << x << " ";
        cout << "\n";
    }
}
