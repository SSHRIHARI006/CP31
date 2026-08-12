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
        int n, a, b;
        cin >> n >> a >> b;

        if (a == n && b == n)
            cout << "Yes\n";
        else if (a + b <= n - 2)
            cout << "Yes\n";
        else
            cout << "No\n";
    }

    return 0;
}
