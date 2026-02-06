#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){

        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;

        map<char,int>mp;
        for(char S:s)mp[S]++;

        int odd_feq = 0;
        
        for(auto &p : mp){
            if(p.second%2!=0) odd_feq++;
        }
        if(odd_feq>(k+1)) cout << "NO" << endl;
        else cout << "YES" << endl;


    }
    return 0;
}
