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

        ll sum = 0, mn = LLONG_MAX;
        int neg = 0;
        bool zero = false;

        for (int i = 0; i < n; i++) {
            ll x;
            cin >> x;

            sum += abs(x);
            mn = min(mn, abs(x));

            if (x < 0) neg++;
            if (x == 0) zero = true;
        }

        if (neg % 2 == 0 || zero) {
            cout << sum << '\n';
        } 
        else {
            cout << sum - 2 * mn << '\n';
        }
        

    }
    return 0;
}
