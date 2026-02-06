#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int n = s.size();

        int z = 0, o = 0;
        for (char c : s) {
            if (c == '0') z++;
            else o++;
        }

        int len = 0;
        for (char c : s) {
            if (c == '0') {
                if (o == 0) break;
                o--;
            } else {
                if (z == 0) break;
                z--;
            }
            len++;
        }

        cout << n - len << "\n";
    }
}
