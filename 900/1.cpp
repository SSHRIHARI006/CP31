#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        long long a, b;
        long long xK, yK, xQ, yQ;
        cin >> a >> b;
        cin >> xK >> yK;
        cin >> xQ >> yQ;

        vector<pair<long long,long long>> moves = {
            {a,b}, {a,-b}, {-a,b}, {-a,-b},
            {b,a}, {b,-a}, {-b,a}, {-b,-a}
        };

        set<pair<long long,long long>> kingMoves, queenMoves;

        for(auto &m : moves) {
            kingMoves.insert({xK + m.first, yK + m.second});
            queenMoves.insert({xQ + m.first, yQ + m.second});
        }

        int cnt = 0;
        for(auto &pos : kingMoves) {
            if(queenMoves.count(pos)) cnt++;
        }

        cout << cnt << "\n";
    }

    return 0;
}
