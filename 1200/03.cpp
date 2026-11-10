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
        ll n, x, y;
        cin >> n >> x >> y;

        ll l = (x / gcd(x, y)) * y;
        ll c = n / l;

        ll a = n / x - c;
        ll b = n / y - c;

        ll p = a * (2 * n - a + 1) / 2;
        ll q = b * (b + 1) / 2;

        cout << p - q << '\n';
    }
    return 0;
}
