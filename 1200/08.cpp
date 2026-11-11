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

        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        int l = 0, r = n - 1;
        int mn = 1, mx = n;
        int flag = 0;

        while (l < r) {
            if (a[l] == mn) {
                mn++;
                l++;
            }
            else if (a[l] == mx) {
                mx--;
                l++;
            }
            else if (a[r] == mn) {
                mn++;
                r--;
            }
            else if (a[r] == mx) {
                mx--;
                r--;
            }
            else {
                cout << l + 1 << " " << r + 1 << "\n";
                flag = 1;
                break;
            }
        }

        if (!flag) {
            cout << -1 << "\n";
        }
    }

    return 0;
}