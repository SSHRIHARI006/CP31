#include <bits/stdc++.h>
using namespace std;

int solve(vector<int>& d, int a, int b) {
    int n = d.size();

    int j = -1;
    for (int i = n - 1; i >= 0; i--) {
        if (d[i] == b) {
            j = i;
            break;
        }
    }

    if (j == -1) return 1e9;

    int i = -1;
    for (int k = j - 1; k >= 0; k--) {
        if (d[k] == a) {
            i = k;
            break;
        }
    }

    if (i == -1) return 1e9;

    return (j - i - 1) + (n - j - 1);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        vector<int> d;

        while (n) {
            d.push_back(n % 10);
            n /= 10;
        }

        reverse(d.begin(), d.end());

        int ans = 1e9;

        ans = min(ans, solve(d, 0, 0));
        ans = min(ans, solve(d, 2, 5));
        ans = min(ans, solve(d, 5, 0));
        ans = min(ans, solve(d, 7, 5));

        cout << ans << '\n';
    }
}