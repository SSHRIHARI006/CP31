#include <bits/stdc++.h>
using namespace std;

bool isSub(const string &x, const string &s) {
    return x.find(s) != string::npos;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        string x, s;
        cin >> x >> s;

        vector<string> xs(6);
        xs[0] = x;

        for (int i = 1; i <= 5; i++)
            xs[i] = xs[i-1] + xs[i-1];

        int ans = -1;
        for (int k = 0; k <= 5; k++) {
            if (isSub(xs[k], s)) {
                ans = k;
                break;
            }
        }

        cout << ans << endl;
    }
    return 0;
}
