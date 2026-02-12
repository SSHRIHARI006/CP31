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
        ll n, k;
        cin >> n >> k;

        if (k % 2 == 0) {
            if (n % 2 == 0)
                cout << "YES\n";
            else
                cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }
    return 0;
}
