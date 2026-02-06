#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, k, x;
        cin >> n >> k >> x;

        if (x != 1) {
            cout << "YES\n";
            cout << n << "\n";
            for (int i = 0; i < n; i++)
                cout << 1 << " ";
            cout << "\n";
        } 
        else {
            if (k == 1 || (k == 2 && n % 2 == 1)) {
                cout << "NO\n";
            }
            else {
                cout << "YES\n";

                if (n % 2 == 0) {
                    cout << n / 2 << "\n";
                    for (int i = 0; i < n / 2; i++)
                        cout << 2 << " ";
                    cout << "\n";
                } 
                else {
                    cout << (n - 3) / 2 + 1 << "\n";

                    // print 3 first
                    cout << 3 << " ";

                    // then print the 2s
                    for (int i = 0; i < (n - 3) / 2; i++)
                        cout << 2 << " ";
                    
                    cout << "\n";
                }
            }
        }
    }
    return 0;
}
