#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define all(x) (x).begin(), (x).end()
#define pb push_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int ones = 0, zeros = 0;

        for (int i = 0; i < n; i++) {
            long long x;
            cin >> x;

            if (x == 1) ones++;
            else if (x == 0) zeros++;
        }

        long long ans = ones * (1LL << zeros);

        cout << ans << '\n';
    }

    return 0;
}