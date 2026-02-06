#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    long long d;
    cin >> n >> d;

    vector<long long> P(n);
    for (int i = 0; i < n; i++) cin >> P[i];

    sort(P.begin(), P.end(), greater<>());

    int ans = 0;
    int i = 0, j = n - 1;

    while (i <= j) {
        long long need = d / P[i] + 1;
        if (i + need - 1 > j) break;
        i++;
        j -= (need - 1);
        ans++;
    }

    cout << ans << '\n';
    return 0;
}
