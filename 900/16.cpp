#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    while (n--) {
        string s, t;
        cin >> s >> t;

        int i = s.size() - 1;
        int j = t.size() - 1;

        while (i >= 0) {
            if (j >= 0 && s[i] == t[j]) {
                i--;
                j--;
            } else {
                i--;
            }
        }

        if (j < 0) cout << "YES\n";
        else cout << "NO\n";
    }
}
