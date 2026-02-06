#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long a, b, c;
        cin >> a >> b >> c;

        long long anna = a + (c + 1) / 2; 
        long long katie = b + c / 2;

        if (anna > katie) 
            cout << "First\n";
        else 
            cout << "Second\n";
    }

    return 0;
}
