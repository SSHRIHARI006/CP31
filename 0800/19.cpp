#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        int neg = 0;

        for(int &x : a){
            cin >> x;
            if(x == -1) neg++;
        }

        int ops = 0;

        if(neg % 2 == 1){
            ops++;
            neg--;  
        }

        int limit = n / 2;

        if(neg > limit){
            ops += neg - limit;
        }

        cout << ops << "\n";
    }
    return 0;
}
