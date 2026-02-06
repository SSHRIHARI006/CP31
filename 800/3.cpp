#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        bool hasThree = false;
        int dotCount = 0;

        for (int i = 0; i < n; i++) {
            if (s[i] == '.') dotCount++;
            if (i + 2 < n && s[i] == '.' && s[i+1] == '.' && s[i+2] == '.')
                hasThree = true;
        }

        if (hasThree) cout << 2 << "\n";
        else cout << dotCount << "\n";
    }

    return 0;
}
