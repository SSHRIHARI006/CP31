#include <bits/stdc++.h>
using namespace std;

unordered_set<string> st;

void dfs(const string &s) {
    if (s.empty()) return;

    st.insert(s);

    if (s.size() >= 1) {
        dfs(s.substr(1));
    }
    if (s.size() >= 2) {
        string t = s;
        t.erase(t.begin() + 1);
        dfs(t);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        st.clear();
        dfs(s);

        cout << st.size() << "\n";
    }
}
