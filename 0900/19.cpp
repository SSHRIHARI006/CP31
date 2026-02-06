#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long x, n;
        cin >> x >> n;

        long long k = n % 4;

        if (x % 2 == 0) {
            if (k == 1) x -= n;
            else if (k == 2) x += 1;
            else if (k == 3) x += n + 1;
        } else {
            if (k == 1) x += n;
            else if (k == 2) x -= 1;
            else if (k == 3) x -= n + 1;
        }

        cout << x << "\n";
    }
    return 0;
}
