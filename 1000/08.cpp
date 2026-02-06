#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int pre[26] = {}, suf[26] = {};
        int pd = 0, sd = 0;

        for(char c : s) {
            if(suf[c - 'a'] == 0) sd++;
            suf[c - 'a']++;
        }

        int ans = 0;

        for(int i = 0; i < n - 1; i++) {
            int c = s[i] - 'a';

            if(pre[c] == 0) pd++;
            pre[c]++;

            suf[c]--;
            if(suf[c] == 0) sd--;

            ans = max(ans, pd + sd);
        }

        cout << ans << "\n";
    }
}
