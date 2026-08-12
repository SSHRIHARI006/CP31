#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define all(x) (x).begin(), (x).end()
#define pb push_back

int digits(int n){
    int res = 0;
    while(n){
        res++;
        n /= 10;
    }
    return res;
}

int largest(int n){
    while(n >= 10)
        n /= 10;
    return n;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        int d = digits(n);

        int ans = (d - 1) * 9 + largest(n);

        cout << ans << endl;
    }

    return 0;
}