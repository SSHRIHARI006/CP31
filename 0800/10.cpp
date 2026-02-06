#include <bits/stdc++.h>
using namespace std;

int Mapping(int i,int j){
    return min({i, j, 9-i, 9-j}) + 1;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int ans = 0;
        vector<vector<char>> v(10, vector<char>(10));

        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                cin >> v[i][j];
                if(v[i][j] == 'X')
                    ans += Mapping(i, j);
            }
        }

        cout << ans << "\n";
    }
    return 0;
}
