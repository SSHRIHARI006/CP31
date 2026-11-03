#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define all(x) (x).begin(), (x).end()
#define pb push_back

bool isprime(long long n) {
    if(n < 2) return false;

    for(long long i = 2; i * i <= n; i++) {
        if(n % i == 0) return false;
    }

    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        ll d;
        cin >> d;

        ll p = d + 1;

        while(!isprime(p)) p++;

        ll q = p + d;

        while(!isprime(q)) q++;

        cout << p * q << '\n';
    }

    return 0;
}